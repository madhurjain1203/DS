#include <iostream>
using namespace std;

int main()
{
	int i,j,rows,columns,sum=0;
	int arr[3][3];
	cout<<"Enter number of rows and column"<<endl;
	cin>>rows;
	cin>>columns;
	cout<<"Enter the matrix elements"<<endl;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"Calculating sum of diagonal elements"<<endl;
	for(i=0;i<rows;i++)
	{
		
		sum=sum+arr[i][i];
		
	}
	cout<<"Sum ="<<sum<<endl;
	return 0;
}
