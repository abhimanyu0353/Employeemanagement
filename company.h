#include"node.h"
//////////////////////////////////
class Company
{
	Node *start;
	public:
		Company();
		void AddEmp(Emp);
		void RemoveEmp(int);
		void EditEmp(int);
		void SearchEmp(int);
		void DisplayAllEmps();
		
};

