#include<bits/stdc++.h>
using namespace std;
int ar[10001];
int main()
{
    int i,j,k,n,ans;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ar[i]);
    int lo=0;
    ans=0;
    while(lo<n-1)
    {
        ans++;
        if(ar[lo+2]==1)
        {
            lo++;
        }
        else
            lo+=2;
    }
    printf("%d\n",ans);

}
