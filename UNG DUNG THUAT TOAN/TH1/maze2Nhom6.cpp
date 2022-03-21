#include <iostream>
using namespace std;
#define N 5



//Chung ta co mot me cung dang ma tran: maze[5][5]
int maze[N][N] = {
    {0,1,0,1,1},
    {0,0,0,0,0},
    {1,0,1,0,1},
    {0,0,1,0,0},
    {1,0,0,1,0}
};

//Mot ma tran de luu cach giai
int solution[N][N];

//Ham in cach giai
void Output(int arr[N][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//Ham giai dung backtracking
int solvemaze(int r, int c)
{
    //Diem xuat phat luon la o vi tri 0,0
    //Diem ket thuc luon la o vi tri cuoi cung là 3,3
    //Khi o vi tri cuoi cung ket thuc recursive
    if((r==N-1) && (c==N-1))
    {
        solution[r][c] = 1;
        return 1;
    }
    //Dat if kiem tra xem co the di duoc khong?
    //Tat ca cac o phai nam trong khoang (0,N-1) nam ngoai khoang khong the di duoc
    //Kiem tra cach giai solution[r][c] da di chua?, neu nam trong cac duong da di thi lien tuc backtracking
    //kiem tra maze[r][c] xem co bi chan khong?
    if(r<N && c<N && solution[r][c] == 0 && maze[r][c] == 0)
    {
        //Thoa man dieu kien tren thi duoc di, gan 1
        solution[r][c] = 1;
        //di xuong
        if(solvemaze(r+1, c))
            return 1;
        //re phai
        if(solvemaze(r, c+1))
            return 1;
        //di len
        if(solvemaze(r-1, c))
            return 1;
        //re trai
        if(solvemaze(r, c-1))
            return 1;
        //re phia dong nam
        if(solvemaze(r+1, c+1))
        	return 1;
        //re phia dong bac
        if(solvemaze(r-1, c+1))
        	return 1;
        //Sua tiep cac huong
        //backtracking neu tat ca cac dieu kien sai het
        solution[r][c] = 0;
        return 0;
    }
    return 0;

}

int main()
{
    //Khoi tao cach giai: ma tran solution = 0
    int i,j;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            solution[i][j] = 0;
        }
    }
    //Trong ma tran da cho, 1 la diem chan khong the di, 0 la duong di
    cout<<"Maze khai bao:\n";
    Output(maze);
    
    //Trong ma tran solution, 1 la duong di ma thuat toan Backtracking da giai
    //Di vao dieu kien goi de quy
    if (solvemaze(0,0)){
    	cout<<"\nGiai phap: \n";
        Output(solution);
	}
    	
    else
        cout<<"Khong the giai me cung tren !";
    return 0;
}
