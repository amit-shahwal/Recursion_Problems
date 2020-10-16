#include<bits/stdc++.h>
using namespace std;
void per_space(string ip, string op)
{
    if(ip.size()==0)
    {
            cout<<op<<endl;
            return;
    }
    string op1=op;
    string op2=op;
    op1.push_back('_');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    per_space(ip,op1);
    per_space(ip,op2);


}

int main()
{   string op="";
    string ip;
    cin>>ip;
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    per_space(ip,op);

}
