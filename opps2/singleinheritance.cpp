#include<iostream>
using namespace std;
class car
{
    public:
    string name;
    int weight;
    int age;
    void speed(){
        cout<<"speedingup"<<endl;
    }
    void breaking(){
        cout<<"breaking up"<<endl;
    }
};
class scorpio :public car{

};
int main()
{
    scorpio dreamcar;
    dreamcar.breaking();
    return 0;
 
}