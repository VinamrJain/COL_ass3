#include <stdio.h>
#include <math.h>
void main() {
	float x;
	scanf("%f",&x);
	float r = M_PI*x/180;
	float t = 1;
	float sum = 1;
	for (int i = 1; i <=6; i++)
	{
		t *= (-1)*r*r/(2*i*(2*i-1));
		sum += t;
	}
	printf("%f",sum);
}