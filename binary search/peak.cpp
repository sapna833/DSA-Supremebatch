#include<iostream>
#include<vector>
using namespace std;



int findpeakindex(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        return mid;
    }
    return s;
}
int main()
{
    vector<int>arr={1,2,8,6,7};
int peakIndexInMountainArray=findpeakindex(arr);
      cout<<peakIndexInMountainArray<<endl;
return  findpeakindex(arr);
    
}

