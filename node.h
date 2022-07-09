#include"emp.h"

class Node
{
	Emp data;
	Node *next;
	public:
		Node(Emp);
		Emp getData();
		Node *getNext();
		void setData(Emp);
		void setNext(Node *);
};

