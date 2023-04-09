#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"enter the elements in array"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    cout<<"print the elements in array"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}