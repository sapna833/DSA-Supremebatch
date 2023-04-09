#include<iostream>
using namespace std;
class A{
    public:
    int chemistry =12;
};
class B{
    public:
    int chemistry =16;
};
class c: public A , public B{
    public:
    int maths=60;
};
int main()
{
    c obj;
    cout<<obj.A::chemistry<<" "<<obj.maths<<endl;
    return 0;
}