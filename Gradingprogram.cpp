//Program for grading 
#include <iostream>
using namespace std;
int main()
{
	int Reading, Science, Maths, English, Physics, Avg;
	cout<<"Enter marks for 5 subjects"<<endl;
	cin>>Reading>>Science>>Maths>>English>>Physics;
    Avg=(Reading+Science+Maths+English+Physics)/5;
	if(Avg>=70&&Avg<=100)
	{
		cout<<"Grade A"<<endl;
	}
	else if(Avg>=60&&Avg<=69)
	{
		cout<<"Grade B"<<endl;
	}
	else if(Avg>=50&&Avg<=59)
	{
		cout<<"Grade C"<<endl;
	}
	else if(Avg>=40&&Avg<=49)
	{
		cout<<"Grade D"<<endl;
	}
	else if(Avg<40)
	{
		cout<<"Fail"<<endl;
	}
	return 0;
}