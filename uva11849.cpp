#include<set>
#include<iostream>
using namespace std;
int main()
{
    set<int> s1,s2;
    set<int>::iterator it;
    int x,y,n,m,cnt=0;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        else
        {
            for(int i=0; i<n; i++)
            {
                cin>> x;
                s1.insert(x);
            }
            for(int i=0; i<m; i++)
            {
                cin>> y;
                if(s1.find(y) != s1.end())
                {
                    cnt++;
                }
            }
            s1.clear();
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}
