#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=0;
        if(b>a){ans++;}
        if(c>a){ans++;}
        if(d>a){ans++;}

        cout<<ans<<"\n";


    }



    return 0;
}


