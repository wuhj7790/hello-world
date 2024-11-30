#include <iostream>
using namespace std;

void sort(int arr[],int i,int j)
{
	int val = arr[i];
	int l = i;
	int r = j;
	while(l<r)
	{
		while(l<r&&arr[r]>=val)
		{
			r--;
		}
		if(l<r)
		{
			arr[l++]=arr[r]);
		}
		while(l<r&&arr[l] <=val)
		{
			r++;
		}
		if(l<r)
		{
			arr[r--]=arr[l]);
		}
	}	
	arr[l] =val;
	sort(arr,i,l-1);
	sort(arr,l+1,j);
	
}

void sort(int aarr[],int size)
{
	sort(arr[],0, size);
}

int main ()

	int arr[] = {12,4,89,43,21,78};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort(arr,size);
	for (int i=0;i<size;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout <<end;
	#if 0
	return 0;
	
}