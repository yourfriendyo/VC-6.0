#include <stdio.h>
int main()
{
int year;

printf("�������");
scanf("%d",&year);

if(year%4==0)
{
  if(year%100==0)
  {
     if(year%400==0)
     printf("%d������\n",year);
     else printf("%d��������\n",year);
  }
  else printf("%d������\n",year);


}
else printf("%d��������\n",year);


return 0;
}