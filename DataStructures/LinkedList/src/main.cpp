#include <iostream>
#include <string>
#include "LinkedList.h"

int main(int argc, char**  argv)
{
	LinkedList<std::string> ll;
	ll.InsertFirst("1");
	ll.InsertAfter("2", 0);
	ll.InsertAfter("3", 1);
	ll.InsertLast("4");
	ll.InsertAfter("5", 3);
	ll.InsertAfter("6", 2);



	ListItem<std::string>* iterator = ll.Begin();
	while (iterator != NULL)
	{
		std::cout << (*iterator).data << std::endl;
		iterator = iterator->next;
	}

	std::cin.get();
	return 0;
}