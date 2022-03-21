#include <iostream>
#include <iomanip>

using namespace std;

class Nguoi
{
	private:
		string CMND, hoTen;
		int ngaySinh;
	public:
		Nguoi() {} // Khởi tạo không đối số
		void nhap()
		{
			cout << "Nhap ho ten: ";
			getline(cin, hoTen);
			cout << "So CMND: ";
			getline(cin, CMND);
			cout << "Ngay sinh: ";
			cin >> ngaySinh;
		}
		void xuat()
		{
			cout
				<< setw(10) << hoTen
				<< setw(10) << CMND
				<< setw(10) << ngaySinh;
		}
		string getName() {
			return hoTen;
		}
};

class SinhVien: public Nguoi {
	private:
		string maSV, nganhHoc;
	public:
		SinhVien() {}
		void nhap() {
			Nguoi::nhap();
			cin.ignore();
			cout << "Nhap ma sinh vien: ";
			getline(cin, maSV);
			cout << "Nhap nganh hoc: ";
			getline(cin, nganhHoc);
		}
		void xuat() {
			Nguoi::xuat();
			cout
				<< setw(10) << maSV
				<< setw(10) << nganhHoc
				<< endl;
		}
        /**
         * Only return name
		string getName() {
			int i = Nguoi::getName().length() - 1;
			while (Nguoi::getName()[i] != ' ') i--;
			return &Nguoi::getName()[i+1];
		}
        */
};

class QLSV {
	private:
		int n;
		SinhVien *sv;
	public:
		QLSV() {}
		void nhap() {
			cout << "Nhap so sinh vien: ";
			cin >> n;
			cin.ignore();
			sv = new SinhVien[n];
			for (int i = 0; i < n; i++) {
				sv[i].nhap();
			}
		}
		void xuat() {
			for (int i = 0; i < n; i++)
			{
				sv[i].xuat();
			}
		}
		void timSV() {
			string ten;
			cout << "Nhap ten can tim: ";
			getline(cin, ten);
			for (int i = 0; i < n; i++) {
				if (sv[i].getName().compare(ten) == 0) {
					sv[i].xuat();
				}
			}
		}
};

int main() {
	QLSV a;
	a.nhap();
	a.timSV();
	return 0;
}
