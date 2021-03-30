#include <stdio.h>
#include <math.h>
void main() {
int n;
scanf("%d", &n);
if (n>0)
{
	int sum=0;
	for (int i = 1; i < n; i++)
	{
		if (n%i==0)
		{
			sum += i; 
		}
	}
	if (sum == n)
	{
		printf("Perfect");
	}
	else
	{
		printf("Not Perfect");
	}
	
}
else
{
	printf("Enter a positive integer");
}

}
