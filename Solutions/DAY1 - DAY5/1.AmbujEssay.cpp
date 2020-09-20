#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int length,count = 0;
    char s[500];
    cout<<"Enter the string:";
    cin.getline(s,500);
    length = strlen(s);
    for(int i=0;i<=length;i++)
    {
        if(s[i]==' ' || s[i]=='\t' || s[i]==(char)NULL ) count++;
     
        else if((s[i]=='.' and s[i+1]==' ') )
        {
            count++;
            i++;
        }
        else if(s[i]==',' and s[i+1]==' ') 
        {
            count++;
            i++;
        }
       
        else if (s[i]=='.' and isalpha(s[i+1]) or s[i]==',' and isalpha(s[i+1])) count++;
  
    }
    cout<<"\nThe word limit for the essay writing competition is "<<count<<endl;
    return 0;

}
