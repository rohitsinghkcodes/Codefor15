#include<iostream>
#define LL long long int
using namespace std;
int main()
{
    LL n,res;
    cin>>n;
    res=n/2;
    if(n%2!=0)
    {
        res++;
        res*=(-1);
    }
    cout<<res<<endl;
    return 0;
}