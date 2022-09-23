#include<stdio.h>
int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
  	else
    {
    	return(n * fact(n-1));
	}
}
int main()
{
	int i,n;
 	printf("Enter a whole number to find Factorial = ");
 	scanf("%d",&n);
  	printf("Factorial of is: %d",fact(n));
	return 0;
}
