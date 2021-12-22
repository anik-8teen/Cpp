      #include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(isspace(s[i]))
        {
            cout<<endl;
            i++;
        }
        else{
        s[i]=s[i]-32;
      cout<<s[i];
        }

    }

  //  char A=" ";

  /*  for(int i=0;i<s.size();i++)
    {
        char str=toupper(s[i]);

      if( isspace(str)){
          cout<<"/n ";}

          cout<<str[i];
          i++;


    }
    */
    //cout<<s;
}
