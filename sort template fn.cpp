#include<iostream>
using namespace std;
template <class t>
void sort1(t a[],int n)
{
	t temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
template <class t>
void read(t a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
}
template <class t>
void display(t a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		cout<<a[i];
}
int main()
{
	int ch,ia[10],is,fs,cs,ss;
	float fa[10];
	char ca[10];
	string sa[10];
	do
	{
		cin>>ch;
		switch(ch)
		{
			case 1:cin>>is;
				  read<int>(ia,is);
				  sort1<int>(ia,is);
				  display<int>(ia,is);
				  break;
			case 2:cin>>fs;
				  read<int>(fa,fs);
				  sort1<int>(fa,fs);
				  display<int>(fa,fs);
				  break;
			case 3:cin>>cs;
				  read<int>(ca,cs);
				  sort1<int>(ca,cs);
				  display<int>(ca,cs);
				  break;
			case 4:cin>>ss;
				  read<int>(sa,ss);
				  sort1<int>(sa,ss);
				  display<int>(sa,ss);
				  break;
			default:
				  break;
		}
	}while(ch<5)
	return 0;
}
