//do--while loop program that prompt the user to enter the boundary of numbers they want to use.
#include <iostream>
using namespace std;
int main()
{
	float start,stop;
    cout<<"Enter the start number"<<endl;
	cin>>start;
	cout<<"Enter the stop number"<<endl;
	cin>>stop;
	do
	{
	    cout<<start<<" ";
		start++;
	}
	while(start<=stop);
	return 0;
}