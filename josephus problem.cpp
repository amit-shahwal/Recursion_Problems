#include<bits/stdc++.h>
using namespace std;
vector<int> ip;
void jos (vector<int> &ip,int k, int index, int &ans)
{
    if(ip.size()==1)
    {
        ans=ip[0];
        return;
    }
    index=(index+k)%ip.size();
    ip.erase(ip.begin()+index);
    jos(ip,k,index,ans);


}
int main()
{
    int n,k,ans=-1;
    cin>>n;
    cin>>k;
    for(int i=1;i<=n;i++)
        ip.push_back(i);
    int index=0;
    k--;
    jos(ip,k,index,ans);
    cout<<ans;

}
