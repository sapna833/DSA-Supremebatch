#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6};
    int sizea=5;
    int brr[]={1,1,3,6,6,8};
   //-1,-1,3,6,7,8
   //-1,-1,-1,6,7,8
    int sizeb=6;
    vector <int>ans;
    for(int i=0;i<sizea;i++)
    {
        ans.push_back(arr[i]);
    }
    
      for(int i=0;i<sizea;i++)
      {
        int element=arr[i];

        for (int j = 0; j < sizeb; j++)
        {
          if(element==brr[j]){
            brr[j]=-1;
          }  
        }
        
         }
         for (int i = 0; i < sizeb; i++)
         {
            //jb mera element -1 ny h
            if(brr[i]!=-1)
        ans.push_back(brr[i]);

         }
         
      for(auto value:ans){
        cout<<value<<" ";
      }
      cout<<endl;
      return 0;

}