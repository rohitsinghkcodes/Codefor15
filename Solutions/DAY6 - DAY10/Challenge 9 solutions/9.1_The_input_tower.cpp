#include<iostream>
using namespace std;

void patternPrint(int *n)
{
    *n=(*n%2==0)?*n:*n+1;
    for( int i=0;i<*n/2;i++)
    {
        for(int l=0;l<2;l++)
        {
            for(int j=(*n/2)-i;j>0;j--)
                {
                    cout<<"   ";
                }
        
            for(int k=0;k<(2*i)+2;k++)
                {
                    cout<<"*  ";
                }
            cout<<endl<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the height of the tower= ";
    cin>>n;
    patternPrint(&n);
    
}