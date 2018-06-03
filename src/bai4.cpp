#include <stdio.h>
#include<conio.h>
main()
{
	int a;
printf("nhap do cao cua tam giac can la ");
scanf("%d",&a);
for(int i=1;i<=a;i++)
{
for(int j=1;j<=a-i;j++)
printf(" ");
for(int j=1;j<=2*i-1;j++)
printf("*");
printf("\n");
}
getch();

}
