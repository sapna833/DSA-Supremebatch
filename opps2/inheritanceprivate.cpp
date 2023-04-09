#include<iostream>
using namespace std;
class animal{
public:
int age ;
//here also i can declare value of age example int age=30;
};
class dog:  private animal{
    public:
    void print(){
        this->age=40;
        cout<<this->age;
    }


};
int main(){
    dog d1;
    
    d1.print();
    return 0;
}