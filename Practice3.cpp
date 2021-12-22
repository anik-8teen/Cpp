#include<bits/stdc++.h>
using namespace std;

int main ()
{

   int t,n;
   cin>>t;
       cin>>n;
   int sum=0;
    while(t--)
    {
        while(n>0)
        {
            int last_dig=n%10;
            sum=sum+last_dig;

            n=n/10;
        }
    }


cout<<sum;

    return 0;
}
