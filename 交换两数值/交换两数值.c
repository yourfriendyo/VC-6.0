#include <stdio.h>
int main()
{
double a,b,c;
printf("�����һ������a=");
scanf("%lf",&a);
printf("����ڶ�������b=");
scanf("%lf",&b);
c=a;
a=b;
b=c;
printf("\n������a=%.2lf",a);
printf("  ������b=%.2lf\n",b);

return 0;

}