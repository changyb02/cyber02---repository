//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h> 
//
//int main() {
//    int price[1024], chanput[1024], quanput[1024];
//    char strput[4][100];
//    int chanbuy[1024], require[1024];
//    char strbuy[4][100];
//    int money;
//    int i = 0;
//    int sum = 0;
//
//    while (1) 
//    {
//        scanf("%s", &strput[i]);
//        if (strcmp(strput[i], "END") == 0)
//            break;
//        scanf("%d %d %d", &chanput[i], &price[i], &quanput[i]); 
//        i++;  
//    }
//    for (int j = 0; j < i; j++) 
//    {
//        printf("Channel: %d, Price: %d, Quantity: %d\n", chanput[j], price[j], quanput[j]);
//    }//����ѭ��
//
//    int j = 0;
//    while (1)
//    {
//        scanf("%s", &strbuy[j]);
//        if (strcmp(strbuy[j], "END") == 0)
//            break;
//        scanf("%d %d", &chanbuy[j],&require[j]);//���빺��ѡ��
//        int found = 0; // ����Ƿ��ҵ�ƥ����  
//        for (int i = 0; i < 5; i++) // �������п����  
//        {
//            if (chanbuy[j] == chanput[i] && strcmp(strbuy[j], strput[i]) == 0)
//            {
//                if (require[j] > quanput[i])
//                {
//                    printf("���ﲻ��\n");
//                }
//                else
//                {
//                    quanput[i] -= require[j];
//                    sum += require[j] * price[i];
//                    found = 1;
//                }
//                break; // �ҵ�ƥ������˳�ѭ��  
//            }
//        }
//        if (!found)
//        {
//            printf("���������Ʒ����ܲ���Ӧ������������\n");
//        }
//        j++;
//    }
//
//    printf("������Ҫ���ܽ��Ϊ:%dԪ\n",sum);
//    while (sum > 0)
//    {
//        printf("��Ͷ�ң���֧��1Ԫ��2Ԫ��5Ԫ��\n");
//        scanf("%d", &money);
//        if (money == 1 || money == 2 || money == 5)
//        {
//            sum -= money;
//            if (sum > 0)
//            {
//                printf("������ҪͶ%dԪ\n", sum);
//            }
//        }
//        else
//        {
//            printf("����Ͷ�Ҳ�������������");
//        }
//    }
//    printf("����:%dԪ\n", -sum);
//    return 0;
//}