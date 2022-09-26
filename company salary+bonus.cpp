//A program to calculate the total salary and net bonus amount for the employees based on the years of service in the company.
#include <iostream>
using namespace std;
int main()
{
	float salary,bonus;
	int years;
	cout<<"Enter salary of Employee"<<endl;
	cin>>salary;
	cout<<"Enter years of service"<<endl;
	cin>>years;
	if(years>=10)
	{
		bonus=salary*10.0/100.0;
    }
	else if(years>=6&&years<=10)
	{
		
		bonus=salary*8.0/100.0;
    }
	else if(years<6)
	{
		bonus=salary*5.0/100.0;
    }
	  salary=salary + bonus;
    	cout<<"The total salary of the Employee="<<salary;
	return 0;
}