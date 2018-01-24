#include <stdio.h>
int main()
{
int a,d,n,i,tn;
int sum=0;
printf("first term:",a);
scanf("%d",&a);
printf(" difference :",d);
scanf("%d",&d);
printf("last term:",n);
scanf("%d",&n);
sum=(n*(2*a+(n-1)*d))/2;
tn=a+(n-1)*d;
printf("the sum of AP series is:");
for(i=a;i<=tn;i=i+d)
{
if(i!=tn)
printf("%d+",i);
else
printf("%d=%d",i,sum);
}
return 0;
}
