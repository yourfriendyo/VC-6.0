#include <stdio.h>
int main()
{
int a,b,c;
printf("�Ͻ����������������ñȽϴ�С�����س���\n��һ����Ϊ");
scanf("%d",&a);
printf("����һ����");
scanf("%d",&b);
printf("���һ���˿�㣡");
scanf("%d",&c);
if(a>=b&&a>=c)
printf("���С����Ŷ %d��������\n",a);
if(b>=a&&b>=c)
printf("���С����Ŷ %d��������\n",b);
if(c>=a&&c>=b)
printf("���С����Ŷ %d��������\n",c);


return 0;
}