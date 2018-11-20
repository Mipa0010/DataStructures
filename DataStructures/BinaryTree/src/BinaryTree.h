#pragma once
#include <iostream>

template<typename T> class Node
{
public:
	T data;
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
		if (root != nullptr)
		{
			Insert(root, data);
		}
		else
		{
			root = new Node<T>(data);
		}
	}

	void Insert(Node<T>* node, T data)
	{
		if (data < node->data)
		{
			if (node->left != nullptr)
			{
				Insert(node->left, data);
			}
			else
			{
				node->left = new Node<T>(data);
			}
		}
		else
		{
			if (node->right != nullptr)
			{
				Insert(node->right, data);
			}
			else
			{
				node->right = new Node<T>(data);
			}
		}
	}

	Node<T>* Search(T data)
	{
		return Search(root, data);
	}

	Node<T>* Search(Node<T>* node, T data)
	{
		if (node != nullptr)
		{
			if (data == node->data)
			{
				return node;
			}
			
			if (data < node->data)
			{
				Search(node->left, data);
			}
			else
			{
				Search(node->right, data);
			}
		}
		else
		{
			return nullptr;
		}
	}

	void PrintTree()
	{
		PrintTree(root);
	}

	void PrintTree(Node<T> *node)
	{
		if (node != nullptr)
		{
			std::cout << node->data << std::endl;
			PrintTree(node->left);
			PrintTree(node->right);
		}
	}
	
	void Clear()
	{
		Clear(root);
		root = nullptr;
	}

	void Clear(Node<T>* node)
	{
		if (node != nullptr)
		{
			Clear(node->left);
			Clear(node->right);
			delete node;
		}
		else
		{
			std::cout << "cool" << std::endl;
		}
	}
};