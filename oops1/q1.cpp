#include<iostream>
using namespace std;

class animal{
    private:
    int weight;
     public:
    // if private we use getter and setter;
    

    int age;
    string name;
    

void sleep()
{
    cout<<"sleeping"<<endl;
}
void eat(){
    cout<<"eating"<<endl;
}
int getweight(){
    return weight;
}
int setweight(int weight){
   this->weight=weight;
}

};
int main(){
    //cout<<"size of empty class"<<sizeof(animal)<<endl;
    //size will be 1 of empty class
    // cout<<"size of class"<<sizeof(animal)<<endl;
// we use dot operator to call
//static 
animal ramesh;
ramesh.age = 12;
ramesh.name = "lion";
cout<<"age of remesh"<<ramesh.age<<endl;
cout<<"name of remesh"<<ramesh.name<<endl;

ramesh.sleep();
ramesh.eat();
ramesh.setweight(101);
cout<<"weight"<<ramesh.getweight()<<endl;

 return 0;
}
