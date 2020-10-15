//delete middle element of a stack
#include<bits/stdc++.h>
using namespace std;
stack <int> st;
void deletest(stack<int> &st,int k)
{
      if(k==1)//base conditon
{
    st.pop();
    return;
}
//induction
        int kl=st.top();
            st.pop();
    deletest(st,k-1);
    st.push(kl);

}
int main()
{

    st.push(1);st.push(2);st.push(3);st.push(4);st.push(5);
    int k=(st.size()/2)+1;
    deletest(st,k);
    while(!st.empty()){
        cout<<st.top();
    st.pop();
    }
}
