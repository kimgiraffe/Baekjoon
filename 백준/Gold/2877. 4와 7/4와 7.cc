#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

typedef long long ll;

ll i,n,m,cnt;

int main(){
    scanf("%lld",&n);
    while(cnt + (1ll<<(i+1)) < n) cnt += (1ll<<++i);
    m=n-cnt-1;
    for(ll j=i;j>=0;j--) printf("%d",4 + 3 * !(!(m & (1<<j))));

	return 0;
}

