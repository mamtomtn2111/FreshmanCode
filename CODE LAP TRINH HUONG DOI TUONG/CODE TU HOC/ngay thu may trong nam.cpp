#include <iostream>

using namespace std;


// Hàm ki?m tra nam nhu?n
bool laNamNhuan(int nYear)
{
	if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0)
	{
		return true;
	}
	return false;

	// <=> return ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0);
}

// Hàm tr? v? s? ngày trong tháng thu?c nam cho tru?c
int tinhSoNgayTrongThang(int nMonth, int nYear)
{
	int nNumOfDays;

	switch (nMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: 
		nNumOfDays = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11: 
		nNumOfDays = 30;
		break;
	case 2:
		if (laNamNhuan(nYear))
		{
			nNumOfDays = 29;
		}
		else
		{
			nNumOfDays = 28;
		}
		break;
	}

	return nNumOfDays;
}

// Hàm ki?m tra ngày dd/mm/yyyy cho tru?c có ph?i là ngày h?p l?
bool laNgayHopLe(int nDay, int nMonth, int nYear)
{
	bool bResult = true; // Gi? s? ngày h?p l?

	// Ki?m tra nam
	if (!(nYear > 0 && nMonth))
	{
		bResult = false; // Ngày không còn h?p l? n?a!
	}

	// Ki?m tra tháng
	if (!(nMonth >= 1 && nMonth <= 12))
	{
		bResult = false; // Ngày không còn h?p l? n?a!
	}

	// Ki?m tra ngày
	if (!(nDay >= 1 && nDay <= tinhSoNgayTrongThang(nMonth, nYear)))
	{
		bResult = false; // Ngày không còn h?p l? n?a!
	}

	return bResult; // Tr? v? tr?ng thái cu?i cùng...
}
// Hàm tính và tr? v? s? th? t? ngày trong nam t? ngày dd/mm/yyyy cho tru?c (dã h?p l?)
int tinhSTTNgayTrongNam(int nDay, int nMonth, int nYear)
{
	int count = nDay;

	for (int i = 1; i <= nMonth - 1; i++)
	{
		count = count + tinhSoNgayTrongThang(i, nYear);
	}

	return count;
}

int main()
{
	int nDay, nMonth, nYear;
	cout << "Day: ";
	cin >> nDay;

	cout << "Month: ";
	cin >> nMonth;

	cout << "Year: ";
	cin >> nYear;

	if (laNgayHopLe(nDay, nMonth, nYear))
	{
		int nCount = tinhSTTNgayTrongNam(nDay, nMonth, nYear);
		cout << "Ngay thu: " << nCount << endl;
	}
	else
	{
		cout << "Ngay khong hop le." << endl;
	}

	return 0;
}
