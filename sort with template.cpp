#include <iostream>
using namespace std;
template <class t>
void sort(t arr[],int n)
{
	t temp;
	int i,j;
	for (i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(arr[i]>arr[j])
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
template <class t>
void getinput(t arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cin>>arr[i];
}
template <class t>
void displayoutput(t arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int intarr[10],size,ch;
	char chararr[10];
	string strarr[10];
	float fltarr[10];
	do
	{
	cout<<"1.Sort integer elements";
	cout<<"\n2.Sort float elements";
	cout<<"\n3.Sort char elements";
	cout<<"\n4.Sort string elements";
	cout<<"\n5.Exit\n";
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch)
	{
	case 1:
		{
			cout<<"Enter the no of elements:";
			cin>>size;
			cout<<"Enter the elements:";
			getinput<int>(intarr,size);
			cout<<"Before sorting the values are: ";
			displayoutput<int>(intarr,size);
			sort<int>(intarr,size);
			cout<<"\nAfter sorting the values are: ";
			displayoutput<int>(intarr,size);
			cout<<"\n\n\n";
			break;
		}
	case 2:
		{
 			cout<<"Enter the no of elements:";
 			cin>>size;
 			cout<<"Enter the elements:";
 			getinput<float>(fltarr,size);
 			cout<<"Before sorting the values are: ";
 			displayoutput<float>(fltarr,size);
 			sort<float>(fltarr,size);
 			cout<<"\nAfter sorting the values are: ";
 			displayoutput<float>(fltarr,size);
 			cout<<"\n\n\n";
 			break;
 		}
 	case 3:
 		{
 			cout<<"Enter the no of elements:";
 			cin>>size;
 			cout<<"Enter the elements:";
 			getinput<char>(chararr,size);
 			cout<<"Before sorting the values are: ";
 			displayoutput<char>(chararr,size);
 			sort<char>(chararr,size);
 			cout<<"\nAfter sorting the values are: ";
 			displayoutput<char>(chararr,size);
 			cout<<"\n\n\n";
 			break;
 		}
 	case 4:
 		{
 			cout<<"Enter the no of elements:";
 			cin>>size;
 			cout<<"Enter the elements:";
 			getinput<string>(strarr,size);
 			cout<<"Before sorting the values are: ";
 			displayoutput<string>(strarr,size);
 			sort<string>(strarr,size);
 			cout<<"\nAfter sorting the values are: ";
 			displayoutput<string>(strarr,size);
 			cout<<"\n\n\n";
 			break;
 		}
 	}
 	}while(ch<5);
}
