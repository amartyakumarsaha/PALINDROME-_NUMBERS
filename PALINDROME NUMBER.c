#include<stdio.h>
int main(void)
{
	int n,temp,rem,num=0;
	printf("Enter a number:-");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{
		rem=temp%10;
		num=num*10+rem;
		temp=temp/10;
	}
	if(num==n)
		printf("The Number Is Palindrome");
	else
		printf("The Number Is Not Palindrome");
		
		
	return 0;
}
