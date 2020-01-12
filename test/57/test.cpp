#include<bits/stdc++.h>
using namespace std;
void fun(long long hp1 , long long hp2, long long atk1, long long atk2, long long m)
{
	while(1)
	{
		hp2 -= atk1;
		if(hp2 <= 0 && hp1 > 0)
		{
			cout << "Yes" << endl;
			break;
		}

		hp1 -= atk2;
		if(hp1 <= 0 )
		{
			cout << "No" << endl;
			break;
		}
		hp2 += m;

	}
}
int main()
{
	int T;
	cin >> T;
	long long hp1 = 0;
	long long atk1 = 0;
	long long hp2 = 0;
	long long atk2 = 0;
	long long m = 0;
	while(T)
	{
		cin >> hp1 >> hp2 >> atk1 >> atk2 >> m;
		if(atk1 <= atk2 && hp2 >= hp1)
		{
			cout << "No" << endl;
			break;
		}
		int count = hp2 / atk1;
		hp1 = hp1 - atk1 * (count-1);
		hp2 = hp2 - atk2 * (count-1) + m * (count-1);
		fun(hp1, hp2 , atk1, atk2, m);
		--T;
	}
	return 0;
}