#include <iostream>
using namespace std;

class Fib5{
public:
  int p_num, c_num, temp;

  Fib5(){
    this->p_num = 0;
    this->c_num = 1;
  }
  void fib5(int n){
    for (int i = 0; i < n; i++)
    {
      if (i == 0){
        cout << to_string(p_num) + " ";
      }
      else if (i == 1){
        cout << to_string(c_num) + " ";
      }
      else{
        temp = c_num;
        c_num = c_num + p_num;
        p_num = temp;
        cout << to_string(c_num) + " ";
      }
    }
  }
};

int main(){
  Fib5 first;
  first.fib5(8);
  return 0;
}