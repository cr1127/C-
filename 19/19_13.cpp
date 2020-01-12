#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int res, res2, res3, res4;
	res = a + b * c;
	res2 = a * (b + c);
	res3 = a * b * c;
	res4 = (a + b) * c;

	res = res <= res2 ? res2 : res;
	res = res <= res3 ? res3 : res;
	res = res <= res4 ? res4 : res;

	cout << res << endl; 

	return 0;
}