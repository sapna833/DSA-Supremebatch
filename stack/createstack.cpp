#include<iostream>
using namespace std;
class stack{
    public:
    int*arr;
    int top;
    int size;
    stack(int size){
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    //functionsss.......
    void push(int data)
    {
        if (size-top>=1){
            //space hai 
            top++;
            arr[top]=data;
        }
        else{
            //space nako hai
            cout<<"stack is overflow"<<endl;

        }
    }
    void pop(){
        if(top==-1){
            //stack is empty
            cout<<"stack underflow"<<endl;

        }
        else{
            top--;
        }
    }
int gettop(){
    if(top==-1)
    {
        cout<<"there is no element in stack"<<endl;
    }
    else{
        return arr[top];
    }
}
//n.of valid element in stack
int getsize(){
    return top+1;
}
bool isempty(){
    if(top==-1){
        return true;
    }
else{
    return false;
}
}
};
int main(){
    stack s(10);
    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    while(!s.isempty())
    {
        cout<<s.gettop()<<" ";
        s.pop();
    
    
cout<<"size of stack"<<s.getsize()<<endl;
 }
        
 return 0;
}
