#include <iostream>
using namespace std;



int main()
{
	int arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 6 };
    int x = 3, k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int i,j ,b=0;
    
    for(i=0;i<n;i=i+k)
    {
    	for(j=i;j<i+(k-1);j++)
    	{
    		if(arr[j]==k)
    		{
    		     
    			break;
					
			}
				
		}
}
		
		if(j==n-1 && arr[n-1]==k)
		{
			b=1;
		}
		else if(j==n-1)
		{
			b=0;
		}
	
    
    if(b==0)
    {
    	cout<<"False";
	}
	else
	{
		cout<<"TRUE";
	}
    
    
}
