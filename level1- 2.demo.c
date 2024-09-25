#include<stdio.h>

int main()
{
	int sum, put;
	scanf("%d", &sum);
	while (sum > 0)
	{
		scanf("%d",&put);
		sum -= put;
	}
	printf("урдЗ%d\n",-sum);
}