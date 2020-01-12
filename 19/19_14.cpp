#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n,0),res,st;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	while(1) {
		auto max = max_element(a.begin(), a.end());
		auto min = min_element(a.begin(), a.end());
		st.push_back(*max - *min);
		if(st.size() > k || *max - *min <= 1) 
			break;
		res.push_back(max - a.begin() + 1);
		res.push_back(min - a.begin() + 1);
		--*max;
		++*min;
	}

	while(st.size() > 1 && *(st.end()-2) == *(st.end() - 1))
		st.pop_back();

	int m = st.size()-1;
	cout << st.back() << " " << m << endl;		
	for (int i = 0; i < m; ++i)
	{
		cout << res[2*i] << " " << res[2*i+1] << endl;
	}

	return 0;
}