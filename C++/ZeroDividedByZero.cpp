// ZeroDividedByZero.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

int main()
{
	int zero = 0;
	std::cout << zero / zero;

	float zeroF = 0.0;
	std::cout << zeroF / zeroF;

	int a;
	std::cin >> a;
    return 0;
}

