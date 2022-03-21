//De 2
//Y a
#define N 100
typedef int item;

struct List{
	item data[N];
	int size;
};

//y B
void isEmpty(List L){
	return List.size == 0;
}

void XoaCuoi(List &L){
	if(isEmpty(L))
		cout<<"RONG";
	else{
		L.data[L.size] = null;
		L.size --;
	}
}

//y C
float TBcong(List &L){
	int Tong;
	float TB;
	for(int i = 0; i < L.size; i++){
		Tong += L.data[i];
	}
	TB = Tong / L.size;
	return TB;
}
