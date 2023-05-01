#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int x=20,y=30,z=40,xyz;
	xyz=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
	printf("x+y+z2=%d",xyz);
	getch();
}