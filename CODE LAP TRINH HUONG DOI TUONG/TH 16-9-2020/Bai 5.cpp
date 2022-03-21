#include<iostream>
#include<cmath>
using namespace std;

class ToanHoc
{
	public:
		ToanHoc();
		void Nhap();
		bool KT();
		void XuatNT();
		bool CheckSoHoanHao();
		void XuatHoanHao();
		void CheckChinhPhuong();
	private:
		int n;
};
ToanHoc::ToanHoc()
{
	n;
}

void ToanHoc::Nhap()
{
	cout<<"Nhap vao so n: ";
	cin>>n;
}

bool ToanHoc::KT()
{
	int i;
	if(n<2)
		return 0;
	else
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
				return 0;
		}
		return 1;
	}
}

bool ToanHoc::CheckSoHoanHao()
{
    int sum = 0;
    for(int i=1;i<=n/2;i++)
	{
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) 
		return 1; 
    return 0;
}

void ToanHoc::XuatNT()
{
	if(ToanHoc::KT())
		cout<<"Day la so nguyen to !!!!"<<endl;
	else cout<<"Day khong phai so nguyen to !!!!"<<endl;
}


void ToanHoc::XuatHoanHao()
{
	if(ToanHoc::CheckSoHoanHao())
		cout<<"Day la so hoan hao !!!!"<<endl;
	else
	cout<<"Day khong phai so hoan hao !!!!"<<endl;
}

void ToanHoc::CheckChinhPhuong()
{
	int i,j;
	cout<<"So chinh phuong <= n la: ";
	for(i=1; i<=n; i++)
	{
        for(j=1; j<=i; j++) 
		{
        	if(j*j==i)
               cout<<"\t"<<i;
    	}
	}
}

int main()
{
	ToanHoc Th;
	Th.Nhap();
	Th.XuatNT();
	Th.XuatHoanHao();
	Th.CheckChinhPhuong();
}
