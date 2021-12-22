#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s,y;
    cin>>s;
    cin>>y;

   
    int n=s.size();
    for(int i=0;i<n-1;i++)
    {
        s[i]=s[i]+1;

    }

     for(int i=0;i<n-3;i++)
    {
        s[i]=s[i]+1;

    }
    
    if(s==y)
    {cout<<"YES"<<endl;}
    else{cout<<"NO";}

}