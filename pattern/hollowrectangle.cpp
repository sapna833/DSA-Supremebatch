#include<iostream>
using namespace std;
int main()
{
  int rcount;
  int ccount;
  cin>>rcount;
  cin>>ccount;
for(int r =0;r<rcount;r=r+1)
{
if(r==0||r==rcount-1)
{
for(int c=0;c<ccount;c++)
{
cout<<"* ";
}
}
else{
cout<<"* ";
for(int i=0;i<rcount-2;i=i+1)
{
cout<<"  ";
}
cout<<"* ";
}

cout<<endl;
}

  return 0;
  }