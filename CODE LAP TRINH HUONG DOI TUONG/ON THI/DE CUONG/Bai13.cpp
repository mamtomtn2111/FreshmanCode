#include<iostream>

using namespace std;

class PTGT{
    protected:
        string SoMay;
        string HangSanXuat;
        string NamSanXuat;
        float GiaBan;
    public:
        PTGT(){};
        void NhapPTGT(){
            fflush(stdin);
            cout<<"Nhap vao so may cua phuong tien: ";
            getline(cin,SoMay);
        
            cout<<"Nhap vao hang san xuat: ";
            getline(cin,HangSanXuat);

            cout<<"Nhap vao nam san xuat: ";
            getline(cin,NamSanXuat);

            fflush(stdin);
            cout<<"Nhap vao gia ban: ";
            cin>>GiaBan;
        }

        void XuatPTGT(){
            cout<<"\n===So may phuong tien la: "<<SoMay;
            cout<<"\nHang san xuat: "<<HangSanXuat;
            cout<<"\nNam san xuat: "<<NamSanXuat;
            cout<<"\nGia ban: "<<GiaBan;
        }
};

class XeOto: public PTGT{
    private:
        int SoChoNgoi;
        string KieuDongCo;
    public:
        XeOto(){};
        void NhapOto(){
            PTGT::NhapPTGT();
            cout<<"Nhap vao so cho ngoi: ";
            cin>>SoChoNgoi;

            fflush(stdin);
            cout<<"Nhap vao kieu dong co: ";
            getline(cin,KieuDongCo);
        }

        void XuatOto(){
            PTGT::XuatPTGT();
            cout<<"\nSo cho ngoi: "<<SoChoNgoi;
            cout<<"\nKieu dong co: "<<KieuDongCo;
        }
        
        string GetSoMay(){
        	return SoMay;
		}
};

class XeMay:public PTGT{
    private:
        string CongSuat;
    public:
        XeMay(){};
        void NhapXeMay(){
            PTGT::NhapPTGT();
                fflush(stdin);
                cout<<"Nhap vao cong suat: ";
                getline(cin,CongSuat);
            }
        void XuatXeMay(){
            PTGT::XuatPTGT();
            cout<<"\nCong suat: "<<CongSuat;
        }
        string GetSoMay(){
        	return SoMay;
		}
};

class XeTai: public PTGT{
    private: 
        string TrongTai;
    public:
        XeTai(){};
        void NhapXeTai(){
            PTGT::NhapPTGT();
            fflush(stdin);
            cout<<"Nhap vao trong tai: ";
            getline(cin,TrongTai);
        }

        void XuatXeTai(){
            PTGT::XuatPTGT();
            cout<<"\nTrong tai xe: "<<TrongTai;
        }
        string GetSoMay(){
        	return SoMay;
		}
};

class QLPTGT{
    private:
        int n;
        XeTai *xt;
        XeOto *oto;
        XeMay *xm;
        PTGT *pt;
        int chon[100];
    public:
        QLPTGT(){};
        void NHAP(){
            cout<<"Nhap vao m phuong tien: ";
            cin>>n;
            xt = new XeTai[n];
            oto = new XeOto[n];
            xm = new XeMay[n];
            for(int i = 0; i < n; i++){
            	do{
	                cout<<"\nChon 1 de pick xe tai: ";
	                cout<<"\nChon 2 de pick xe oto: ";
	                cout<<"\nChon 3 de pick xe may: ";
	                cout<<"\nBan chon: ";
	                cin>>chon[i];
	                if(chon[i]>3 || chon[i]<1)  
						cout<<"Ban nhap sai, nhap lai su lua chon cua ban !!\n";
                    }while(chon[i]>3 || chon[i]<1);
                    
                    switch (chon[i]){
                    case 1:
                        xt[i].NhapXeTai();
                        break;
                    case 2:
                        oto[i].NhapOto();
                        break;
                    case 3:
                        xm[i].NhapXeMay();
                        break;
                    default:
                    	return;
                        break;
                    }  
            }
        }

        void XUAT(){
            cout<<"\n\n\t===XUAT PHUONG TIEN===";
            for(int i = 0; i < n; i ++){
                cout<<"\n\nPhuong tien "<< i+1;
                if(chon[i] == 1){
                    xt[i].XuatXeTai();
                }
                else if(chon[i] == 2){
                    oto[i].XuatOto();
                }
                else if(chon[i] ==3){
                    xm[i].XuatXeMay();
                }
                else break;
            }
        }
        
    	void Tim(){
    		string SoM;
            int dem = 0;
    		cout<<"\n\n\t===TIM PHUONG TIEN===";
    		cout<<"\nNhap vao so may phuong tien muon tim";
    		getline(cin,SoM);
    		for(int i = 0; i < n; i++){
    			if(xt[i].GetSoMay() == SoM)
    				cout<<"Day la xe tai";
    				else if(SoM == oto[i].GetSoMay())
    					cout<<"Day la xe o to";
    					else if(SoM == xm[i].GetSoMay())
    						cout<<"Day la xe may";
                            else dem++;
			}
            if(dem > 0)
                cout<<"Khong tim ra phuong tien";
		}
};

int main(){
    QLPTGT a;
    a.NHAP();
    a.XUAT();
    a.Tim();
}