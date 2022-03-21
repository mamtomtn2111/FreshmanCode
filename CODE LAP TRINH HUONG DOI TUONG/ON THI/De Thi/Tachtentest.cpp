#include<iostream>
#include<string>
using namespace std;
class Nguoi{
	private:
		string soCMT;
		string hoTen;
		int namSinh;
	public:
		Nguoi()
		{
			
		}
		Nguoi(string _soCMT, string _hoTen, int _namSinh)
		{
			this->soCMT = _soCMT;
			this->hoTen = _hoTen;
			this->namSinh = _namSinh;
		}
		string getSoCMT()
		{
			return soCMT;
		}
		void setSoCMT(string soCMT)
		{
			this->soCMT = soCMT;
		}
		string getHoTen()
		{
			int n = hoTen.length() - 1;
        
	        int i = n;
	        
	        while(hoTen[i] != ' ')
	            i--;
	        if(i==0)
	            return hoTen;
	        string ten = hoTen.substr(i+1);
	        
	        
	        return ten;
		}
		void setHoTen(string hoTen)
		{
			this->hoTen = hoTen;
		}
		int getNamSinh()
		{
			return namSinh;
		}
		void setNamSinh(int namSinh)
		{
			this->namSinh = namSinh;
		}
		void nhap()
		{
			fflush(stdin);
			cout<<"Nhap so CMT: ";
			getline(cin,soCMT);
			
			cout<<"Nhap ho ten: ";
			getline(cin,hoTen);
			
			cout<<"Nhap nam sinh:";
			cin>>namSinh;
		}
		void xuat()
		{
			cout<<"So CMT : "<<soCMT<<endl;
			cout<<"Ho Ten : "<<hoTen<<endl;
			cout<<"Nam Sinh : "<<namSinh<<endl;
		}
};
class SinhVien : public Nguoi{
	private:
		string maSinhVien;
		string nganhHoc;
	public:
		SinhVien()
		{
			
		}
		SinhVien(string _soCMT, string _hoTen, int _namSinh, string _maSinhVien, string _nganhHoc):Nguoi(_soCMT,_hoTen,_namSinh)
		{
			this->maSinhVien = _maSinhVien;
			this->nganhHoc = _nganhHoc;
		}
		void nhap()
		{
			Nguoi::nhap();
			fflush(stdin);
			cout<<"Nhap MSV : ";
			getline(cin,maSinhVien);
			
			cout<<"Nhap nganh hoc : ";
			getline(cin,nganhHoc);
		}
		void xuat()
		{
			Nguoi::xuat();
			cout<<"Ma sinh vien : "<<maSinhVien<<endl;
			cout<<"Nganh hoc : "<<nganhHoc<<endl;
		}
}; 

class QuanLySinhVien{
	private:
		int n;
		SinhVien *sv;
	public:
		QuanLySinhVien(int ssv)
		{
			n = ssv;
			sv = new SinhVien[n];
		}
		QuanLySinhVien(SinhVien mSinhVien[] , int n1)
		{
			n = n1;
			sv = mSinhVien;
		}
		void nhap()
		{
			cout<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<"Nhap thong tin cho sinh vien thu : "<<i+1<<endl;
				sv[i].nhap();
			}
		}
		void xuat()
		{
			cout<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<"Thong tin cua sinh vien thu : "<<i+1<<endl;
				sv[i].xuat();
				cout<<"Hello world: "<<sv[i].getHoTen();
			}
		}
		void sapxep()
		{
			SinhVien gan;
			for(int i = 0 ;i < n;i++)
			{
				for(int j= i+1;j<n;j++)
				{
					if(sv[i].getHoTen().compare(sv[j].getHoTen()) > 0)
					{	
						gan = sv[i];
						sv[i] = sv[j];
						sv[j] = gan;
					}
				}
			}
		}
};
int main()
{
	int n;
	cout<<"Nhap so luong sinh vien : ";
	cin>>n;
	QuanLySinhVien mai(n);
	mai.nhap();
	mai.sapxep();
	mai.xuat();
}
