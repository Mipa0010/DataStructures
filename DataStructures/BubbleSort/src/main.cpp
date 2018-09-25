#include <iostream>

#include "BubbleSort.h"
#include <utility>

int main(int argc, char** argv)
{
	int arr[] = { 5, 4, 3, 2, 1 };
	BubbleSort(arr, 5);

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	std::cin.get();
	return 0;
}