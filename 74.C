#include <stdio.h>
#include<conio.h>
int main(void) 
{
	float num;
	int x;
	printf("\n enter the num:");
	scanf("%f",&num);
	x=(int)(num+0.5);
	printf("\n%d",x);
  getch();
	return 0;
}
