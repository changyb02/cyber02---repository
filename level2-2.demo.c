//#include<stdio.h>
//#include<string.h> 
//
//int main()
//{
//    int price[1024], chanput[1024], quanput[1024];
//    char strput[1024][100];
//    int chanbuy[1024], require[1024];//��ֹ���
//    int requiresum[1024] = {0};
//    char strbuy[1024][100];
//    int chanback, quanback;
//    int money;
//    int i = 0;
//    int sum = 0, moneyback = 0;
//
//     while (1)//����ѭ��
//     {
//         scanf("%s", &strput[i]);
//         if (strcmp(strput[i], "END") == 0)
//             break;
//         scanf("%d %d %d", &chanput[i], &price[i], &quanput[i]);
//         i++;
//     }
//     for (int j = 0; j < i; j++) {
//         printf("Name:  %s,Channel: %d, Price: %d, Quantity: %d\n", strput[j],chanput[j], price[j], quanput[j]);
//     }//����ѭ��
//
//     while (1)
//     {
//         int j = 0, count = 0;
//         while (1)//����ѭ��
//         {
//             scanf("%s", &strbuy[j]);
//             if (strcmp(strbuy[j], "END") == 0)
//                 break;
//             if (strcmp(strbuy[j], "BACK") == 0 && j > 0)//�س�
//             {
//                 if (count < 3)
//                 {
//                     int found = 0;
//                     for (int i = 0; i < 5; i++)
//                     {
//                         if (chanbuy[j - 1] == chanput[i])
//                         {
//                             quanput[i] += require[j - 1];
//                             requiresum[i] -= require[j - 1];
//                             sum -= require[j - 1] * price[i];
//                             printf("�ѳɹ�������һ����Ʒ\n");
//                             printf("��ǰ�۸�Ϊ:%dԪ\n", sum);
//                             printf("����ʣ��%d�λ���\n", 2 - count);
//                             found = 1;
//                             j--; // ���غ󣬼��ٹ����¼����
//                             count++;
//                             break;
//                         }
//                     }
//                     if (!found)
//                     {
//                         printf("���������Ϣ�����޷������˻�\n");
//                     }
//                     else
//                     {
//                         continue;
//                     }
//                 }
//                 else
//                 {
//                     printf("���ѳ���3�Σ��޷��������أ�����END����������߼�������\n");
//                     continue;
//                 }//���ؽ���
//             }
//             scanf("%d %d", &chanbuy[j], &require[j]);//���빺��ѡ��
//             count = 0;
//             int found = 0;
//             for (int i = 0; i < 5; i++)
//             {
//                 if (chanbuy[j] == chanput[i] && strcmp(strbuy[j], strput[i]) == 0)//ʹ��Ʒ��Ӧ
//                 {
//                     if (require[j] > quanput[i])
//                     {
//                         printf("���ﲻ��\n");
//                         break;
//                     }
//                     else
//                     {
//                         if (chanbuy[j] == chanput[i] && strcmp(strbuy[j], strput[i]) == 0)
//                         {
//                             requiresum[i] += require[j];
//                             printf("���ѹ���%d��", requiresum[i]);
//                         }
//                         quanput[i] -= require[j];
//                         sum += require[j] * price[i];//�����Ǯ
//                         printf("��ǰ�۸�Ϊ%dԪ\n", sum);
//                         found = 1;
//                     }
//                     break;
//                 }
//             }
//             if (!found)
//             {
//                 printf("���������Ʒ����ܲ���Ӧ������������\n");
//             }
//             j++;
//         }//����ѭ��
//
//         printf("������Ҫ���ܽ��Ϊ:%dԪ\n", sum);
//         while (sum > 0)//֧��ѭ��
//         {
//             printf("��Ͷ�ң���֧��1Ԫ��2Ԫ��5Ԫ��\n");
//             scanf("%d", &money);
//             if (money == 1 || money == 2 || money == 5)
//             {
//                 sum -= money;
//                 if (sum > 0)
//                 {
//                     printf("������ҪͶ%dԪ\n", sum);
//                 }
//             }
//             else
//             {
//                 printf("����Ͷ�Ҳ�������������\n");
//             }
//         }//֧��ѭ��
//         printf("����:%dԪ\n", -sum);
//
//         int choose;
//         j = 0;
//         while (1)//�˻�ѭ��
//         {
//             printf("��Ҫ������Ʒ������1������Ҫ������2\n");
//             scanf("%d", &choose);
//             if (choose == 2)
//                 break;
//             else if (choose == 1)
//             {
//                 printf("����������Ҫ�˵���Ʒ�ͺ�,���ܼ�����\n");
//                 scanf("%s %d %d", strbuy, &chanback, &quanback);
//                 for (int i = 0; i < 5; i++)
//                 {
//                     if (chanback == chanput[i])//ʹ��Ʒ��Ӧ
//                     {
//                         if (quanback > requiresum[i])
//                         {
//                             printf("��δ�������������Ʒ������������\n");
//                             break;
//                         }
//                         else
//                         {
//                             moneyback = price[i] * quanback;
//                             printf("�˿�%dԪ\n", moneyback);
//                             quanput[i] += quanback;
//                             requiresum[i] -= quanback;
//                         }
//                     }
//                 }
//             }
//             else
//             {
//                 printf("���������Ϣ��������������\n");
//             }
//         }
//         int b;
//         printf("���Ƿ���Ҫ��������?\n1.��Ҫ 2.����Ҫ\n");
//         scanf("%d", &b);
//         if (b == 2)
//         {
//             printf("�����������Ʒ����ӭ�´ι���\n");
//             break;
//         }
//         for (int j = 0; j < i; j++)
//         {
//             printf("Name: %s,Channel: %d, Price: %d, Quantity: %d\n", strput[j], chanput[j], price[j], quanput[j]);
//         }
//     }
//    return 0;
//}