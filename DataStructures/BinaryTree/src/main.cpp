#include "BinaryTree.h"
#include <iostream>

int main(int argc, char** argv)
{
	BinaryTree<int> t;
	t.Insert(0);
	//t.Insert(1);
	//t.Insert(2);
	//t.Insert(3);
	//t.Insert(4);

	t.PrintTree();
	
	std::cin.get();

	return 0;
}