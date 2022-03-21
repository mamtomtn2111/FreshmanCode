#include<stdio.h>
#define size 30

typedef struct{
	float do_dai;
	int dau, cuoi;
	int da_dung;
}canh;


void read_file(const char* file_name, canh a[][size], int *n){
	int tam, i, j;
	FILE *f;
	f=fopen("TSSSSS.txt", "w+");
	if (f=NULL){
		printf("Mo file co loi");
		return;
	}
	fscanf(f,"%d",n);// so' dinh? cua? do` thi. n
	
	for(i=0; i<*n; i++){
		for(j=0; j<*n; j++){
			fscanf(f,"%f", &a[i][j].do_dai);
			a[i][j].dau=i;
			a[i][j].cuoi=j;
		}
	}
	fclose(f);
}

void in_ma_tran(canh a[][size], int n){
	int i, j;
	printf("Ma tran trong so cua do thi\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)printf("%c%c=%8.2f", a[i][j].dau+65,a[i][j].cuoi+65,a[i][j].do_dai);
		printf("\n");
	}
}

void reset(canh a[][size], int n){
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j].da_dung=0;
}

int tim_gan_nhat(canh a[][size], int n, int i){
	int gan_nhat = 0;
	int j;
	float do_dai_nn=3.4028e+38;
	for(j=0; j<n; j++){
		if (i !=j && !a[i][j].da_dung &&a[i][j].do_dai<do_dai_nn){
			do_dai_nn = a[i][j].do_dai;
			gan_nhat=j;
		}
	}
	return gan_nhat;
}

int co_chu_trinh(canh PA[], int k, int ke_tiep){
	int i = 0, co_CT=0;
	while(i<k && !co_CT)
		if(ke_tiep==PA[i].dau) co_CT = 1;
		else i++;
	return co_CT;
}

void greedy(canh a[][size], int n, int truoc, canh PA[]){
	int dau_tien = truoc, ke_tiep, k=0;
	
	while(k<n-1){
		ke_tiep = tim_gan_nhat(a, n, truoc);
		a[truoc][ke_tiep].da_dung=a[ke_tiep][truoc].da_dung=1;
		if(!co_chu_trinh(PA,k,ke_tiep)){
			PA[k]= a[truoc][ke_tiep];
			truoc=ke_tiep;
			k++;
		}
	}
	PA[n-1]=a[ke_tiep][dau_tien]; 
}

void in_PA(canh PA[], int n){
	int i;
	float sum =0.0;
	printf("\nPhuong an tim duoc: \n");
	for(i=0; i<n; i++){
		sum+=PA[i].do_dai;
		printf("Canh %c%C=%8.2f\n", PA[i].dau+65,PA[i].cuoi+65,PA[i].do_dai);
	}
	printf("Tong do dai cac canh cua chu trinh = %8.2f\n", sum);
}


int main(){
	canh a[size][size];
	int n;
	read_file("D://SAVE CODE//UNG DUNG THUAT TOAN//TEST A DUNG//TSP.txt",a,&n);
	canh PA[n];
	char tpxp, yn;
	while(1){
		fflush(stdin);
		reset(a,n);
		printf("\nXuat phat tu tp nao? ", n-1+65);
		scanf("%c", &tpxp);
		if (tpxp>=97) tpxp-=32; //Doi thanh chu hoa
		greedy(a,n, tpxp-65,PA); // doi thanh so
		in_PA(PA,n);
		fflush(stdin);
		printf("\nTiep tuc Y/N?");
		scanf("%c", &yn);
		if(yn=='N' || yn=='n')
			break;
	}
	return 0;
}
