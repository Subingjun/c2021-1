#include<stdio.h>
#include<time.h>
int main()
{
	double op, ed;
	op = clock();
	int x, y, i;
	x = 2;
	y = 0;
	printf("%d ", x);
	while (x <= 999)
	{
		x++;
		i = 2;
		while (i <= (x / 2)) {
			y = x % i;
			if (y == 0) {
				break;
			}
			else
				i++;
		};
		if (y != 0)
			printf("%d ", x);
	}
	ed = clock();
	printf("运行时间为%lfms", ed-op);
	return 0;
}