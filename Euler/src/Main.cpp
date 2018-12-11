#include <iostream>
#include <chrono>
#include "Solutions.h"
#include <thread>

int main()
{
	unsigned long long sol = 0;

	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
	sol = p3();
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count();

	std::cout << sol << std::endl;
	std::cout << duration << " millisec" << std::endl;

	std::cin.get();
}
