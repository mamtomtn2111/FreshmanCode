#include<iostream>
#include<cstring>

using namespace std;

class VanBan
{
	private:
		char s[1000];
	public:
		VanBan();
		VanBan(char st[1000]);
		int Dem();
		int DemG();
		void XoaPhai();
		void XoaTrai();
		void XoaGiua();
		void Nhap();
		void Xuat();
};

void VanBan::Nhap()
{
	cout<<"Nhap vao xau: ";
	cin.getline(s,1000);
}

void VanBan::Xuat()
{
	cout<<"Xau ban vua nhap la: "<<s;
}

VanBan::VanBan(){
}

VanBan::VanBan(char st[1000])
{
	s[1000]=st[1000];
}

void VanBan::XoaTrai()
{
	int i=0,j;
	while(s[i] == ' ')
	{
		if(s[i] == ' ' )
		{
			for(j=0;j<strlen(s);j++)
			{
				s[j]=s[j+1];
			}
		}
	}
}

void VanBan::XoaPhai()
{
	int i=strlen(s)-1;
	int j;
	while(s[i]== ' ' )
		{
			if(s[i]== ' ')
			{
				s[i]=s[j+1];
				i--;
			}
		}
}

void VanBan::XoaGiua()
{
	int i,j;
	for(i=0;i<strlen(s)-1;i++)
	{
		if(s[i] != ' ' && s[i+1]== ' ' && s[i+2]== ' ' )
		{
			for(j=i+1;j<strlen(s);j++)
			{
				s[j]=s[j+1];
			}
			i--;
		}
	}
}

int VanBan::Dem()
{
	int i,count;
		count=1;
		for(i=1;i<strlen(s);i++)
		{
			if(s[i]==' ' && s[i+1] != ' ')
			{
				count++;
			}
		}
	return count;
}

int VanBan::DemG()
{
	int i,count=0;
	char str[]="g";
	char strl[]="G";
		for(i=0;i<strlen(s);i++)
		{
			if((strcmp(s,str) == 1 || strcmp(s,strl) == 1) && s[i] == ' ')
			{
				count++;
			}
		}
		i=strlen(s);
		if(strcmp(s,str) == 1 || strcmp(s,strl) == 1)
		{
			count++;
		};
	return count;
}

int main()
{
	VanBan vb;
	vb.Nhap();
	vb.XoaGiua();
	vb.XoaPhai();
	vb.XoaTrai();
	vb.Xuat();
	cout<<endl<<"So tu cua xau la: "<<vb.Dem()<<endl;
	cout<<"So tu ket thuc bang g la: "<<vb.DemG()<<endl;
}
