#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
string s_rev;
cin>>s;

for(int i=s.size()-1;i>=0;i--)
{
s_rev.push_back(s[i]);
}
if(s==s_rev)
{cout<<"YES";}
else{cout<<"NO";}

return 0;
}