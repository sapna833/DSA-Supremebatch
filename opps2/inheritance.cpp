#include<iostream>
using namespace std;
class animal{
public:
int age;
int weight;
void eat(){
   cout<< "eating"<<endl;
}
};
class dog: public animal{

};
int main(){
    dog d100;
    d100.eat();
  
   
    return 0;
}

