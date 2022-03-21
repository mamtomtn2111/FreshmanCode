#include <stdio.h>
 
int binarySearch(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2; // Tuong duong (l+r)/2 nhung uu diem tranh tran so khi l,r lon
 
    // Neu arr[mid] = x, tra ve ket qua va ket thuc
    if (arr[mid] == x)
      return mid;
 
    // Neu arr[mid] > x, thuc hien tim kiem nua trai cua mang
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);
 
    //Neu arr[mid] < x, thuc hien tim kiem nua phai cua mang
    return binarySearch(arr, mid + 1, r, x);
  }
 
  //Neu khong tim thay
  return -1;
}
 
int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x;
  
  printf("Mang da cho: ");
  for(int i = 0; i < n; i++){
  	printf("%d ",arr[i]);
  }
  printf("\nNhap vao so can tim: ");
  scanf("%d",&x);
  
  int result = binarySearch(arr, 0, n - 1, x);
  if (result == -1){
  	printf("%d xuat hien tai vi tri %d", x, result);
    printf("\nKhong the tim thay %d", x);
  }  
  else
    printf("%d xuat hien tai vi tri %d", x, result);
  return 0;
}
