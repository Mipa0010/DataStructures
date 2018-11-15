#pragma once
#include <iostream>

template<typename T> class Node
{
public:
	T data {};
	Node* left;
	Node* right;

	Node() :
		data({}), left(nullptr), right(nullptr)
	{
	}

	Node(T data) :
		data(data), left(nullptr), right(nullptr)
	{
	}

	Node* GetLeft()
	{
		return left;
	}

	Node* GetRight()
	{
		return right;
	}

	void SetLeft(Node<T>* node)
	{
		left = node
	}

	void SetRigh(Node<T>* node)
	{
		right = node;
	}
};

template<typename T> class BinaryTree
{
public:
	Node<T>* root;

	BinaryTree() :
		root(nullptr)
	{
	}

	void Insert(T data)
	{
		InsertRecursive(root, data);
	}

	void InsertRecursive(Node<T>* node, T data)
	{
		if (node == nullptr)
		{
			root = new Node<T>(data);
		}
	}

	void PrintTree()
	{
		PrintTreeRecursive(root);
	}

	void PrintTreeRecursive(Node<T> *node)
	{
		if (node != nullptr)
		{
			std::cout << node->data << std::endl;
			PrintTreeRecursive(node->left);
			PrintTreeRecursive(node->right);
		}
	}
	
};