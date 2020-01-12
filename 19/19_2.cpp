#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r;
	
	while(cin >> l >> r)
	{
		int count=0;
		for(int i=l;i<=r;++i)
		{
			switch(i%3)
			{
				case 1: ;break;
				case 2:++count;break;
				case 0:++count;break;
			}
		}
		cout << count << endl;
	}
	
	return 0;
}