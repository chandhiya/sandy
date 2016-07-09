#include<stdio.h>
void main()
{
int a,num;
int rem=0;
scanf("%d",&num);
a=num;
if(a!=0)
{
rem=rem*10;
rem=rem+a%10;
a=a/10;
}
if(a==num)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
