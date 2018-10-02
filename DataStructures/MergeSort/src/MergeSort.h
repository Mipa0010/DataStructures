#pragma once
#include <iostream>

void MergeSort(int* array1, int length)
{
	/*std::cout << "===========" << std::endl;
	std::cout << "Length: " << length << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << array1[i];
		if (i < length - 1)
		{
			std::cout << ", ";
		}
	}
	std::cout << std::endl;*/

	if (length <= 1)
		return;

	int len1, len2;

	if ((length % 2 == 0))
	{
		len1 = length / 2;
		len2 = len1;
	}
	else
	{
		len1 = (length - 1) / 2;
		len2 = len1 + 1;

	}

	int* arr1 = &(array1[0]);
	int* arr2 = &(array1[len1]);

	MergeSort(arr1, len1);
	MergeSort(arr2, len2);


	//Trash
	int index1 = 0;
	int index2 = 0;

	for (int i = 0; i < length; i++)
	{
		std::cout << arr1[index1] << " < " << arr2[index2];
		if (arr1[index1] < arr2[index2])
		{
			array1[i] = arr1[index1];
			index1++;

			std::cout << " = " << arr1[index1] << std::endl;
		}
		else
		{
			array1[i] = arr2[index2];
			index2++;

			std::cout << " = " << arr2[index2] << std::endl;
		}
	}
}