#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,available,created[15],required[15];
    while(scanf("%d",&available))
    {
        if(available<0)
            return 0;
        created[0]=available;
        for(int j=1;j<13;j++)
        {
            cin>>created[j];
        }
        for(int j=0;j<12;j++)
        {
            cin>>required[j];
        }
        cout<<"Case "<<++i<<":"<<endl;
        for(int j=0;j<12;j++)
        {
            if(available>=required[j])
            {
                available= available-required[j];
                cout<<"No problem! :D"<<endl;
            }
            else
            {
                cout<<"No problem. :("<<endl;
            }
            available=available+created[j+1];
        }
    }
    return 0;
}
