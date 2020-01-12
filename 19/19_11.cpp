#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n;
	vector<int> a(n,0);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
		a[i] = (i>0)?a[i-1] + a[i]:a[i]; 
	}
	cin >> m;
	vector<int> q(m,0);
	for (int i = 0; i < m; ++i)
	{
		scanf("%d", &q[i]);		
	}

	for (int i = 0; i < m; ++i)
	{
		int start = 0, end = n-1;
		while(start < end)
		{
			int mid = (start + end) >> 1;
			if(a[mid] < q[i])
				start = mid +1;
			else
				end = mid;
		}
		cout << end + 1 << endl;

	}
	return 0;
}