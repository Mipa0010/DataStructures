#pragma once

void InsertionSort(int* arr, int count)
{
	for (int i = 1; i < count; i++)
	{
		int s = i;

		while (arr[s] < arr[s - 1] && s >= 1)
		{
			int tmp = arr[s];
			arr[s] = arr[s - 1];
			arr[s - 1] = tmp;
			float n = 5;
			s--;
		}
	}
}