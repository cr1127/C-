#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	int res = 0;
 	int interest[100001]={0};
 	int time[100001]={0};
 	vector<int> interest;
 	vector<int> time;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &interest[i]);
	}
	int sleep = 0;
	int sleep_time[10001];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &time[i]);
		if(time[i] == 1)
			res += interest[i];
		else
			sleep += interest[i];
		sleep_time[i] = sleep;
	}

    for (int i = 0; i < n; ++i)
    {
    	cout << sleep_time[i] << " ";
    }
    cout << endl;
	int sleep_res = 0;
	for (int i = 0; i < n; ++i)
	{
		int sleeptime = 0;
		if((i+k-1) >= n)
			sleeptime = (i>0)?sleep_time[n-1]-sleep_time[i-1]:sleep_time[n-1];
		else
			sleeptime = (i>0)?sleep_time[i+k-1]-sleep_time[i-1]:sleep_time[i+k-1];
		sleep_res = (sleep_res >= sleeptime)?sleep_res:sleeptime;
	}
	cout << res+sleep_res << endl;
	return 0;
}