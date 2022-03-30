#include <iostream>
using namespace std;

class Fib1 {
    public:
        int fib1(int n) { 
        return fib1(n - 1) + fib1(n - 2); 
    }
};

int main() { 
	Fib1 first;
    cout<<first.fib1(4);
    return 0;
}