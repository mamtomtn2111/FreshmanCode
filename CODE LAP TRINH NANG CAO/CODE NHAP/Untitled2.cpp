#include <iostream.h>
#include<stdlib.h>
#include<conio.h>

#define MAX 100
 
 
void Nhap(int *a,int &n)
{
   
    for(int i=0;i<n;i++)
    {
        cout <<"\nNhap phan tu thu a["<<i+1<<"]:";
        cin >>*(a+i);
    }
}
void Xuat(int *a,int n)
{
   
    for(int i=0;i<n;i++)
        cout <<*(a+i)<<' ';
 
}
 
int *Maxx(int *a,int n)
{
    int *max=a,*p,*q=a+n;
    if(n<=0)
        return NULL;
   
    for(p=a+1;p<q;p++)
        if(*p > *max)
            max=p;
    return max;
}
 
int *Minn(int *a,int n)
{
    if(n<=0)
        return NULL;
    int *min=a,*p,*q=a+n;
   
    for(p=a+1;p<q;p++)
        if(*p < *min)
            min=p;
    return min;
}
 
int main()
{
    int a[MAX],n;
    cout <<"\nNhap n = ";
    cin >>n;
    Nhap(a,n);
    cout <<"\nMang da tao la: ";
    Xuat(a,n);
    int *max=Maxx(a,n);
    int *min=Minn(a,n);
    if(max!=NULL)
        cout <<"\nSo lon nhat la: "<<*max<<endl;
   
    else cout <<"\nMang rong!";
   
    if(min!=NULL)
        cout <<"\nSo be nhat la: "<<*min<<endl;
    else cout <<"\nMang rong!";
    return 0;
}
