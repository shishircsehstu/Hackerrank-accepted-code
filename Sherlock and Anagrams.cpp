
#include<bits/stdc++.h>
using namespace std;
string str[100005];
map<string,int>mpp;
map<string,int>vis;
int main()
{
    int i,j,t,n,k,r,x,y,cnt,ans;
    string st,st2;
    scanf("%d",&t);
    while(t--)
    {
        cin>>st;
        n=st.size();
        k=0;
        for(i=0; i<n; i++)
        {
            r=n-i;
            x=1;
            while(r--)
            {
                st2=st.substr(i,x);
                sort(st2.begin(),st2.end());
                mpp[st2]++;
                str[k++]=st2;
                //cout<<st2<<endl;
                x++;
            }
        }
        ans=0;
        for(i=0; i<k; i++)
        {
            st=str[i];
            if(vis[st]==0)
            {
                x=mpp[st];
                ans+=(x*(x-1))/2;
                vis[st]=1;
            }
        }
        printf("%d\n",ans);
        mpp.clear();
        vis.clear();
    }


}
