#include <iostream>
#include <vector>
using namespace std;

bool Find(int target, vector<vector<int> > array) {
	for(int i = 0; i < array.size(); ++i) {
		int start = 0, end = array[i].size()-1;
		while(start <= end){
			int mid= (start+end) >>1;
            if(target > array[i][mid]) {
            	start = mid + 1;
            }
            else if(target < array[i][mid]) {
            	end = mid - 1;
            }
            else 
            	return true;
        }
    }
    return false;
}

int main() {
	vector<vector<int> > v;
	int n,m;
	cout << "Input col number:";
	cin >> n;
	cout << "Input row number:";
	cin >> m;
	int temp;
	v.resize(n, vector<int>(m));
	cout << "从小到大的二维数组" << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v[i].size(); ++j)
			cin >> v[i][j];

	}    
	int x,y;
	for(auto &x : v) {
		for(auto y : x)
			cout << y << " ";
		cout << endl;
	}
	cout << "Input temp:";
	cin >> temp;
	bool result = Find(temp,v);
	if(result)
		cout << "" << temp << endl;
	else
		cout << "" << temp << endl;

	return 0;
}