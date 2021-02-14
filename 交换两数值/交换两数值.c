#include <stdio.h>
int main()
{
double a,b,c;
printf("输入第一个数字a=");
scanf("%lf",&a);
printf("输入第二个数字b=");
scanf("%lf",&b);
c=a;
a=b;
b=c;
printf("\n交换后，a=%.2lf",a);
printf("  交换后，b=%.2lf\n",b);

return 0;

}