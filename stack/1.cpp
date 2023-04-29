#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation
    stack<int>st;
    //inseertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //remove
    st.pop();
    //check element
    cout<<"element on top"<<st.top()<<endl;
    //size
    cout<<"size of  stack"<<st.size()<<endl;
    if(st.empty())
    cout<<"stack is empty"<<endl;
    else
    cout<<"stack is not empty"<<endl;
    return 0;





}