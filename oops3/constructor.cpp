#include<iostream>
using namespace std;
class animal
{
    public:
    animal(){
        cout<<"i am consturctor in animal"<<endl;
    }
virtual void speak(){
        cout<<"speaking"<<endl;
    }

};
class dog: public animal{
    public:
    dog(){
        cout<<"i am consturctor in dog"<<endl;
    }
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main(){
    animal*B=new animal();
    
    ////iska output speaking
        dog*a=new dog();
         a->speak();
    ///iska output barking
    //upcasting........
    animal*C=new dog();
    C->speak();
    //OUTPUT BARKING
   


    return 0;
}
