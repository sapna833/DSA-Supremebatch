#include<iostream>
using namespace std;
int main()
{
    //decare2d array

     //intilaisation
    int brr[3][3]={{1,2,3},{5,6,7},{7,8,9}};
    // cout<<brr[2][2] <<endl;
//if we want to initilise all elements we will use loop
for (int i = 0; i < 3; i++)
{
    for (int j= 0; j< 3; j++)
    {
        //if we want to intilise rowwise then
        // cout<<brr[i][j]<<" ";
        //if we want to intilise column wise then we just i ke jagah j or j ke jagah i
        cout<<brr[j][i]<<" ";
    }
    cout<<endl;
    
}

    return 0;
}