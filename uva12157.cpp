#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a,mile=0,juice=0,m,j,i=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            cin>>a;
            m=a/30;
            m=m+1;
            mile=mile+(m*10);
            j=a/60;
            j=j+1;
            juice=juice+(j*15);
        }
        if(mile<juice)
        {
            cout<<"Case "<<i<<": "<<"Mile "<<mile<<endl;
        }
        else if(juice<mile)
        {
            cout<<"Case "<<i<<": "<<"Juice "<<juice<<endl;
        }
        else if(juice==mile)
        {
            cout<<"Case "<<i<<": "<<"Mile Juice "<<juice<<endl;
        }
        i++;
        mile=0;
        juice=0;
    }
        return 0;
}
