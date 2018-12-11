#include<iostream>
#include "Numbers.h"

unsigned long long sumNumbersBelow(unsigned long long n)
{
	return n * (n + 1) / 2;
}

unsigned long long gcd(unsigned long long a, unsigned long long b)
{
	while (a != 0) {
		unsigned long long c = a;
		a = b % a;
		b = c;
	}
	return b;
}
