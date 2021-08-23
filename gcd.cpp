#include "functions.h"
#include<iostream>
using namespace std;
int gcdof(int num1, int num2)
{
	while(num1 != num2)
	{
		if(num1 > num2)
			return rgcd(num1 - num2, num2);
		else
			return rgcd(num1, num2 - num1);
	}
	return num1;
}
