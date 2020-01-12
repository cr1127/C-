#include <bits/stdc++.h>
using namespace std;
struct Load 
{
	int length;
	int lingtNum;
	string s;
};
int placeLight(int length, string s) 
{
	int count = 0;
	for (int i = 0; i < length; ++i)
	{
		if(s[i] == '.')
		{
			++count;
			i += 2;
		}
	}
	return count;
}
int main() 
{
	int t;
	cin >> t;
	Load *load = new Load[t];
	for (int i = 0; i < t; ++i)
	{
		cin >> load[i].length;
		cin >> load[i].s;
		load[i].lingtNum = placeLight(load[i].length, load[i].s);
		cout << load[i].lingtNum << endl;
	}

	return 0;
}