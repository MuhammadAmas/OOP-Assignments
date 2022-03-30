#include <iostream>
using namespace std;
class Fib3{
    public:
        int F[51];

        Fib3(){
            for(int i = 0; i < 51; i++){
                this -> F[i] = -1;
            }
        }

        int fib3(int n){
            if (n < 2){
                return n;
            }
            if (F[n] != -1){
                return F[n];
            }
            return fib3(n-1) + fib3(n-2);
        }

        ~Fib3(){
            delete[]F;
        }
};

int main(){
    Fib3 first;
    cout<<first.fib3(40);
    return 0;
}