#include<stdio.h>
int main()
{
	int acc_num=0,time,mode;
	int pool_acc=1,sauna_acc=2,per_trainer_acc=4,hour_acc=8;
	printf("Enter member's access number : \n");
	scanf("%d",&acc_num);
	while(acc_num!=9999)
	{
		printf("Enter time in 24-hour format : \n");
		scanf("%d",&time);
		if(time>=22 || time<6)
		{
			printf("Late night Mode\n");
			mode=1;
		}
		else
		{
			printf("Standard Mode\n");
			mode=2;
		}
		if(mode==2)
		{
			if((acc_num & pool_acc) || (acc_num & sauna_acc) || (acc_num & per_trainer_acc))
			{
				printf("Entry granted\n");
			}
			else
			{
				printf("Entry not granted\n");
			}
		}
		if(mode==1)
		{
		if(acc_num & per_trainer_acc)
		{
			printf("Entry granted\n");
		}
		else
		{
			printf("Entry not granted\n");
			
		}
		}
		if(acc_num & per_trainer_acc)
		{
			printf("Member access number includes personal trainer access\n");
		}
		else
		{
		printf("Member access number does not include personal trainer access\n");
		}
		printf("Enter member's access number : \n");
		scanf("%d",&acc_num);
	}
	return 0;
}
