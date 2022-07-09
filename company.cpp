#include"company.h"
/////////////////////////////////////
Company::Company()
{
	start = NULL;
}
//////////////////////////////////////
void Company::AddEmp(Emp e)
{
	Node *temp =new Node(e);
	temp->setNext(start);
	start = temp;
}
//////////////////////////////////////
void Company::RemoveEmp(int id)
{
	if(start == NULL)
	{
		cout<<"\nNo emps present";
		return;
	}
	Node *p=start;
	//When node to be deleted is first node
	if(id == p->getData().getEid())
	{
		start = start->getNext();
		p->	getData().Display();
		cout<<"\nThis emp is delete";
		delete p;
		return;
	}
	if(p->getNext()== NULL)
	{
		cout<<"Not found";
		return;
	}
	while(p->getNext()->getNext()!=NULL)
	{
		Emp e1 = p->getNext()->getData();
		if(id == e1.getEid())
		{
			Node *q = p->getNext();
			p->setNext(q->getNext());
			q->getData().Display();
			cout<<"\nThis emp is delete";
			delete q;
			return;
		}
		p=p->getNext();
	}
	cout<<"\nNot found";
}
//////////////////////////////////////
void Company::EditEmp(int id)
{
	
}
//////////////////////////////////////
void Company::SearchEmp(int id)
{
	if(start == NULL)
	{
		cout<<"\nNo emps present";
		return;
	}
	Node *p=start;
	while(p!=NULL)
	{
		Emp e1 = p->getData();
		if(e1.getEid() == id)
		{
			cout<<"\nEmp found..";
			e1.Display();
			return;
		}
		p=p->getNext();
		
	}
	cout<<"\nEmp not found";
}
//////////////////////////////////////
void Company::DisplayAllEmps()
{
	if(start == NULL)
	{
		cout<<"\nNo emps to display";
		return;
	}
	Node *p=start;
	while(p!=NULL)
	{
		p->getData().Display();
		p=p->getNext();
		
	}
}
//////////////////////////////////////
