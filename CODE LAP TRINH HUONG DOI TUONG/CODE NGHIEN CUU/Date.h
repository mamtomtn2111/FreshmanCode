#include<iostream>
using namespace std;

class Date
{
private:
    int day, month, year;
public:
    Date(int d =1, int m = 1, int y = 1900)
    {
        day = d;
        month = m;
        year = y;
    }
    int getDay(){
        return day;
    }
    void setDay(int d)
    {
        day = d;
    }
    int getMonth()
    {
        return month;
    }
    void setMonth(int m)
    {
        month = m;
    }
    void setDate(int d, int m, int y)
    {
        day = d; month = m; year = y;
    }
    void setDate(Date d)
    {
        day = d.day; month = d.month; year = d.year;
    }
    Date getDate()
    {
        return Date(day, month, year);
    }
    void nhap()
    {
        cout<<"(Ngay, thang, nam:)";
        cin>>day>>month>>year;
    }
    void xuat()
    {
        cout<<day<<"-"<<month<<"-"<<year;
    }
};
