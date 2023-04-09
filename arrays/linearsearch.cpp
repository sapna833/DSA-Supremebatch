// #include<iostream>
// using namespace std;
// bool find (int arr[],int size,int key){
//     for (int i = 0; i < size; i++)
//     {
//          if(arr[i]==key)
//     return true;
// }
// //not present
// return false;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     cout<<"enter the key to find"
//     <<endl;
//     int key;
//     cin>>key;
//     if(find(arr,size,key)){
//         cout<<"found"<<endl;

//     }
//     else{
//         cout<<"not found"<<endl;
//     }
//     return 0;
// }
//second method for lallu bachaa
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int key=9;
    bool flag=0;
    //o not founnd and 1 found
    //linear search
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==key){
            flag=1;
        }
    }
    if(flag)
     cout<<"present"<<endl;
     else
     cout<<"absent"<<endl;
     return 0;
    
}