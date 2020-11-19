#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int a;
	FILE *fptr;
	fptr=fopen("E:Game.txt","w");
	printf("Enter any intiger:");
	scanf("%d",&a);
	fprintf(fptr,"%d",a);
	fclose(fptr);
	getch();
}
