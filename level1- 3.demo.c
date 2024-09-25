#include<stdio.h>

int main()
{
	char str[100];
	int num, price, quan, require, sum, put;
	scanf("%s %d %d %d", &str, &num, &price, &quan);
	while (1)
	{
		printf("请输入您所需物品的序号及数量:\n");
		scanf("%s %d %d", &str, &num, &require);
		if (1 <= num && num <= 5 && quan <= 50)
		{
			if (require <= quan && require > 0)
			{
				sum = require * price;
				while (1)
				{
					printf("请投币\n");
					scanf("%d", &put);
					if (put >= sum)
					{
						break;
					}
					sum -= put;
				}
				int change = put - sum;
				printf("找您:%d元\n", change);
				printf("-------------\n");
				quan -= require;
			}//正常数量的循环
			else
			{
				printf("货品数量不足，请重新输入\n");
			}
		}//客户的正常输入
		else
		{
			printf("您输入的数据有误，请重新输入");
		}
	}//总的购物循环
}
