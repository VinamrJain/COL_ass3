#include <stdio.h>
#include <math.h>
void main() {
	int x = 17;
	int sum = 0;
	int t;
	int i=1;
	while (t<100)
	{ t=x*i;
	i++;
	}
	for ( t; t < 999; t+=17)
	{
		sum += t;
	}
	printf("%d",sum);
}
