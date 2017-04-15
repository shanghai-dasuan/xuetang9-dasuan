#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <limits.h>
#include <float.h>

int main()
{
//题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。




    int letter = 0; space = 0; others = 0;
    int ch;
    printf("please input some words for count.\n");
    while(ch = getchar()!= \n )
    {
        if(ch = )
    }





   //题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
   /*int numbig,numsmall,resd, cj;
   printf("please input two integrate number, the first is bigger than the second:");
   scanf("%d %d", &numbig, &numsmall);
   cj = numbig * numsmall;
   while(1)
   {
       resd = numbig % numsmall;
       if(resd != 0)
        {
        numbig = numsmall;
        numsmall = resd;
       }
       else break;
   }
   printf("最大公约数是：%d\n",numsmall);
   printf("最小公倍数是：%d\n",cj / numsmall);*/





   //题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

   /*int score;
   char level;
   printf("please input your score: \n");
   scanf("%d",&score);
   level = (score < 60 ? 'C':(score < 90 ? 'B': 'A') );
   printf("your level is %c.\n", level);*/
    /*int score;
   char level;
   int err;
    while(1)
    {
        printf("please input your score: \n");
   err=scanf("%d",&score);
   if(err == 0 || score < 0 || score > 120)
    printf("ERROR\n");
   else
   {
    level = (score < 60 ? 'C':(score < 90 ? 'B': 'A') );
    printf("your level is %c.\n", level);
   }
   getchar();
    }*/





    //题目四：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
    //从小到大，得出第一个因数（余数为0），把商赋给临时变量，继续进行除法测试，直到商为质数（素数）
    //首先判断是不是素数，如果是，输出，如果不是，输出乘号和因数
   /*int num,i;
    printf("请输入数字：");
    scanf("%d", &num);
    printf("%d =",num);
    for(i = 2; i <= num; i++)
    {
        while(num != i)         //这个条件语句的嵌套很精彩，如果num变小，意味着接近结束
        {
            if(num % i == 0)
                {  printf("%d*",i);
                    num /= i;
                }else break;    //break的位置很关键，跳出while循环，但没跳出for循环
        }
    }
   printf("%d",num);*/















    //第三题 打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身
    /*int num;            //num范围在100-999之间
    int a, b ,c;                //a 为百位数，b为十位灵敏，c为个位数


    for(num = 101; num < 1000; num++)
    {
        a = num / 100;
        b = num % 100 /10; // 也可以写成  num / 10 % 10
        c = num % 10;

        if(a*a*a + b*b*b + c*c*c == num)
            printf("%d\n",num);

    }*/








    //第二题 判断101-200之间有多少个素数，并输出所有素数。

    /*int bcs,sq;                         //bcs是要验证的数，sq是这个数+1以后的平方根，防止取整以后的平方根过小不准确
    int count = 0, leap = 1;            //count计数，leap是代表余数是否为0的变量，初始值为1，即“真”
    int i;

    for(bcs = 1; bcs < 101; bcs++)      //外层循环控制验证的数的自动增加
    {
        sq = sqrt(bcs+1);               //求平方根，用到数学公式头文件<math.h>。用平方根是为了节约计算量，因为必有一个因数小于或等于平方根
        for(i = 2; i <= sq; i++)        //内层循环控制除数的增加，可以等于sq，因为leap赋值的好处
        {
            if(bcs % i == 0)            //判断是否能被整除
            {
                leap = 0;               //如果发现能整除，跳出循环，leap赋值0
                break;
            }
        }

        if(leap)                        //如果leap赋值0，为假，不执行语句；否则执行count+1，并输出该数字
        {
            printf("%-5d",bcs);
            count++;
            if(count % 5 == 0) printf("\n");//如果满5个，换行
        }
        leap = 1;                       //大循环开始前恢复leap的值为真。

    }
        printf("\n共有素数%d个。\n",count);*/








    // 第一题 Fibonacci sequence 生兔子的问题
    /*int i;
    int a,b;
    a = b = 1;                          //设置初值

    for(i = 1; i < 5; i++)             //设置循环次数
    {
        printf("%d\t%d\t",a,b);         //每两个月输出一次
        if(i % 2 == 0) printf("\n");    //换行，由于是一次输出两个，所以%2
        a = a + b;                      //前两个月赋值给第三个月
        b = a + b;                      //第二月赋给第四个月，表示式的顺序计算

    }*/
    return 0;
}



