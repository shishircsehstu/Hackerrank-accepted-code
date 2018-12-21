#include<bits/stdc++.h>
using namespace std;
map<long long,int>fre;
map<long long, int>ar;
int main()
{
    long long i,j,t,n,k,x,y,cnt,ans;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld %lld",&x,&y);
        if(x==1)
        {
            fre[y]++;
            x=fre[y];
            ar[x-1]--;
            ar[x]++;
        }
        else if(x==2)
        {
            if(fre[y])
            {
                x=fre[y];
                ar[x]--;
                fre[y]--;
                ar[x-1]++;
            }
        }
        else
        {

            if(ar[y])
                printf("1\n");
            else printf("0\n");
        }
    }


}
