#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for (int i = n; i >0; i= i-1)
    {
      for (int j = n; j>0; j=j-1)
        {
           cout<<j;
        }
        cout<<endl;
    }
  return 0;
}