#include<stdio.h>
int main()
{
	int n,a,b,c,value,i;
	float avg;
	printf("Enter no. of students : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the marks of three subjects (Out of 100) to calculate their average : \n");
		scanf("%d %d %d",&a,&b,&c);
		avg=(a+b+c)/3;
		value=avg/10;
		switch(value)
		{
			case 10:
			case 9:
				printf("Your grade is A\n");
				break;
			case 8:
				printf("Your grade is B\n");
				break;
			case 7:
				printf("Your grade is C\n");
				break;
			case 6:
				printf("Your grade is D\n");
				break;
			default:
				printf("Your grade is F\n");
			}
		
		printf("Status : %s\n",avg>=60 && a>=40 && b>=40 && c>=40?"Passed":"Failed");
	}
	return 0;
}
