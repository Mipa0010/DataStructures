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
	
	~ListItem();
};

template <typename T> class LinkedList
{
public:
	ListItem<T>* head;

	LinkedList(ListItem<T>* head = NULL) :
		head(NULL)
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
	}

	void InsertLast(const T &item)
	{
		ListItem<T>* tmp = head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = new ListItem<T>(item);
	}

	void Remove(int index = 0);
	
	const T& GetFirst() const;
	const T& GetLast() const;
	const T& GetItem(int index = 0) const;

	ListItem<T>* Begin()
	{
		return head;
	}
};