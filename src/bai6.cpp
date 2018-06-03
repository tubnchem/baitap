#include <stdio.h>
#include <conio.h>
 
main()
{
    float Totalm;
    float Cost = 0;
    printf("\n Nhap vao so m: ");
    scanf("%f", &Totalm);
    if(Totalm <= 1000)
    {
        Cost = 10000;
    }
    else if(Totalm <= 300000 && Totalm > 1000)
    {
        Cost = 10000 * (Totalm+1500);
    }
    else
    {
       Cost = (Totalm +8000) * 10000;
    }
    printf("\n So tien phai tra: %0.2f VND", Cost);
    getch();
    return 0;
}
