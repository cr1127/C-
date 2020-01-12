#include <bits/stdc++.h> 
using namespace std;
long long v[30];
long long fun(int i, long long w)
{
	if(w < 0)
		return 0;
	if(i == 0)
	{
		if(w >= v[0])
			return 2;
		else
			return 1;
	}
	return fun(i-1,w) + fun(i-1, w-v[i]);
}
int main() 
{
	int n;
	long long w,res, count;
	res = 0;
	count = 0;
	cin >> n >> w;
	for (int i = 0; i < n; ++i)
	{
		scanf("%lld", &v[i]);
		res += v[i];
	}
	if(res <= w)
	{
		count = pow(2,n);
	}
	else
	{
		count = fun(n-1,w);
	}
	cout << count << endl;
	return 0;
}