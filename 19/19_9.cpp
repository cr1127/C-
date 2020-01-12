#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, temp;
	vector<int> num;
	vector<int> ncount;
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> temp;
		num.push_back(temp);
	}
	for (int i = 1; i <= n; ++i)
	{
		temp = count(num.begin(), num.end(), i);
		ncount.push_back(temp);
	}
	vector<int>::iterator minCount = min_element(ncount.begin(), ncount.end());
	cout << ncount[minCount - ncount.begin()] << endl;
	return 0;
}