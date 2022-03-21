#include<conio.h>
#include<stdio.h>
#include<string.h>
int xoa(char *a, int q)
{
            int n = strlen(a), i;
            for (i = q; i <= n; i++)
            {
                        a[i] = a[i + 1];
            }
            n--;
            return 0;
}
int xoakhoangtrang(char *a)
{
            int i, n=strlen(a);
            for (i = 0; i < n; i++)
            {
                        if (a[0] == 32)
                        {
                                    xoa(a, 0);
                                    n--;
                        }
                        if (a[n-1] == 32)
                        {
                                    xoa(a, n-1);
                                    n--;
                        }
                        if (a[i] == 32 && a[i + 1] == 32)
                        {
                                    xoa(a, i);
                                    i--;
                                    n--;
                        }
            }
            return 0;
}
char InHoaKyTuDau(char s[]){
  			int i;                                            
			  if(*(s+i)!=' '){                                               
			  *(s+i)=*(s+i)-32;                                               
			  	for(i=1;i<strlen(s);i++){                                                            
			  		if(*(s+i)==' ' && *(s+i+1)!=' ' && *(s+i+1)>='a' && *(s+i+1)<='z' ){                                                                  
			  *(s+i+1)=*(s+i+1)-32;                                                        
			  		}                                                         
			  	}                                           
			  }                                           
			  else{                                               
			  	for(i=0;i<strlen(s);i++)                                              
			  {                                                           
			  		if(*(s+i)==' ' && *(s+i+1)!=' ' && *(s+i+1)>='a' && *(s+i+1)<='z' ){
			  *(s+i+1)=*(s+i+1)-32;                                                            
			  		}                                                        
			  }                                           
			  }
                    printf("\n%s",s);

}


int kiemtra(char *p,int i)
{
     int kt=0;
     for(int j=0;j<=i;j++)
     if(p[i]==p[j]) kt++;  
     if(kt>1)return 0;
     return 1;  
}
int dem(char *p,int i)
{
   int dem=0;
   for (int j=i;j<strlen(p);j++)
   {
       if(p[i]==p[j]) dem++;
   }
   return dem;
}
int main()
{
            char chuoi[100];
            int tmp=0;
            printf("xin moi ban nhap chuoi : ");
            fflush(stdin);
            gets(chuoi);
            xoakhoangtrang(chuoi);
            printf("%s", chuoi);
            InHoaKyTuDau(chuoi);
            
            
            for(int i=0;i<strlen(chuoi);i++)
    {
       if((chuoi[i]!=' ')&&(kiemtra(chuoi,i))==1)
       printf("\nki tu %c co %d lan xuat hien\n",chuoi[i],dem(chuoi,i));
       if(chuoi[i]==' ') tmp++;
    }
    printf("\nki tu space co %d lan xuat hien",tmp);
            getch();
            return 0;
}
