#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,};
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<"we are at element:"<<arr[i]<<endl;
        int element=arr[i];
        for (int j = 0; j< arr.size(); j++)
        {
            cout<<"pair"<<element<<"with"<<arr[j]<<endl;
        }
        
    }
    
}
