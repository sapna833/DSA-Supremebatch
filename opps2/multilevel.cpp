#include<iostream>
using namespace std;
class fruit{
    public:
    string name;

};
class mango: public fruit{
    public:
    int weight;
};
class Alphanso:public mango{
    public:
    int sugarlevel;
};
int main(){
    Alphanso a;
    a.weight=12;
    a.sugarlevel=37;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugarlevel<<endl;
    return 0;
}