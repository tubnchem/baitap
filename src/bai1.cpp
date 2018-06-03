#include <stdio.h>
#include<conio.h>
main()
{
	int a;
	int b;
	int temp;
	int c;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	
	printf("nhap c: ");
	scanf("%d",&c);
	if(a>b){
	temp=a;
	a=b;
	b=temp;
	}
	if(a>c){
	temp=a;
	a=c;
	c=temp;
	}
	if(b>c){
	temp=b;
	b=c;
	c=temp;
	}
	printf("giam dan %d %d %d",a,b,c);
	getch();
	return 0;
	}
