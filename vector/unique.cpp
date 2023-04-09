#include<iostream>
#include<vector>
using namespace std;
int findunique(vector<int>arr)
{
    int ans=0;
    for (int i = 0; i < arr.size(); i++)
    {
        //sing xor to cancel same elemnts
        ans=ans^arr[i];

    }
    return ans;
}
int main(){
    int n; 
    cin>>n;
    cout<<"enter the size of array"<<endl;
    vector<int>arr(n);
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < arr.size(); i++){
        cin>>arr[i];
    }
    int uniqueelements=findunique(arr);
    cout<<"unique element is"<< uniqueelements<<endl;

}