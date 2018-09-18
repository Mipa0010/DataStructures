#pragma once 

template <typename T> class ListItem
{
public:
	T data;
	ListItem<T>* next;

	ListItem(T data) :
		data(data)
	{
	}
	
	~ListItem()
	{

	}
};

template <typename T> class LinkedList
{
public:
	ListItem<T>* head;
	ListItem<T>* last;
	int size;

	LinkedList(ListItem<T>* head = NULL) :
		head(NULL), last(NULL), size(0)
	{
	}

	void InsertFirst(const T &item)
	{
		ListItem<T>* newItem = new ListItem<T>(item);

		if (head == NULL)
		{
			head = newItem;
		}
		else
		{
			ListItem<T>* tmp = head;
			head = newItem;
			newItem->next = tmp;
		}

		size++;
	}

	void InsertAfter(const T &item, int index = 0)
	{
		int counter = 0;
		ListItem<T>* tmp = head;
		ListItem<T>* newItem = new ListItem<T>(item);

		while (counter < index && tmp != NULL)
		{
			tmp = tmp->next;
			counter++;
		}

		newItem->next = tmp->next;
		tmp->next = newItem;

		size++;
	}

	void InsertLast(const T &item)
	{
		ListItem<T>* tmp = head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = new ListItem<T>(item);
		last = tmp->next;
		
		size++;
	}

	void Remove(int index = 0)
	{
		if (index == 0)
		{
			ListItem<T>* tmp = head;
			head = head->next;
			delete tmp;
		}
		else
		{
			int counter = 0;
			ListItem<T>* tmp = head;
			ListItem<T>* previous = NULL;

			while (counter < index && tmp != NULL)
			{
				previous = tmp;
				tmp = tmp->next;
				counter++;
			}

			previous->next = tmp->next;
			delete tmp;
		}

		size--;
	}
	
	const T& GetFirst() const
	{
		return head;
	}

	const T& GetLast() const
	{
		return last;
	}

	const T& GetItem(int index = 0) const
	{
		int counter = 0;
		ListItem<T>* tmp = head;

		while (counter < index && tmp != NULL)
		{
			tmp = tmp->next;
			counter++;
		}

		return tmp->data;
	}

	const int Size() const
	{
		return size;
	}

	ListItem<T>* Begin()
	{
		return head;
	}
};