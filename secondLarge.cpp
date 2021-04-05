#include <iostream>
using namespace std;

int main()
{
	int i,arr[5],max1=0,max2=0;
	cout<<"Enter the elements in the array"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
		
	}
	
	for(i=0;i<5;i++)
	{
		if(arr[i]>max1)
		{
			max2=max1;
			max1=arr[i];
			
		}
		else if(arr[i]>max2 && arr[i]<max1)
		{
			max2=arr[i];
			
		}
		
	}
	
	cout<<"First largest : "<<max1<<endl;
	cout<<"Second largedst : "<<max2<<endl;
	
	return 0;
}
