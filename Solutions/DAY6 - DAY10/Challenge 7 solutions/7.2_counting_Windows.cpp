#include<iostream>
#define LL long long int
using namespace std;

int cal(LL n,LL m)
{
    if(n==0||m==0)
    {
        return 0;
    }
    if(m==1)
    {
        return n ;
    }
    if (n==1)
    {
        return n;
    }
 return n+cal(n,m-1);
}

int main()
{
    LL n,m,ans;
    cin>>n>>m;
    ans=cal(n,m);
    cout<<ans<<endl;
    return 0;
}
