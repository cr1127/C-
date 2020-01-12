#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int cnt = 1001;
	char res[4] = {'W', 'N', 'E', 'S'};
	int N;
	string s;
	cin >> N;
	cin >> s;
	assert(N <= 1000);
	for (int i = 0; i < N; ++i)
	{
		s[i] == 'R' ? ++cnt : --cnt;
	}
	cout << res[cnt % 4] << endl;
	return 0;
}