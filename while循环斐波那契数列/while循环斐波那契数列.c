#include <stdio.h>
int main()
{
int f1=1,f2=1,t=0,n,i;
printf("����һ��������");
scanf("%d",&n);
printf("쳲��������У�\n%d,%d,",f1,f2);
t=f1+f2;
while(t<=n)
{
printf("%d,",t);
f1=f2;
f2=t;
t=f1+f2;
i++;
if(i%3==0) printf("\n");
}
return 0;
}