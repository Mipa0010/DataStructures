#pragma once
void BubbleSort(int* arr, int count)
{
	bool swapping = false;
	int tmp;

	do
	{
		swapping = false;
		for (int i = 0; i < count - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapping = true;
			}
		}
		count--;
	} while (swapping);
}