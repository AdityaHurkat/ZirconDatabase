#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=number_of_coordinates;
    for(int i=0;i<t;i++)
    {
        string s1,s2,a,b,c;
        a="[";
        b="],";
        c=", ";
        cin>>s1;
        cin>>s2;
        string ans;
        ans=a+s1+c+s2+b;
        cout<<ans<<endl;
    }

    return 0;
}