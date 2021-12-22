#include<bits/stdc++.h>
using namespace std;

int  main ()
{
    int m,n;
    cin>>m>>n;
 int a[m][n];
 for(int i=0;i<m;i++)
 {
     int sumc=0;
     int sumd=0;

    for(int j=0;j<n;j++)
    {
        sumc=sumc+a[i][j];

        if(j<m)
        {sumd=sumd+a[j][i];}
        if(sumc!=sumd)
        {
            return 0;
        }
        return 1;
    }
 }

}