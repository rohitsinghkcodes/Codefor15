#include<iostream>
using namespace std;
int main()
{
    int no,x;
    cin>>no>>x;
    for(int i=0;i<x;i++)
    {
        if(no%10!=0) no--;
        else no/=10;
    }
    cout<<no<<endl;
    return 0;
}