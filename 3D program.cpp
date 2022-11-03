//Three dimentional array in C++
#include <iostream>
using namespace std;
int main()
{
	//declearing an array that will store upto 18 elements
	int num[2][3][3]={
	                   {
					       {1,2,3},
						   {4,5,6},
						   {7,8,9}
                       },
     	               {
			               {10,11,12},
						   {13,14,15},
						   {16,17,18}
                       }
                    };
      //displaying the values
      for(int i=0;i<3;i++)
	  {
	  	for(int j=0;j<3;j++)
		  {
		  	for(int k=0;k<3;k++)
		  		cout<<"num["<<i<<"]["<<j<<"]["<<k<<"]="<<num[i][j][k]<<endl;
		  }
	  }
	return 0;
}