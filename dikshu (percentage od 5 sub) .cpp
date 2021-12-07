#include<stdio.h>
main()
{
	int phy,mat,vd,bio,comp;
	float per;
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&phy,&mat,&vd,&bio,&comp);
	per=(phy+mat+vd+bio+comp)/5;
	printf("percentage=%.2f\n",per);
	if(per>=90)
	{
		printf("grade A");
	}
	else if(per>=80)
	{
		printf("grade B");
	}
	else if(per>=70)
	{
		printf("grade c");
	}
	else if(per>=40)
	{
		printf("grade D");
	}
	else if(per<=40)
	{
		printf("grade E");
	}
}
