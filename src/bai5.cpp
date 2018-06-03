#include <stdio.h>
#include<conio.h>
main()
{
	int a;
	int b;
	int c;
	printf("nhap ngay: ");
	scanf("%d",&b);
	if(b>31){
	printf("\n khong hop le",b);
	}else{
		printf("ngay %d",b);
	}
	
		printf("\n nhap thang: ",c);
	scanf("%d",&c);
	if(b>12){
	printf("\n khong hop le",c);
	}
	else{
		printf("\n thang %d",c);
	}
	printf("\n nhap nam: ");
	scanf("%d",&a);
   if (((a % 4 == 0) && (a % 100!= 0)) || (a%400 == 0))
      printf("%d la mot nam nhuan", a);
   else
      printf("%d khong phai la nam nhuan", a);
      
   return 0;
   getch();


}
