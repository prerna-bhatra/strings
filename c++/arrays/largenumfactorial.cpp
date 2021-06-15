#include<iostream>
using namespace std;

#define MAX 500

int multply(int x , int res[] ,int res_size)
{
	int carry =0;
	 
	 for(int i=0;i<res_size;i++)
	 {
	 	int product = res[i]*x + carry;
	 	res[i] =  product%10;
	 	
	 	carry = product/10;
	 	
	 }
	 
	 while(carry)
	 {
	 	res[res_size] = carry%10;
	 	
	 	carry = carry /10;
	 	
	 	res_size++;
	 }
	
	
	return res_size;
}


void factorialize(int n)
{
	int res[MAX];
	res[0]=1;
	int res_size=1;
	
	for(int i=2;i<=n;i++)
	{
	res_size =	multply(i , res , res_size );
	
	}
	for(int i=0;i<res_size;i++)
	 {
	 
	 cout<<res[i];	
	 }
	
}



int main()
{
	int n=5;
	factorialize(n);
	
}










