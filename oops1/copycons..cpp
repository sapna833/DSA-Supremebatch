#include <iostream>
using namespace std;

class Example {
  int x;
public:
  Example(int a) {
    x = a;
  }
  Example(const Example& e) {
    x = e.x;
  }
  int get() {
    return x;
  }
};

int main() {
  Example obj1(5);
  Example obj2 = obj1; // using copy constructor to create obj2 from obj1
  cout << obj2.get() << endl; // output: 5
  return 0;
}
