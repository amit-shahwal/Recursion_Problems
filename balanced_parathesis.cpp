#include<bits/stdc++.h>
using namespace std;
void balgen(int open,int close, string op)
{

    if(open==0 && close==0)
    {
        cout<<op<<endl;
        return;

    }

    if(open!=0)
    {
        op.push_back('(');
        open--;
        balgen(open,close,op);

    }
    if(close>open)
    {
        op.push_back(')');
        close--;
        balgen(open,close,op);

    }

}
int main()
{
    string op="";
    int o,c,n;
    cin>>n;
    o=c=n;
    balgen(o,c,op);
}
