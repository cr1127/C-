#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int d[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &d[i]);
	}
	int start = 0, end = n-1;
	long long res = 0;
	long long sum_start = 0;
	long long sum_end = 0;
	while(start <= end)
	{
		if(sum_start == sum_end)
		{
			res = sum_start;
			sum_start += d[start++];
			sum_end += d[end--];
		}
		else if(sum_start < sum_end)
			sum_start += d[start++];
		else
			sum_end += d[end--];
	}
	if(sum_start == sum_end)
		res = sum_start;
	cout << res << endl;
	return 0;
}