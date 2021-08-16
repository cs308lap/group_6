#include "functions.h"
#include<iostream>
using namespace std;
int factorial(int n){
    cout<<"hello!";
    if(n<0){
        cout<<"Please enter a positive number:"<<endl;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
