#include "emp.h"
#include<string.h>
/////////////////////////////////
Emp::Emp()
{
	eid=0;
	strcpy(ename,"");
	basic=0;	
}
//////////////////////////////////////
Emp::Emp(int id,char *nm,float bs)
{
	eid=id;
	strcpy(ename,nm);
	basic=bs;
}
////////////////////////////////////////
void Emp::Display()
{
	cout<<"\nEid="<<eid;
	cout<<"\tEName = "<<ename;
	cout<<"\tBasic = "<<basic;
}
///////////////////////////////////////////
int Emp::getEid()
{
	return eid;
}
///////////////////////////////////////////
char *Emp::getEname()
{
	return ename;
}
///////////////////////////////////////////
float Emp::getBasic()
{
	return basic;
}
//////////////////////////////////////////
void Emp::setEid(int id)
{
	eid=id;
}
////////////////////////////////////////////
void Emp::setEname(char *nm)
{
	strcpy(ename,nm);
}
/////////////////////////////////////////////////
void Emp::setBasic(float bs)
{
	basic = bs;
}
