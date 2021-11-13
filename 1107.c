//ロシア農民の掛け算
#include <stdio.h>

int main(void)
{
int a=0,b=0,c=0;

for(;a<=0;)
{
printf("[1]自然数aを入力:");
scanf("%d", &a);
printf("a=%d\n",a);
}
for(;b<=0;)
{

printf("[1]自然数bを入力:");
scanf("%d", &b);
printf("b=%d\n\n",b);
}

printf("c=%d\n\n",c);

for(;a!=0;)
{
if(a%2 == 1)
{
c = c+b;
printf("[2]a=%dが奇数なので\n",a);
printf("[2]c+b = %d:\n\n",c);
}
a = a/2;
printf("[3]a/2 = %d:\n",a);
b = b*2;
printf("[3]b*2 = %d:\n\n",b);

}
printf("[4]a=%dになった時点で\n",a);
printf("[4]c=%d\n",c);

return 0;
}
