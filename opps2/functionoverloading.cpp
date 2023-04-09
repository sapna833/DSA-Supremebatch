#include<iostream>
using namespace std;
class maths{
    public:
    int sum(int a,float b){
        cout<<"first sum is"<<endl;return a+b;
    }
    int sum(int a,int b,int c)
    {
        cout<<"second sum is"<<endl;return a+b+c;
    }
};
int main(){
    maths obj;
   // cout<<obj.sum(2,5);
   cout<<obj.sum(2,5,5);
    cout<<obj.sum(2,5.5);
    return 0;
}