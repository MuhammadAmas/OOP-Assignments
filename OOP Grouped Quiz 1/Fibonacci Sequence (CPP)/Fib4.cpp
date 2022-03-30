#include <iostream>
using namespace std;

class Fib4{
    public:
        int p_num, c_num, temp;

        Fib4(){
            this -> p_num = 0;
            this -> c_num = 1;
        }
        int fib4(int n){
            if (n<=1){
                return n;
            }
        for (int i = 2; i < n; i++){
            temp = c_num;
            c_num = c_num + p_num;
            p_num = temp;
        }
        return c_num;
        }
};

int main(){
    Fib4 first;
    cout<<first.fib4(40);
    return 0;
}