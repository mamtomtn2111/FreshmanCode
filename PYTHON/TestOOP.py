list1 = [6, 99, 34, 56, 3, 1, 39]
list2 = []

a = int(input("Nhập vào số a: "))
print("List trước khi nhập: \t\t\t",list1)
for i in list1:
    if(i > a):
        list2.append(i)

for i in list2:
    list1.remove(i)

print(f"List sau khi xóa các phần tử lớn hơn {a}: ",list1)