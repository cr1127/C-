#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    scanf("%d", &T);
    while (T-- > 0) {
        long long a, b, c, d, e;
        scanf("%lld%lld%lld%lld%lld", &a, &b, &c, &d, &e);
        if (b <= c) {
            printf("Yes\n");
            continue;
        }
        else if (a <= d) {
            printf("No\n");
            continue;
        }
        else if (c <= e) {
            printf("No\n");
            continue;
        }
        else {
            long long n =(b-c)/(c-e);
            if ((b - c) % (c - e) != 0) {
                n++;
            }
            n++;
            if (a-d*(n-1)<=0) {
                printf("No\n");
            }
            else {
                printf("Yes\n");
            }
 
        }

    }
 
    return 0;
}