//Nhóm 6
//Tran Nguyen Dung
//Nguyen Vu Hai
//Le Tien Thanh

#include<iostream>

using namespace std;


                    
void Output(int arr[9][9]){
	for(int i = 0;i < 9; i++){
		for(int j = 0; j < 9; j ++)
			cout<<arr[i][j]<<" ";
		cout<<"\n";
	}
}

bool Checking(int grid[9][9], int row, int col, int num){
	//Check dong xem co bi trung mot so nao khong?
	//Neu trung thi tra ve False
	//Neu khong trung thi True
	for(int i = 0; i < 9; i ++){
		if(grid[row][i] == num)
			return false;
	}return true;
	
	//Check cot xem co bi trung mot so nao khong?
	//Neu trung thi tra ve False
	//Neu khong trung thi True
	for(int i = 0; i < 9;i++){
		if(grid[i][col] == num){
			return false;
		}
	}return true;
	
	//Check ma tran 3x3 trong khu vuc so dang xet
	//startrow la bien lay dong bat dau cua ma tran 3x3 dang chua num
	//startcol la bien lay cot bat dau cua ma tran 3x3 dang chua num
	int StartRow = row - row%3,  StartCol = col - col % 3;
	for(int i = 0; i < 3; i ++){
		for(int j =0; j < 3; j++)
			if(grid [i + StartRow][j + StartCol] == num)
				return false;
	}return true;
}

bool SolveSudoku(int grid[9][9], int row, int col){
	//Kiem tra xem da backtracking den dong thu 8
	//Va cot thu 9 chua, return True de tranh
	//Backtracking thua
	if(row == 9 - 1 && col == 9)
		return true;
		
	//Kiem tra xem co dang o cot 9 hay khong
	//Neu o cot 9 thi doi sang dong khac va
	//bat dau cot moi = 0
	if(col == 9){
		row ++;
		col = 0;
	}
	
	//Kiem tra neu vi tri hien tai cua sudoku
	//co gia tri ma > 0 thi bo qua, check den o tiep theo
	if(grid[row][col] > 0)
		return SolveSudoku(grid, row, col + 1);
	
	for(int num = 1; num <= 9; num++){
		//Buoc kiem tra, neu True se tien hanh gan bien
		if(Checking(grid, row, col, num) == true){
			grid[row][col] = num;
			//Check o tiep theo
			if(SolveSudoku(grid, row, col + 1) == true)
				return true;
		}
		//Neu check sai, xoa so hien tai
		//va se di toi lan check so ke tiep
		//voi cac num khac
		grid[row][col] = 0;
	}
	return false;
}

int main(){
	//0 nghia la trong o do khong co so
	int grid[9][9] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                    	{ 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                    	{ 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                    	{ 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                    	{ 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                    	{ 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                    	{ 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                    	{ 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                    	{ 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
    cout<<"Sodoku ban dau"<<endl;   	
    Output(grid);
    cout<<endl;
    if(SolveSudoku(grid, 0, 0)){
    	cout<<"Sodoku sau khi giai:"<<endl;
    	Output(grid);
	}	
    else 
		cout<<"Khong the giai duoc sudoku tren";
    
    return 0;
                    
}
