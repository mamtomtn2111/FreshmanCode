#include<iostream>

using namespace std;

class SinhVien{
	protected:
		string HoTen;
		int NamSinh;
		string Lop;
	public:
		void Nhap(){
			fflush(stdin);
			cout<<"Nhap vao ho ten: ";
			getline(cin,HoTen);
			
			fflush(stdin);
			cout<<"Nhap vao nam sinh: ";
			cin>>NamSinh;
			
			fflush(stdin);
			cout<<"Nhap vao lop: ";
			getline(cin,Lop);
		}
		
		string GetClass(){
			return Lop;
		}
		
		void Xuat(){
			cout<<"\nHo ten: "<<HoTen;
			cout<<"\nNam sinh la: "<<NamSinh;
			cout<<"\nTuoi: "<<2020-NamSinh;
			cout<<"\nLop" <<Lop;
		}
};

class TheMuon : public SinhVien{
	private:
		string SoPhieuMuon;
		string HanMuon;
		string HanTra;
		string SoHieu;
	public:
		void NhapThe(){
			SinhVien::Nhap();
			cout<<"Nhap vao so phieu muon: ";
			getline(cin,SoPhieuMuon);
				
			cout<<"Nhap vao ngay muon: ";
			getline(cin,HanMuon);
				
			cout<<"Nhap vao han tra: ";
			getline(cin,HanTra);
				
			cout<<"Nhap vao so hieu sach: ";
			getline(cin,SoHieu);
		}
		
		void XuatThe(){
			SinhVien::Xuat();
			cout<<"\nSo phieu muon: "<<SoPhieuMuon;
			cout<<"\nNgay muon: "<<HanMuon;
			cout<<"\nNgay tra: "<<HanTra;
			cout<<"\nSo hieu sach: "<<SoHieu;
		}
};

class QuanLyThe{
	private:
		int n;
		TheMuon *tm;
	public:
		QLT(){};
		QLT(int _n,TheMuon *tm1){
			n=_n;
			for(int i = 0; i < n; i++)
				tm[i]=tm1[i];
		}
		void NHAP(){
			cout<<"Nhap vao n the: ";
			cin>>n;
			tm = new TheMuon[n];
			cout<<"\n===NHAP VAO THE===\n";
			for(int i = 0; i < n; i++){
				cout<<"\n\t\tTHE "<<i+1<<endl;
				tm[i].NhapThe();
			}
		}
		
		void XUAT(){
			cout<<"\n===XUAT THE===\n";
			for(int i = 0; i < n; i++){
				cout<<"\n\t\tTHE "<<i+1<<endl;
				tm[i].XuatThe();
			}
		}
		
		int DemTheLop(){
			string lop;
			int dem=0;
			cout<<"\n\nNhap vao phan tu ban can tim:";
			getline(cin,lop);
			for(int i = 0; i < n;i++){
				if(lop == tm[i].GetClass())
					dem+=1;
			}
			cout<<"\nSo lop "<<lop<<" la: "<<dem;
		}
};

int main(){
	QuanLyThe a;
	a.NHAP();
	a.XUAT();
	a.DemTheLop();
}
