//#include<stdio.h>
//
//int main()
//{
//	char str[100];
//	int num, price, quan, require, sum, put;
//	scanf("%s %d %d %d", &str, &num, &price, &quan);
//	while (1)
//	{
//		printf("��������������Ʒ����ż�����:\n");
//		scanf("%s %d %d", &str, &num, &require);
//		if (1 <= num && num <= 5 && quan <= 50)
//		{
//			if (require <= quan && require > 0)
//			{
//				sum = require * price;
//				while (1)
//				{
//					printf("��Ͷ��\n");
//					scanf("%d", &put);
//					if (put >= sum)
//					{
//						break;
//					}
//					sum -= put;
//				}
//				int change = put - sum;
//				printf("����:%dԪ\n", change);
//				printf("-------------\n");
//				quan -= require;
//			}//����������ѭ��
//			else
//			{
//				printf("��Ʒ�������㣬����������\n");
//			}
//		}//�ͻ�����������
//		else
//		{
//			printf("�������������������������");
//		}
//	}//�ܵĹ���ѭ��
//}