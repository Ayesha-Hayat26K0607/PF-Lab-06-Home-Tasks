#include<stdio.h>
int main()
{
	int n,i,w,type,remainder,code;
	printf("Enter the no. of containers to be checked : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the container's weight in kg : \n");
		scanf("%d",&w);
		printf("Enter Cargo type : 1-General Goods 2-Hazardous Materials 3-Refrigerated Materials \n");
		scanf("%d",&type);
		switch(type)
		{
			case 1: 
			if(w>20000)
			{
				printf("Weight exceeds more than its limit containers cannot load\n");
			}
			else
			{
				printf("Suitable weight container can load\n");
			}
			break;
			case 2 :
		    if(i%2!=0 && w<15000)
		    {
		        printf("Containers can load\n");
			}
			else
			{
				printf("Containers cannot load(Invalid turn or weight exceeds its limit)\n");
			}
			break;
			case 3:
			if(w>18000)
			{
				printf("Weight exceeds more than its limit containers cannot load\n");
			}
			else
			{
				printf("Suitable weight container can load\n");	
			}
			break;
		}
		remainder=w%97;
		code=remainder%100;
		printf("Two digit tracking code is : %02d\n",code);
	}
	return 0;
}
