//github多人协作
#include<stdio.h>
<<<<<<< HEAD
int add(int a,int b);
int add(int a,int b)
{
return a+b;
=======
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
>>>>>>> 12a251f96b9172ecdd9d60c99e30e5846f0e4122
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



