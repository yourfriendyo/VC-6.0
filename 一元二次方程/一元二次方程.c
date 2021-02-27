#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,x1,x2,daita;
printf("输入方程的三个系数：");
scanf("%f%f%f",&a,&b,&c);
if(a!=0)
{
daita=sqrt(b*b-4*a*c);
x1=(-b+daita)/(2*a);
x2=(-b-daita)/(2*a);
if(x1<x2)
printf("%.2f%.2f\n",x2,x1);
else
printf("%.2f%.2f\n"x1,x2);

}



return 0;
}
