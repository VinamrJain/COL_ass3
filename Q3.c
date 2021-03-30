#include <stdio.h>
#include <math.h>
void main() {
	int n;
	scanf("%d",&n);
	float sum = 0;
	for (int i = 1; i <= n; i++)
	{
		float a; 
		scanf("%f",&a);
		sum +=a; 
	}
	printf("%.1f",sum);
}