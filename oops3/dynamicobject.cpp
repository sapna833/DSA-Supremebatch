#include<iostream>
using namespace std;
class animal
{
    public:
virtual void speak(){
        cout<<"speaking"<<endl;
    }

};
class dog: public animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main(){
    animal*B=new animal();
     B->speak();
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
