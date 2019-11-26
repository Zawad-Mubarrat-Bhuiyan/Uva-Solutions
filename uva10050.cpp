#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,days,party,hartal;
    cin>>testcase;
    for(int i=0; i<testcase; i++)
    {
        cin>>days;
        vector <int> v;
        set<int> s;
        cin>>party;
        for(int j=0; j<party; j++)
        {
            cin>>hartal;
            v.push_back(hartal);
        }

        for(int k=0; k<v.size(); k++)
        {
            for(int j=1; j<days; j++)
            {
                if((v[k]*j)>days)
                {
                    break;
                }
                if( (((v[k]*j)%7)!=6) && (((v[k]*j)%7)!=0) )
                {
                    s.insert((v[k]*j));
                }
            }
        }
        cout<< s.size() <<endl;
    }
    return 0;
}
