#include "CircularBuffer.h"

#include <iostream>

//I was supposed to implement "Rengaspuskuri" not "Rengaslista"
int main(int argc, char** argv)
{
	CircularBuffer<int> cb;

	for (int i = 0; i < 10; i++)
	{
		cb.Insert(i);
		cb.PrintList();
	}

	std::cout << "Second Circular buffer" << std::endl;
	//This constructor thingy does not copy the first value in the whatever list thingy
	CircularBuffer<int> cb2(cb, 0, 4);
	cb2.PrintList();

	std::cin.get();
	return 0;
}