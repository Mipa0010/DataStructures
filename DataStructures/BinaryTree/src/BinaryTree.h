#pragma once

template <typename T> class Node
{
public:
	T data;
	int childCount;
	Node<T> *children;

	Node(T data, int childCount)
	{
		this->data = data;
		this->childCount = childCount;
		children = new Node<T>[childCount];
	};

	~Node()
	{
		delete[] children;
	}

	Node<T> GetLeft()
	{
		return left;
	}

	Node<T> GetRight()
	{
		return right;
	}

	void SetLeft(Node<T> *l)
	{
		left = l;
	}

	void SetRight(Node<T> *r)
	{
		right = r;
	}

	T &GetData()
	{
		retrun data;
	}
};

template <typename T> class BinaryTree
{
	Node<T> *root;
	int childCount;

	BinaryTree(int childCount)
	{
		this->childCount = childCount;
	}

	void Insert(T &data)
	{
		if (root == NULL)
		{
			root = new Node(data, childCount);
		}
	}
};