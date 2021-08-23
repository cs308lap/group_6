#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    // printf("\n The factorial of 5 is %d\n",factorial(5));
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    int x = 56, y=98;
    cout<<"GCD of 56 and 98 is "<<gcdof(56,98)<<endl;
    return 0;
}
