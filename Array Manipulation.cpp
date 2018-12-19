#include<bits/stdc++.h>
using namespace std;

long long ar[10000004];
int main()
{
    long long  i,j,n,k,x,y,v;
    scanf("%lld %lld",&n,&k);
    while(k--)
    {
        scanf("%lld %lld %lld",&x,&y,&v);
        ar[x]+=v;
        ar[y+1]-=v;
    }
    long long sum, ans;
    sum=ans=0;

    for(i=1; i<=n; i++)
    {
        sum+=ar[i];
        ans=max(ans,sum);
    }
    printf("%lld\n",ans);

}
