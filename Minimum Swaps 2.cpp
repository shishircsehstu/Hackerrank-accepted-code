#include<bits/stdc++.h>
using namespace std;
int ar[1000004];
int indx[1000004];
int main()
{
    int i,j,n,k,x,y,cnt;
    while(scanf("%d",&n)==1)
    {
        cnt=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ar[i]);
            indx[ar[i]]=i;
        }
        for(i=1; i<=n; i++)
        {
            x=ar[i];
            if(x!=i)
            {
                y=indx[i];
                cnt++;
                ar[y]=x;
                indx[x]=y;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;

}
