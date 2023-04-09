#include<iostream>
using namespace std;

class animal{
   
     public:
    int age;
    string name;
    // default constructor
    animal(){
        this->age;
        this->name;
        cout<<"constructor called"<<endl;
    }
    //parameterized constructor
     animal(int age ){
        this->age;
        
        cout<<"parameterized called"<<endl;
    }
//copy constructor
animal(  animal &obj)
{
    this->age= obj.age;
    this->name= obj.name;
    cout<<"i am copy constructor"<<endl;

}

};
int main()
{
//default
animal a;
animal*b=new animal();
//paeameterized
animal a(1);
animal*b=new animal(10);
//copy constructor
animal copy(a);
return 0;

}
