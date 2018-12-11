#include <iostream>
#include "Numbers.h"

unsigned long long p1()
{
	unsigned long long n = 1000;

	auto sumMult3 = 3 * sumNumbersBelow(n / 3);
	auto sumMult5 = 5 * sumNumbersBelow(n / 5);
	auto sumMult15 = 15 * sumNumbersBelow(n / 15);

	return sumMult3 - sumMult15 - sumMult15;
}

unsigned long long p2()
{
	unsigned long long limit = 4000000;

	unsigned long long x0 = 1;
	unsigned long long x1 = 2;

	unsigned long long sum = 0;

	while (x1 <= limit)
	{
		if (!(x1 & 1)) {
			sum += x1;
		}

		unsigned long long x2 = x0 + x1;
		x0 = x1;
		x1 = x2;
	}

	return sum;
}

unsigned long long p3()
{
	// unsigned long long target = 600851475143;
	unsigned long long target = 10;

	for (unsigned long long factor = 2; factor * factor <= target; factor++) {
		while (target % factor == 0 && target != factor) {
			target /= factor;
		}
		std::cout << target << std::endl;
	}

	return target;
}