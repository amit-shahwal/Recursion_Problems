#include<bits/stdc++.h>
#include<ctype.h>

using namespace std;
map <string,int> mp;
auto it=mp.begin();
void casechange(string ip,string op)
{
    if(ip.size()==0)
    {   mp[op]++;
return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(ip[0]);

    if(isalpha(ip[0]))
    {
        if(isupper(ip[0]))
             op2.push_back(ip[0]+32);
        else
             op2.push_back(ip[0]-32);
    }
    else
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    casechange(ip,op1);
    casechange(ip,op2);
}
int main()
{
    string ip;
    string op="";
    cin>>ip;
    casechange(ip,op);
    for(it=mp.begin();it!=mp.end();it++)
         cout<<it->first<<endl;

}
