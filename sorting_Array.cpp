/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int t[100]= {9,2,5,3};
void insertt(int t[],int n,int x)
{
    if(n==0 || t[n-1]<=x)
    {

        t[n]=x;
        return;
    }
    int y=t[n-1];
    insertt(t,n-1,x);
    t[n]=y;

}
void sortt(int t[],int n)
{
    if(n==1)
        return;
    int x=t[n-1];

    sortt(t,n-1);
    insertt(t,n-1,x);

}

int main()
{
    int n=4;

    sortt(t,n);
    for(int i=0; i<n; i++)
    {
        cout<< t[i];
    }
    return 0;
}
