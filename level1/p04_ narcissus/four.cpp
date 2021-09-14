#include <stdio.h>
int main()
{
	int i,x, y, z,sum;
	for ( i=100;i < 1000; )
		{
		x = i / 100;
		y = i % 100;
		z = y % 10;
		y = y / 10;
		sum = x * x*x + y * y*y + z * z*z;
		if (sum == i)
			printf("%d\n", sum);
		i++;
	} 
		return 0;

}