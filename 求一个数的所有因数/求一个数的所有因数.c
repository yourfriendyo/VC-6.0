#include <stdio.h>
int main()
{
int number,i;
printf("����һ��������");
scanf("%d",&number);
printf("%d�������У�");
for(i=1;i<=number;i++)



if(number%i==0)	printf("%d",i);

return 0;
}