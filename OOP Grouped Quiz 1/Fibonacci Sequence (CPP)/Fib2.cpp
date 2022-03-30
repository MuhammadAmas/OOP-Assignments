#include <iostream>
using namespace std;

class Fib2 {
  public:
    int fib2(int n) {
      if (n < 2){
      return n;
    }
    return fib2((n - 1) + fib2(n - 2));
  }
};
int main() {
  Fib2 first;
  cout << first.fib2(4);
  return 0;
}