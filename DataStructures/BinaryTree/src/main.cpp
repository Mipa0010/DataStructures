#include "BinaryTree.h"
#include <iostream>

int main(int argc, char** argv)
{
	BinaryTree<int> t;
	t.PrintTree();
	t.Insert(0);
	t.Insert(1);
	t.Insert(2);
	t.Insert(3);
	t.Insert(4);

	t.PrintTree();

	Node<int>* result = t.Search(1);

	if (result != nullptr)
	{
		std::cout << "\n\n" << result->data << std::endl;
	}
	else
	{
		std::cout << "Search failed" << std::endl;
	}

	t.Clear();
	std::cout << "Tree cleared..." << std::endl << std::endl;

	t.PrintTree();
	
	std::cin.get();

	return 0;
}