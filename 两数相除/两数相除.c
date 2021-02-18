#include <stdio.h>
int main()
{

double a,b,c,d;
int a1,b1,c1,d1;
printf("输入被除数：");
scanf("%lf",&a);

printf("输入除数；");
scanf("%lf",&b);
printf("商  =%lf\n",c);
c=a/b;

a1=a;
b1=b;
d1=a1%b1;

printf("余数=%lf\n",d1);


return 0;
}