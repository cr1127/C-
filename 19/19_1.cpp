#include<bits/stdc++.h>
using namespace std;
struct Work{int trouble;int money;};
struct Hum{int ability;int index;int workMoney;};
bool cmpTrouble(Work a,Work b)
{
    return a.trouble < b.trouble;
}
bool cmpAbility(Hum a,Hum b)
{
    return a.ability < b.ability;
}
bool cmpIndex(Hum a, Hum b)
{
    return a.index < b.index;
}
int main()
{
    int N,M;
    cout << "输入工作的数量N和工作的难度M:" << endl;
    cin >> N >> M;
    Work *work=new Work[N];
    for(int i=0;i<N;++i)
        cin >> work[i].trouble >> work[i].money;
    Hum *hum=new Hum[M];
    for(int i=0;i<M;++i)
    {
        cin >> hum[i].ability;
        hum[i].index=i;
    }
    sort(work,work+N,cmpTrouble);
    sort(hum,hum+M,cmpAbility);
    int j=0,maxMoney=0;
    for(int i=0;i<M;++i)
    {
        while(j<N)
        {
            if(work[j].trouble > hum[i].ability)
                break;
            maxMoney = max(maxMoney,work[j].money);
            ++j;
        }
        hum[i].workMoney=maxMoney;
    }
    sort(hum,hum+M,cmpIndex);
    for(int i=0;i<M;++i)
        cout << hum[i].workMoney << endl;
    delete[] work;
    delete[] hum;
    return 0;
}