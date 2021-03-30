#include <stdio.h>
#include <math.h>
void main() {
int x,y;
scanf("%d%d",&x,&y);
int min,max;
int t;
if (x>1 && y>1)
{
	if (x==y)
	{
		printf("%d",x);
	}
	else
	{		
if (x>y)
{
	max = x;
	min = y;
}
else
{
	max = y;
	min = x;
}

while (min!=0 && min!=1)
{ t = max%min;
if (t>min)
    {
	   max = t;
    }
else
    {
	   max = min;
	   min = t;
    }
}
if (min==0)
{
	printf("%d", max);
}
else if (min == 1)
{
	printf("%d", 1);
}
	}
}
else
{
	printf("Enter no.(s) Greater than 1");
}
}