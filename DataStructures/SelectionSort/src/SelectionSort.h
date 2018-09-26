#pragma once
#include <iostream>

void SelectionSort(int* arr, int count)
{
	for (int i = 0; i < count - 1; i++)
	{
		int smallest = i;

		for (int j = i + 1; j < count; j++)
		{
			if (arr[smallest] > arr[j])
			{
				smallest = j;
			}
		}

		//std::cout << smallest << std::endl;

		int tmp = arr[i];
		arr[i] = arr[smallest];
		arr[smallest] = tmp;
	}
}