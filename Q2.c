#include <stdio.h>
#include <math.h>
void main() {
	int n;
	float a,d;
	scanf("%d%f%f",&n,&a,&d);
	float sum = a;
	for (int i = 1; i <= n; i++)
	{   printf("%.1f ",sum);
		sum +=d; 
	}
}