#include<stdio.h>
#include<string.h> 

int main()
{
    int price[1024], chanput[1024], quanput[1024];
    char strput[1024][100];
    int chanbuy[1024], require[1024];//防止溢出
    int requiresum[1024] = {0};
    char strbuy[1024][100];
    int chanback, quanback;
    int money;
    int i = 0;
    int sum = 0, moneyback = 0;

     while (1)//放置循环
     {
         scanf("%s", &strput[i]);
         if (strcmp(strput[i], "END") == 0)
             break;
         scanf("%d %d %d", &chanput[i], &price[i], &quanput[i]);
         i++;
     }
     for (int j = 0; j < i; j++) {
         printf("Name:  %s,Channel: %d, Price: %d, Quantity: %d\n", strput[j],chanput[j], price[j], quanput[j]);
     }//放置循环

     while (1)
     {
         int j = 0, count = 0;
         while (1)//购物循环
         {
             scanf("%s", &strbuy[j]);
             if (strcmp(strbuy[j], "END") == 0)
                 break;
             if (strcmp(strbuy[j], "BACK") == 0 && j > 0)//回撤
             {
                 if (count < 3)
                 {
                     int found = 0;
                     for (int i = 0; i < 5; i++)
                     {
                         if (chanbuy[j - 1] == chanput[i])
                         {
                             quanput[i] += require[j - 1];
                             requiresum[i] -= require[j - 1];
                             sum -= require[j - 1] * price[i];
                             printf("已成功撤回上一个商品\n");
                             printf("当前价格为:%d元\n", sum);
                             printf("您还剩余%d次机会\n", 2 - count);
                             found = 1;
                             j--; // 撤回后，减少购买记录索引
                             count++;
                             break;
                         }
                     }
                     if (!found)
                     {
                         printf("您输入的信息有误，无法进行退货\n");
                     }
                     else
                     {
                         continue;
                     }
                 }
                 else
                 {
                     printf("您已撤回3次，无法继续撤回，输入END结束购买或者继续购物\n");
                     continue;
                 }//撤回结束
             }
             scanf("%d %d", &chanbuy[j], &require[j]);//输入购买选择
             count = 0;
             int found = 0;
             for (int i = 0; i < 5; i++)
             {
                 if (chanbuy[j] == chanput[i] && strcmp(strbuy[j], strput[i]) == 0)//使商品对应
                 {
                     if (require[j] > quanput[i])
                     {
                         printf("货物不足\n");
                         break;
                     }
                     else
                     {
                         if (chanbuy[j] == chanput[i] && strcmp(strbuy[j], strput[i]) == 0)
                         {
                             requiresum[i] += require[j];
                             printf("您已购买%d个", requiresum[i]);
                         }
                         quanput[i] -= require[j];
                         sum += require[j] * price[i];//计算价钱
                         printf("当前价格为%d元\n", sum);
                         found = 1;
                     }
                     break;
                 }
             }
             if (!found)
             {
                 printf("您输入的商品与货架不对应，请重新输入\n");
             }
             j++;
         }//购物循环

         printf("您所需要的总金额为:%d元\n", sum);
         while (sum > 0)//支付循环
         {
             printf("请投币（仅支持1元，2元，5元）\n");
             scanf("%d", &money);
             if (money == 1 || money == 2 || money == 5)
             {
                 sum -= money;
                 if (sum > 0)
                 {
                     printf("您还需要投%d元\n", sum);
                 }
             }
             else
             {
                 printf("您的投币不符合上述条件\n");
             }
         }//支付循环
         printf("找您:%d元\n", -sum);

         int choose;
         j = 0;
         while (1)//退货循环
         {
             printf("需要回退商品请输入1，不需要请输入2\n");
             scanf("%d", &choose);
             if (choose == 2)
                 break;
             else if (choose == 1)
             {
                 printf("请输入您需要退的物品型号,货架及个数\n");
                 scanf("%s %d %d", strbuy, &chanback, &quanback);
                 for (int i = 0; i < 5; i++)
                 {
                     if (chanback == chanput[i])//使商品对应
                     {
                         if (quanback > requiresum[i])
                         {
                             printf("您未购买该数量的商品，请重新输入\n");
                             break;
                         }
                         else
                         {
                             moneyback = price[i] * quanback;
                             printf("退款%d元\n", moneyback);
                             quanput[i] += quanback;
                             requiresum[i] -= quanback;
                         }
                     }
                 }
             }
             else
             {
                 printf("您输入的信息有误，请重新输入\n");
             }
         }
         int b;
         printf("您是否还需要继续购物?\n1.需要 2.不需要\n");
         scanf("%d", &b);
         if (b == 2)
         {
             printf("请带好您的物品，欢迎下次光临\n");
             break;
         }
         for (int j = 0; j < i; j++)
         {
             printf("Name: %s,Channel: %d, Price: %d, Quantity: %d\n", strput[j], chanput[j], price[j], quanput[j]);
         }
     }
    return 0;
}
