#include<stdio.h>
int main()
{
	int x, y, z, i, m, n;
	printf("请输入一个l00以内不是2的偶数\n");
	scanf_s("%d", &x);
	y = x / 2;
	z = y;
	m = y;
	n = z;
	i = 2;
	if (y == 2 && z == 2)
		printf("x=4时哥德巴赫猜想显然成立");
	else {
		while (y!=0&&z!=0)
		{
			y = m;
			z = n;
			
			while (i <= (y / 2))
			{
				i = 2;
				y = y % i;
				if (y == 0)
				{
					break;
				}
				else
					i++;
			}
			while (i <= (z / 2))
			{
				i = 2;
				z = z % i;
				if (y == 0)
				{
					break;
				}
				else
					i++;
			}
			m++;
			n--;
		}
		printf("偶数%d由素数%d和素数%d组成",x,m,n);
	}
	return 0;
}