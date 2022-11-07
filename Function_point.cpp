#include<stdio.h>
#include<conio.h>

void main()
{
	float simp[5] = {3,4,3,7,5};
	float avg[5] = {4,5,4,10,7};
	float comp[5] = {4,5,4,10,7};
	int i=0,sel;
	float val[5];
	float fp=0.0,cfa=1.07,ufc=0.0;
	
	
	printf("\nEnter Input: ");
	scanf("%f",&val[0]);
	printf("\nEnter Output: ");
	scanf("%f",&val[1]);
	printf("\nEnter inquiries: ");
	scanf("%f",&val[2]);
	printf("\nEnter files: ");
	scanf("%f",&val[3]);
	printf("\nEnter external interface: ");
	scanf("%f",&val[4]);
	
	printf("\n------Diff Complexity of Project:------");
	printf("\n1.Simple\n2.Average\n3.Complex\n");
	printf("Select Project Complexity: ");
	scanf("%d",&sel);
	
	switch(sel)
	{
		case 1 :
				printf("\n-----Case Simple-----");
				for(i=0;i<5;i++)
					ufc = ufc + (val[i]*simp[i]);
				break;
		case 2:
				printf("\n-----Case Average-----");
				for(i=0;i<5;i++)
					ufc = ufc + (val[i]*avg[i]);
				break;
		case 3:
				printf("\n----Case Complex----");
				for(i=0;i<5;i++)
					ufc = (float)ufc + (val[i]*comp[i]);
				break;
		default:
				printf("Invalid Case !!");
	}
	
	printf("\n--------------------------");
	printf("\nCAF: %f and UFC: %f ",cfa,ufc);
	fp = ufc*cfa;
	printf("\nFP : %f",fp);
	
	
	getch();
}
