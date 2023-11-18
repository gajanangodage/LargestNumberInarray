#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i,temp = 0;
	cout<<"Enter the elements of the array "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	temp = arr[0];
	for(i=1;i<5;i++)
	{
		if(temp<arr[i])
		{
			temp = arr[i];
		}
	}
	cout<<"\nThe Largest Element is "<<temp<<endl;
}
