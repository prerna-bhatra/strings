#include <iostream>
using namespace std;

void heapify(int a[],int n ,int i)
{
	int rootidx=i;
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n && a[l]>a[rootidx])
	{
		rootidx=l;
	}
	
	if(r<n && a[r]>a[rootidx])
	{
		rootidx=r;
	}
	
	if(rootidx!=i)
	{
		swap(a[i],a[rootidx]);
		
		heapify(a,n,rootidx);
	}
}




void buildheap(int arr[], int n)
{
	int startIndex=(n/2)-1;
	
	
	for(int i=startIndex;i>=0;i--)
	{
		heapify(arr,n,i);
	}
	
	
}

int main()
{

	int arr[] = { 1, 3, 5, 4, 6, 2 };

	int n = sizeof(arr) / sizeof(arr[0]);
	
	buildheap(arr,n);
	
		cout<<"heap";
	
	for(int i=0;i<n;i++)
	{
	
		cout<<arr[i]<<" ";
	}
	
}
