#include "company.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int choice=0;
	Company lt;
	while(choice!=6)
	{	
	
		cout<<"\n\t\t1.Add an emp";
		cout<<"\n\t\t2.Display all emps";
		cout<<"\n\t\t3.Search for emp by id";
		cout<<"\n\t\t4.Delete for emp by id";
		cout<<"\n\t\t6.Exit";		
		cout<<"\nEnter your choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int id;
					char name[20];
					float bs;
					cout<<"\nEnter eid";
					cin>>id;
					cout<<"\nEnter employee name";
					cin>>name;
					cout<<"\nEnter basic";
					cin>>bs;
					
					Emp e1(id,name,bs);
					lt.AddEmp(e1);
				}	
				break;
		
			case 2:
				lt.DisplayAllEmps();
				break;
			case 3:
				{
					int id;
					cout<<"\nEnter id to search";
					cin>>id;
					lt.SearchEmp(id);
				}
				break;
			case 4:
				{
					int id;
					cout<<"\nEnter id to delete";
					cin>>id;
					lt.RemoveEmp(id);
				}
				break;
		
			case 6:
				cout<<"\nEnd of program..";
				break;
			default:
				break;
		}
	}
	
	return 0;
}
