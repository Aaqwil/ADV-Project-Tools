#include <iostream>
#include <random>

int main()
{
	std::random_device device{};
	std::mt19937 generator{device()};
	std::normal_distribution<> distribution{19, 50};
	
	std::cout << distribution(generator) << std::endl;
}