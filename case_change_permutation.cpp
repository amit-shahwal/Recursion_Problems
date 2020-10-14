#include<bits/stdc++.h>
using namespace std;

void casechange(string ip,string op)
{
    if(ip.size()==0)
    {
        cout<<op<<endl;
        return;
    }
    string op1=op;
    string op2=op;
    op1.push_back(ip[0]);
    char ch=ip[0]-32;
    op2.push_back(ch);
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

}
