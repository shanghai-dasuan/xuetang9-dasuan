#include <stdio.h>
#include <stdlib.h>
#include "math.h"
#include <limits.h>
#include <float.h>

int main()
{
//��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����




    int letter = 0; space = 0; others = 0;
    int ch;
    printf("please input some words for count.\n");
    while(ch = getchar()!= \n )
    {
        if(ch = )
    }





   //��Ŀ����������������m��n���������Լ������С��������
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
   printf("���Լ���ǣ�%d\n",numsmall);
   printf("��С�������ǣ�%d\n",cj / numsmall);*/





   //��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��

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





    //��Ŀ�ģ���һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��
    //��С���󣬵ó���һ������������Ϊ0�������̸�����ʱ�������������г������ԣ�ֱ����Ϊ������������
    //�����ж��ǲ�������������ǣ������������ǣ�����˺ź�����
   /*int num,i;
    printf("���������֣�");
    scanf("%d", &num);
    printf("%d =",num);
    for(i = 2; i <= num; i++)
    {
        while(num != i)         //�����������Ƕ�׺ܾ��ʣ����num��С����ζ�Žӽ�����
        {
            if(num % i == 0)
                {  printf("%d*",i);
                    num /= i;
                }else break;    //break��λ�úܹؼ�������whileѭ������û����forѭ��
        }
    }
   printf("%d",num);*/















    //������ ��ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ�������
    /*int num;            //num��Χ��100-999֮��
    int a, b ,c;                //a Ϊ��λ����bΪʮλ������cΪ��λ��


    for(num = 101; num < 1000; num++)
    {
        a = num / 100;
        b = num % 100 /10; // Ҳ����д��  num / 10 % 10
        c = num % 10;

        if(a*a*a + b*b*b + c*c*c == num)
            printf("%d\n",num);

    }*/








    //�ڶ��� �ж�101-200֮���ж��ٸ����������������������

    /*int bcs,sq;                         //bcs��Ҫ��֤������sq�������+1�Ժ��ƽ��������ֹȡ���Ժ��ƽ������С��׼ȷ
    int count = 0, leap = 1;            //count������leap�Ǵ��������Ƿ�Ϊ0�ı�������ʼֵΪ1�������桱
    int i;

    for(bcs = 1; bcs < 101; bcs++)      //���ѭ��������֤�������Զ�����
    {
        sq = sqrt(bcs+1);               //��ƽ�������õ���ѧ��ʽͷ�ļ�<math.h>����ƽ������Ϊ�˽�Լ����������Ϊ����һ������С�ڻ����ƽ����
        for(i = 2; i <= sq; i++)        //�ڲ�ѭ�����Ƴ��������ӣ����Ե���sq����Ϊleap��ֵ�ĺô�
        {
            if(bcs % i == 0)            //�ж��Ƿ��ܱ�����
            {
                leap = 0;               //�������������������ѭ����leap��ֵ0
                break;
            }
        }

        if(leap)                        //���leap��ֵ0��Ϊ�٣���ִ����䣻����ִ��count+1�������������
        {
            printf("%-5d",bcs);
            count++;
            if(count % 5 == 0) printf("\n");//�����5��������
        }
        leap = 1;                       //��ѭ����ʼǰ�ָ�leap��ֵΪ�档

    }
        printf("\n��������%d����\n",count);*/








    // ��һ�� Fibonacci sequence �����ӵ�����
    /*int i;
    int a,b;
    a = b = 1;                          //���ó�ֵ

    for(i = 1; i < 5; i++)             //����ѭ������
    {
        printf("%d\t%d\t",a,b);         //ÿ���������һ��
        if(i % 2 == 0) printf("\n");    //���У�������һ���������������%2
        a = a + b;                      //ǰ�����¸�ֵ����������
        b = a + b;                      //�ڶ��¸������ĸ��£���ʾʽ��˳�����

    }*/
    return 0;
}



