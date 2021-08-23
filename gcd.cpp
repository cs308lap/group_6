#include "functions.h"
#include<iostream>
using namespace std;
int gcdof(int num1, int num2)
{
	int i, hcf;
	if(num1 < num2)
	{
		for(i = 1; i <= num1; i++)
		{
			if((num1 % i == 0) && (num2 % i == 0))
				hcf = i;
		}
	}
	else
	{
		for(i = 1; i <= num2; i++)
		{
			if((num1 % i == 0) && (num2 % i == 0))
				hcf = i;
		}
	}
	return hcf;
}
