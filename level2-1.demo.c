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
//    }//放置循环
//
//    int j = 0;
//    while (1)
//    {
//        scanf("%s", &strbuy[j]);
//        if (strcmp(strbuy[j], "END") == 0)
//            break;
//        scanf("%d %d", &chanbuy[j],&require[j]);//输入购买选择
//        int found = 0; // 标记是否找到匹配项  
//        for (int i = 0; i < 5; i++) // 遍历所有库存项  
//        {
//            if (chanbuy[j] == chanput[i] && strcmp(strbuy[j], strput[i]) == 0)
//            {
//                if (require[j] > quanput[i])
//                {
//                    printf("货物不足\n");
//                }
//                else
//                {
//                    quanput[i] -= require[j];
//                    sum += require[j] * price[i];
//                    found = 1;
//                }
//                break; // 找到匹配项后退出循环  
//            }
//        }
//        if (!found)
//        {
//            printf("您输入的商品与货架不对应，请重新输入\n");
//        }
//        j++;
//    }
//
//    printf("您所需要的总金额为:%d元\n",sum);
//    while (sum > 0)
//    {
//        printf("请投币（仅支持1元，2元，5元）\n");
//        scanf("%d", &money);
//        if (money == 1 || money == 2 || money == 5)
//        {
//            sum -= money;
//            if (sum > 0)
//            {
//                printf("您还需要投%d元\n", sum);
//            }
//        }
//        else
//        {
//            printf("您的投币不符合上述条件");
//        }
//    }
//    printf("找您:%d元\n", -sum);
//    return 0;
//}