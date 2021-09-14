#include<stdio.h>
int main()
{
	int x, y, i;
	i = 2;
	y = 1;
	scanf_s("%d", &x);
	if (x < 2)
		printf("������벻��");
	else if (x == 2)
		printf("����");
	else
	{
		while (i <= (x / 2)) {
			y = x % i;
			if (y == 0) {
				break;
			}
			else
				i++;
		}
		if (y != 0)
			printf("����");
		else
			printf("����");
	};
	return 0;
}