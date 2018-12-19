#include<bits/stdc++.h>
using namespace std;
int ar[10001];
char str[2002];
int main()
{
    long long  i,j,k,n,ans,r,rem;
    scanf("%s",str);
    scanf("%lld",&n);
    k=strlen(str);
    r=n/k;
    rem=n%k;
    int cnt=0;
    for(i=0; i<k; i++) if(str[i]=='a') cnt++;
    ans=cnt*r;
    for(i=0; i<rem; i++) if(str[i]=='a') ans++;
    printf("%lld\n",ans);


}
