#include <iostream>

using namespace std;
void toh(int n,int s, int d,int h)
{
    if(n==1)
    {
        cout<<"moving disk"<<n<<" from" <<s<<"to"<<d<<endl;
        return;
    }
    toh(n-1,s,h,d);
    cout<<"moving disk"<<n<<" from" <<s<<"to"<<d<<endl;
    toh(n-1,h,d,s);
}

int main()
{
    int s=1,d=3,h=2;
    int n;
    cin>>n;
    toh(n,s,d,h);

    return 0;
}
