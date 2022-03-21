n = int(input("Nhập số lượng phần tử: "))
a = []
print("Nhập vào phần tử:")
for i in range (n):
    add = int(input('a[%d]: '%i))
    a.append(add)

temp = 0
for i in range (n):
    for j in range (n):
        if(a[i] < a[j]):
            temp = a[i]
            a[i] = a[j] 
            a[j] = temp

Txt = open('d:\SAVE CODE\PYTHON\Test.txt',mode = 'w',encoding = "utf-8")
print("Xuất phần tử")
Txt.write('Xuất phần tử')
for i in range(n):
    print("Phần tử thứ",i,":",a[i])
    Txt.write('\nPhần tử thứ %d:'%i) ; Txt.write(' %d'%a[i])
s = int(input("Mời bạn nhập phần tử cần tìm kiếm vào: "))
Txt.write('\nPhần tử bạn vừa tìm kiếm là: ')
for i in range (n):
    if(s == a[i]):
        print("Phần tử thứ",i,":",a[i])
        Txt.write('\nPhần tử thứ %d:'%i) ; Txt.write(' %d'%a[i])
Txt.close()