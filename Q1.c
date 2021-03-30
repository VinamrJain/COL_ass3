#include <stdio.h>
#include <math.h>
int size(int x){
int i=0;
int t = x;
while (t!=0)
{
	t /=10;
	i++;
}
return i;
}
void dp(int x)
{
	int t = x;
	int s = size(x);
	int sum=0;
	for (int i = 1; i <=s; i++)
	{
		int k = t%10;
		sum += k*pow(10,s-i);
        t /=10;
	}
	if (x==sum)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
void main() {
	int x;
	scanf("%d",&x);
	dp(x);
	
}