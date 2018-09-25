#include "InsertionSort.h"
#include <iostream>
int main(int argc, char** argv)
{
	int arr[] = { 5, 4, 3, 2, 1 };
	int count = 5;

	InsertionSort(arr, 5);

	for (int i = 0; i < count; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	std::cin.get();
	return 0;
}