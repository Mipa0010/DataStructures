#include "MergeSort.h"

#include <iostream>

int main(int argc, char** argv)
{
	int arr[] = { 9, 4, 6, 1, 0, 5 };
	int length = 6;

	MergeSort(arr, length);

	std::cout << "====== RESULT ======" << std::endl;

	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	std::cin.get();
	return 0;
}