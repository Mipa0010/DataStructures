#include "SelectionSort.h"
#include <iostream>

int main(int argc, char** argv)
{
	int arr[] = { 5, 4, 3, 2, 1 };
	int size = 5;

	SelectionSort(arr, 5);

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	std::cin.get();
	return 0;
}