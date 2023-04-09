#include<iostream>
using namespace std;
int main(){
    int passenger;
    cin>>passenger;
    int empty;
    if (passenger >50){
       empty= (passenger%50);
       cout<<empty;
    }
    else{
        cout<<50-passenger;
    }

return 0;

}