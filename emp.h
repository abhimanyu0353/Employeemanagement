#include<iostream>
using namespace std;

class Emp
{
	int eid;
	char ename[20];
	float basic;
	public:
		Emp();
		Emp(int,char *,float);
		void Display();
		int getEid();
		char *getEname();
		float getBasic();
		void setEid(int);
		void setEname(char *);
		void setBasic(float);
		
};

