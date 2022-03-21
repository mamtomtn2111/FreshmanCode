def NhapMang(n):
    a = []
    print("====NHẬP MẢNG====")
    for i in range(n):
        Nhap = int(input('Nhập vào a[%d]: '%i))
        a.append(Nhap)
    return a
def XuatMang(n,a):
    for i in range(n):
        print("A[",i,"] =", a[i])

def Increase(n,a):
    temp = 0
    for i in range(0,n-1):
        for j in range(1,n):
            if(a[i] > a[j]):
                temp = a[i]
                a[i] = a[j]
                a[j] = temp
    return a

def Prime(n):
    for i in range(2,n):
        if (n % i == 0):
            return False
        else: return True

def XuatPrime(n,a):
    for i in range(n):
        if(Prime(a[i]) == True):
            print("A[",i,"] =", a[i])

def Tim(n,a):
    s = int(input("Mời bạn nhập số cần tìm vào: "))
    print("===LIỆT KÊ PHẦN TỬ",s,"MÀ BẠN VỪA TÌM LÀ===")
    for i in range(n):
        if(a[i] == s):
            print("A[",i,"] =", a[i])

def Them(n,a):
    z = input("Bạn có muốn nhập thêm phần tử không ?: ")
    if(z == "CÓ" or z == "Có" or z == "có"):
        Nhap = int(input("Nhập vào phần tử mới : "))
        a.append(Nhap)
        n +=1
    else: 
        print("Bạn đã chọn không hoặc sai cú pháp, kết thúc chương trình")

    return n
    
from time import sleep

def main():
    n = int(input("Nhập vào số phần tử của mảng: "))
    a = NhapMang(n)
    sleep(1)
    print("===XUẤT MẢNG BẠN VỪA NHẬP LÀ====")
    XuatMang(n,a)
    sleep(1)
    print("===MẢNG SAU KHI SẮP XẾP TĂNG DẦN LÀ===")
    Increase(n,a)
    XuatMang(n,a)
    sleep(1)
    print("===MẢNG GỒM CÁC SỐ NGUYÊN TỐ SAU===")
    XuatPrime(n,a)
    #Tìm kiếm phần tử
    Tim(n,a)
    Them(n,a)
    print("===TỔNG CỘNG PHẦN TỬ HIỆN CÓ CỦA MẢNG LÀ===")
    XuatMang(n,a)
main()