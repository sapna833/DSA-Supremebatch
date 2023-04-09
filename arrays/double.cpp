#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the elements in array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    cout<<"print the elements in array with double values"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< 2*arr[i]<<" ";
    }
    return 0;

}