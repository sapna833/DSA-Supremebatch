#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
    void inc(int arr[],int size)
    {for (int i = 0; i < size; i++)
    {
        //for all
        //individual print hoga agr tino krana hwe should use loop
        //agr 0 1 2 aaise krte h toh last wala hi hoga
         arr[i]=arr[i]+10;
        }
        printarray(arr,size);
    
    }
    int main()
    {
        int arr[]={3,4,5};
        int size=3;
        inc(arr,size);
        printarray(arr,size);
    }
