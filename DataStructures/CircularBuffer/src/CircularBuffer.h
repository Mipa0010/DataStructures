#pragma once
#include <iostream>

template<typename T> class ListItem
{
public:
	T data;
	ListItem<T>* next;

	ListItem(T data, ListItem<T>* next = NULL)
		: data(data), next(next)
	{
	}
private:
};

template<typename T> class CircularBuffer
{
public:
	ListItem<T>* last;
	inline ListItem<T>* first()
	{
		return (last != NULL ? last->next : NULL);
	}

	CircularBuffer()
	{
		last = NULL;
	}
	
	CircularBuffer(CircularBuffer<T> &src, int i1, int i2)
	{
		//We shouldn't assume that the user knows what they want to include from the previous Circular buffer
		ListItem<T>* it1 = src.GetItem(i1 - 1);
		ListItem<T>* it2 = src.GetItem(i2 + 1);

		ListItem<T>* p = it1->next;
		ListItem<T>* q = it1->next;
		
		for (; q->next != it2; q = q->next);

		it1->next = it2;
		last = q;
		last->next = p;
	}


	void Insert(const T& item)
	{
		ListItem<T>* p = new ListItem<T>(item);

		if (first() == NULL)
		{
			p->next = p;
		}
		else
		{
			p->next = first();
			last->next = p;
		}

		last = p;
	}

	void PrintList()
	{
		ListItem<T>* p = first();

		for (; p != last; p = p->next)
		{
			std::cout << p->data << " ";
		}

		std::cout << p->data << std::endl;
	}

	ListItem<T>* GetItem(int index)
	{
		ListItem<T>* p = first();

		for (int i = 0; i < index; i++)
		{
			p = p->next;
		}

		return p;
	}

private:
};