#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	long long k;
	cin >> n >> m >> k;
	vector<char> x;
	while(n && m)
	{
		long long count = 1;
		//求组合数
		for (int i = 0; i < n-1; ++i)
		{
			count *= n-1 + m -i;
			count /= (i+1);
			if(count > k) break;
		}
		if( k <= count)
		{
			x.push_back('a');
			--n;
		}
		else 
		{
			x.push_back('z');
			--m;
			k -= count;
		}
	}
	if(k != 1)
		cout << -1 << endl;
    else
    {
        while(n--)
		    x.push_back('a');
	    while(m--)
		    x.push_back('z');
	    for (int i = 0; i < x.size(); ++i)
	    {
		    cout << x[i];
	    }
	    cout << endl;
    }


	return 0;
}