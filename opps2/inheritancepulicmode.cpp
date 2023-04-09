#include<iostream>
using namespace std;
class animal{
public:
int age;
};
class dog: public animal{

//therer is nothing be it will heritetd with animal
};
int main(){
    dog d1;
    d1.age=1;
    cout<<d1.age;
    return 0;
}