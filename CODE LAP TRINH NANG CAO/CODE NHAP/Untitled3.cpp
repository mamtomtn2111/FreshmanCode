#include <stdio.h>
struct hocsinh {
	int maso;
	char hoten[30];
	char ngaysinh[30];
	char diachi[30];
	char gioitinh[30];
	int trungbinh;
};
void Nhap(int n, hocsinh &hs){
	fflush(stdin);
	printf("\nNhap Ma so hoc sinh: ");
	scanf("%d", &hs.maso);
	fflush(stdin);
	printf("\nHo va ten hoc sinh la: ");
	gets(hs.hoten);
	fflush(stdin);
	printf("\nNgay thang nam sinh la: ");
	gets(hs.ngaysinh);
	fflush(stdin);
	printf("\nDia chi hoc sinh la: ");
	gets(hs.diachi);
	fflush(stdin);
	printf("\nGioi tinh hoc sinh la: ");
	gets(hs.gioitinh);
	fflush(stdin);
	printf("\nDiem trung binh la: ");
	scanf("%d", &hs.trungbinh);
}
void Sapxep(struct hocsinh hs[], int n){
	//int temp = 0;
	struct hocsinh temp;
	for(int i = 0; i < n-1; i ++){
		for(int j = i; j < i; j++){
			if(hs[i].trungbinh > hs[j].trungbinh){
				temp = hs[i];
				hs[i] = hs[j];
				hs[j] = temp;
			}
		}
	}
}
void Inra(int n, hocsinh hs[]){
	FILE *f = fopen("hocsinh.txt", "w");
	for(int i = 0; i < n; i++){
		printf("\nMa so hoc sinh: ");
		printf("%s", hs[i].maso);
		fprintf(f, "%s", hs[i].maso);
		printf("\nHo va ten hoc sinh la: ");
		printf("%s", hs[i].hoten);
		fprintf(f, "%s", hs[i].hoten);
		printf("\nNgay thang nam sinh la: ");
		printf("%s", hs[i].ngaysinh);
		fprintf(f, "%s", hs[i].ngaysinh);
		printf("\nDia chi hoc sinh la: ");
		printf("%s", hs[i].diachi);
		fprintf(f, "%s", hs[i].diachi);	
		printf("\nGioi tinh hoc sinh la: ");
		printf("%s", hs[i].gioitinh);
		fprintf(f, "%s", hs[i].gioitinh);
		printf("\nDiem trung binh la: ");
		printf("%d", hs[i].trungbinh);
		fprintf(f, "%d", hs[i].trungbinh);	
	}
}
