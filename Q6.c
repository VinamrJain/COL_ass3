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
void main() {
	int n;
	scanf("%d",&n);
	for (int j = 1; j <= n; j++)
	{
	int s = size(j);
	int sum = 0;
	int t = j;
	for (int i = 1; i <= s; i++)
	{
		int k = t%10;
		sum += pow(k,s);
		t /=10;
	}
if (sum == j)
{
	printf("%d ",j);
}
	}
}