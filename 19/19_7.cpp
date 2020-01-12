#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int h,m,used_m,last_h,last_m,last;
        vector<int> times;
        for(int i = 0;i<n;i++){
            cin>>h>>m;
            times.push_back(h*60+m);
        }
        cin>>used_m>>last_h>>last_m;
        last = last_h*60+last_m-used_m;
        sort(times.begin(),times.end());
        int start = 0;
        int end = times.size()-1;
        int mid = 0;
         while(start <= end) 
        {
            mid = (start + end) >> 1;
            if(times[mid] == last )
                break;
            else if(end - start == 1)
            {
                mid = start;
                break;
            }
            else if(times[mid] > last)
                end = mid ;
            else 
                start = mid;

        }
        h = times[mid]/60;
        m = times[mid]%60;
        cout<<h<<" "<<m<<endl;
    }
    return 0;
}
