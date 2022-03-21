#include<stdio.h>
#include<conio.h>
#include<cmath>

/********************************************************
 *   Luat 1: Neu VX day thi do VX di                    *
 *   Luat 2: Neu VY rong thi do day nuoc cho binh 2     *
 *   Luat 3: Neu VX khong day va VY khong rong thi      *
 *   trut nuoc tu VY sang VX cho den khi VX day         *
 *                                                      *
*********************************************************/
int Vx,Vy,z;
void nhap()
{
    printf("\n----------------------------------\n");
    printf("\nNhap Vx: ");
    scanf("%d",&Vx);
    printf("\nNhap Vy: ");
    scanf("%d",&Vy);
    printf("\nNhap z: ");
    scanf("%d",&z);
}
void in()
{
    printf("\n\nDu lieu vua nhap:");
    printf("Vx=%d ",Vx);
    printf("Vy=%d ",Vy);
    printf("z=%d ",z);
}
int min(int a, int b)
{
    return a>b?b:a;
}
int dongnuoc()
{
    int x,y,k;
    printf("\n----------------------------------\n");
    printf("\n\nBai Lam:");
    x=0;y=0;
    while((x!=z)&&(y!=z))
    {
        if(x==Vx)
        {
            x=0;
            printf("\nLuat 1: x=%d ",x);
            printf(" y=%d ",y);
        }
        if(y==0)
        {
            y=Vy;
            printf("\n\nLuat 2: x=%d",x);
            printf(" y=%d",y);
        }
        if(y>0)
        {
            k=min(Vx-x,y);
            x=x+k;
            y=y-k;
            printf("\nLuat 3: x=%d",x);
            printf(" y=%d",y);
        }
    }
    return 0;
}
int main()
{
    nhap();
    in();
    dongnuoc();
    
    getch();
    return 0;
}
