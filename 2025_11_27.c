//github多人协作
#include<stdio.h>
double chufa(double a,double b)
{
       return a/b;
}
int subtraction(int a,int b)
{
  int t=a-b;
  return t;
}
int add(int a,int b)
{
       return a+b;
}
int multiply(int a,int b)
{
       return a*b;
}
int main()
{
       int a,b;
       printf("请输入你要计算的两个整数!);
       scanf("%d %d",&a,&b);
       printf("%d-%d=%d\n",a,b,subtraction(a,b));
       printf("%.2f/%.2f=%.2f\n",a,b,chufa(a,b));
       printf("%d+%d=%d\n",a,b,add(a,b));
       return 0;
}




