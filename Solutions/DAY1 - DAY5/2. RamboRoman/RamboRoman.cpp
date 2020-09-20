//Alternate and short method to solve Challenge2

#include<iostream>
using namespace std;

void CalRoman(int sum)
{
    int no[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string romanval[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","XM","M"};
    int i=12;
    while (sum>0)
    {
        int val = sum/no[i];
        sum = sum%no[i];
        while (val--)
        {
            cout<<romanval[i];
        }
        i--;
        
    }
    
}
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        int n;
        cin>>n;
        if(n==0) cout<<"\nSorry! No value."<<endl;

        else CalRoman(n);cout<<endl;

    }
    return 0;
}