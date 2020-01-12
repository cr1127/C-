#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	char s[3][3];
	string resA, resB ;
	resA = resB = "?";
	string res[t];
	while(t)
	{

		for (int i = 0; i < 3; ++i)
		{
			scanf("%s", s[i]);
		}

		for (int i = 0; i < 3; ++i)
		{
			if((s[i][0]==s[i][1] && s[i][1]==s[i][2] && s[i][2]== 'A')||(s[0][i]==s[1][i] && s[1][i] ==s[2][i] && s[2][i] == 'A') )
			{
				resA = "Yes";
			}
			if((s[i][0]==s[i][1] && s[i][1]==s[i][2] && s[i][2]== 'B')||(s[0][i]==s[1][i] && s[1][i] ==s[2][i] && s[2][i] == 'B'))
			{
				resB= "No";
			}


		}
		if((s[0][0]==s[1][1] && s[1][1]==s[2][2] && s[2][2]=='A')||(s[0][2]==s[1][1] && s[1][1]==s[2][0] && s[2][0]=='A'))
			resA = "Yes";
		if((s[0][0]==s[1][1] && s[1][1]==s[2][2] && s[2][2]=='B')||(s[0][2]==s[1][1] && s[1][1]==s[2][0] && s[2][0]=='B'))
			resB = "No";
		if(resA == "Yes" && resB == "No")
			cout << "invalid" << endl;
		else if(resA == "Yes")
			cout << "Yes" << endl;
		else if(resB == "No")
			cout <<"No" << endl;
		else
			cout << "draw" << endl;

	}

	return 0;
}