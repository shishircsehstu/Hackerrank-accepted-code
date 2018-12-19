#include<bits/stdc++.h>
using namespace std;
int ar[10][10];
int cal(int a,int b,int aa,int bb)
{
    int i,j,sum=0;
    for(i=a; i<=aa; i++)
    {
        for(j=b; j<=bb; j++)
            sum+=ar[i][j];
    }
    sum-=(ar[a+1][b]+ar[a+1][b+2]);
    return sum;
}
int main()
{
    int i,j,n,k,x,y,cnt,ans;
    ans=-9999999;
    for(i=1; i<=6; i++)
    {
        for(j=1; j<=6; j++)
            scanf("%d",&ar[i][j]);
    }
    y=3;
    for(i=1; i<=4; i++)
    {
        x=cal(1,i,3,y);
        y++;
        ans=max(ans,x);
    }
    y=3;
    for(i=1; i<=4; i++)
    {
        x=cal(2,i,4,y);
        y++;
        ans=max(ans,x);
    }
    y=3;
    for(i=1; i<=4; i++)
    {
        x=cal(3,i,5,y);
        y++;
        ans=max(ans,x);
    }
    y=3;
    for(i=1; i<=4; i++)
    {
        x=cal(4,i,6,y);
        y++;
        ans=max(ans,x);
    }
    cout<<ans<<endl;

}
