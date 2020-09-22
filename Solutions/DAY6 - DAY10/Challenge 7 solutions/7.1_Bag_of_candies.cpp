#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(4);
    for(int &it:v) cin>>it;
    sort(v.begin(),v.end());
    if((v.at(0)+v.at(3)==(v.at(1)+v.at(2)))) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}