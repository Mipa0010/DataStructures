#include "RingBuffer.h"

#include <iostream>

int main(int argc, char** argv)
{
	RingBuffer<int> rb(255);

	for (int i = 0; i < 510; i++)
	{
		rb.Push(i);
	}

	for (int i = 0; i < 325; i++)
	{
		std::cout << rb[i] << std::endl;
	}

	std::cin.get();
	return 0;
}