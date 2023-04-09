#include<iostream>
using namespace std;
bool find (int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
         if(arr[i]==key)
    return true;
}
//not present
return false;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;