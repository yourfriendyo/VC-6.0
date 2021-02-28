#include <stdio.h>
int main()
{
int a,b,c;
printf("赶紧给我输入三个数好比较大小！按回车昂\n第一个数为");
scanf("%d",&a);
printf("再来一个啊");
scanf("%d",&b);
printf("最后一个了快点！");
scanf("%d",&c);
if(a>=b&&a>=c)
printf("你个小笨蛋哦 %d就是最大跌\n",a);
if(b>=a&&b>=c)
printf("你个小笨蛋哦 %d就是最大跌\n",b);
if(c>=a&&c>=b)
printf("你个小笨蛋哦 %d就是最大跌\n",c);


return 0;
}