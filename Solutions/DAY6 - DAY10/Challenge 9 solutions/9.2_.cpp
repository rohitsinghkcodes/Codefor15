#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    int finalVal = 0;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    for(int &it:v) finalVal^=it;
    cout<<finalVal<<endl;
    return 0;
}