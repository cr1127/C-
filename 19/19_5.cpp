#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll  n, k;
	ll count = 0;
	cin >> n;
	cin >> k;
	if( k == 0)
		count = n * n;
	else
		for (ll i = k + 1; i <= n; ++i)
		{
			count += (n / i) * (i - k) + (n%i >= k ? n%i-k+1 : 0);
		}

	cout << count << endl;
	return 0;
}
// 首先被除数x 除数y 因为要求x%y>=k，则y一定是要大于k的（细想想！如果小于等于k了 余数不可能大于等于k的），所以k的取值应该从k+1到n;

// 然后看看可能的x有哪些。首先想，从1到n闭区间的范围内，可以划分为若干的段，比如[1,y] [y+1,2y] [2y+1,3y]……[my+1,n]

// 每个长度为y的段中，都有k个数（[my+1,my+k)）除以y的余数是小于k的，则这一段中余数大于等于k的有y-k个

// 所以统计，一共有n/y个长度为y的段，共有n/y*(y-k)个数字满足条件；

// 然后考虑最后剩余的那一段，即[mk+1,n]，这段的长度为n%y，要判断其长度，如果大于k了，则说明有满足条件的数字，要统计其个数并加上；如果小于k则说明没有把满足条件的数字包含进来。
