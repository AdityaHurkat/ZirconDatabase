#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=100;
    for(int i=0;i<t;i++)
    {
        string s1,s2,ans;
        string q;
        q=34;
        cin>>s1;
        cin>>s2;
        //getline(cin, s2);
        //s1 published sample id
        //s2 link to the file
        if(s2=="N/A")
        {
            string a,b,c,d,f,g;
            a="['<div class=";
            b="'<h3>";
            c="</h3>' + ";
            d="'<p>Link not available</p>' + ";
            f="'</div>'],";
            g="info_content";
            ans=a+q+g+q+">' + ";
            cout<<ans<<endl;
            ans=b+s1+c;
            cout<<ans<<endl;
            cout<<d<<endl;
            cout<<f<<endl;
        }
        else
        {
            string a,b,c,d,e,f,g;
            a="['<div class=";
            b="'<h3>";
            c="</h3>' + ";
            d="'<p> <a href=";
            e=">Link to file</a></p>' + ";
            f="'</div>'],";
            g="info_content";
            ans=a+q+g+q+">' + ";
            cout<<ans<<endl;
            ans=b+s1+c;
            cout<<ans<<endl;
            ans=d+q+s2+q+e;
            cout<<ans<<endl;
            cout<<f<<endl;
        }
    }

    return 0;
}

//R0035-S0236 link not available