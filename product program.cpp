//A program that elaborates the use of class and objects in c++
#include <iostream>
using namespace std;
class addition           //class name
{
                          //public data mamber
public:
	int a,b,c;
	
	int product()         //member function
	{
		return(a*b*c);
	}
};
int main()                 //main function
{
	addition addition1;     //object
	int prod;
	addition1.a=22;
	addition1.b=30;
	addition1.c=50;
	prod=addition1.product();
	
	cout<<"product is="<<prod<<endl;   //promt the program to print on the screen
	return 0;
}