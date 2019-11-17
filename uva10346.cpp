#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,tb,b,r,s;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
       s=n;
       tb=0;
       while(s>=k)
       {
           b=s/k;
           r=s%k;
           s=b+r;
           tb=tb+b;
       }
       cout<<n+tb<<endl;
    }
    return 0;
}
