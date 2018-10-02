#pragma once
#include <iostream>

void MergeSort(int* array1, int length, int* x= NULL)
{
	if (length <= 1)
		return;

	int* extraWorkSpace = x;
	if (extraWorkSpace == NULL)
	{
		extraWorkSpace = new int[length];
	}

	int len1 = length / 2;
	int len2 = length - len1;

	int* a1 = array1;
	int* a2 = array1 + len1;

	MergeSort(a1, len1, extraWorkSpace);
	MergeSort(a2, len2, extraWorkSpace);

	int firstArrayIndex = 0;
	int secondArrayIndex = 0;

	for (int i = 0; i < length; i++)
	{
		if (firstArrayIndex >= len1)
		{
			extraWorkSpace[i] = a2[secondArrayIndex];
			secondArrayIndex++;
		}
		else if (secondArrayIndex >= len2)
		{
			extraWorkSpace[i] = a1[firstArrayIndex];
			firstArrayIndex++;
		}
		else
		{
			if (a1[firstArrayIndex] < a2[secondArrayIndex])
			{
				extraWorkSpace[i] = a1[firstArrayIndex];
				firstArrayIndex++;
			}
			else
			{
				extraWorkSpace[i] = a2[secondArrayIndex];
				secondArrayIndex++;
			}
		}
	}

	for (int i = 0; i < length; i++)
	{
		array1[i] = extraWorkSpace[i];
	}

	if (x == NULL)
	{
		delete[] extraWorkSpace;
	}
}