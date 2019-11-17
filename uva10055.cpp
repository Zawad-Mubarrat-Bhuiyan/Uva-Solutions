#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a>b)
        {
            printf("%lld",a-b);
        }
        else
        {
            printf("%lld",b-a);
        }
    }
    return 0;
}
