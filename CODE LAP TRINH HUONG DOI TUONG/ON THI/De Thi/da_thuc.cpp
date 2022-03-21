#include <iostream>

using namespace std;

class DaThuc
{
    private:
        float *a;
        int n;
    public:
        DaThuc(int n1) {
            n = n1;
            a = new float[n+1];
        }
        DaThuc(float c[], int n1) {
            n = n1;
            a = new float[n+1];
            for (int i = 0; i <= n; i++) {
                a[i] = c[i];
            }
        }

        float getArr(int i) {
            return a[i];
        }
        int getSize() {
            return n;
        }

        friend ostream &operator << (ostream &os, const DaThuc &d) {
            cout << d.a[0];
            for (int i = 1; i <= d.n; i++) {
                os << " + (" << d.a[i] << ")x^" << i;
            }
            return os;
        }

        friend istream &operator >> (istream &is, DaThuc &d) {
            for (int i = 0; i <= d.n; ++i) {
                cout << "Nhap x^" << i <<" = ";
                is >> d.a[i];
            }
            return is;
        }

        DaThuc operator +(DaThuc d) {
            int size = (n > d.getSize()) ? n : d.getSize();

            float c[size] = {0};

            for (int i = 0; i <= n; i++) {
                c[i] = a[i];
            }

            for (int i = 0; i <= d.getSize(); i++) {
                c[i] += d.getArr(i);
            }

            return DaThuc(c, size);
        }

        DaThuc operator -(DaThuc d) {
            int size = (n > d.getSize()) ? n : d.getSize();

            float c[size] = {0};

            for (int i = 0; i <= n ; i++) {
                c[i] = a[i];
            }

            for (int i = 0; i <= size; i++) {
                c[i] -= d.getArr(i);
            }

            return DaThuc(c, size);
        }
};

int main() {
    DaThuc a(2), b(2);
    cin >> a;
    cin >> b;
    cout << a << endl;
	cout << b << endl;
    DaThuc c = a - b;
    cout << c;

    return 0;
}
