#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
clrscr();
int t,n,sum=0,rev,i;


printf("Enter an integer upto which you want to find armstrong no:\n");
scanf("%d",&n);
printf("following armstrong no. are found from 1 to %d\n",n);

for(i=1;i<=n;i++)
{
t=i;
while(t!=0)
{
rev=t%10;
sum=sum+pow(rev,3);
t=t/10;
}
if(i==sum)

printf("%d\n",i);
sum=0;
}



getch();
}