#include<iostream>
using namespace std;
  
int x[100][2];
int y[100][2];
  
int main()
{
    int n,num=0,temp=0;
      
    cin >> n;
      
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i][0];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> y[i][0];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i][1];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> y[i][1];
    }
    
    for (int j = 0; j < n; ++j)
    {
        for (int k = 0; k < n; ++k)
        {
            temp = 0;
            for (int i = 0; i < n; ++i)
            {
                if(x[j][0] >= x[i][0] && x[j][0] < x[i][1])
                    if(y[k][0] >= y[i][0] && y[k][0] < y[i][1])
                        ++temp;
            }
            if(num < temp)
                num = temp;
        }
    }
    cout << num << endl;
      
    return 0;
}
