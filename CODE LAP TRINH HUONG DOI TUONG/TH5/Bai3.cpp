#include<iostream>
#include<cmath>

using namespace std;

class Mang{
	private:
		int n;
		int A[];
	public:
		void NhapDL(){
			do{
				cout<<"Nhap vao n: ";
				cin>>n;
				if(n < 2 || n > 100)	cout<<"Sai pham vi, nhap lai n: ";
			}while(n < 2 || n> 100);
			for(int i = 0; i < n; i++){
				cout<<"\na["<<i+1<<"]= ";
				cin>>A[i];
			}
		}
		
		void HienThiDL(){
			for(int i = 0;i < n	; i++)
				cout<<"\na["<<i+1<<"]= "<<A[i];
		}
		
		bool KTNT(int n){
				if(n<2)
					return false;
				else				
				for(int i = 2; i <= sqrt(n); i++)
					if(n % i == 0){
						return false;
					}
					return true;
			}
				
		void LietKeNT(){
			for(int i = 0; i < n; i++)
				if(KTNT(A[i])==true){
					cout<<"\na["<<i<<"]= "<<A[i];
				}	
		}
		
		bool KTHH(int n){
		    int sum = 0;//khai bao biem sum
		    for(int i=1;i<=n/2;i++){
		        if(n%i==0) 
		            sum+=i;
		    }
			    if(sum==n) return true; // tra ve true
			    return false;
		}
		
		void LietKeHH(){
			cout<<"\n===PHAN TU SO HOAN HAO BAN VUA NHAP LA===";
			
			for(int i = 0; i < n; i++){
				if(KTHH(A[i])==1)
					cout<<"\na["<<i<<"]= "<<A[i];
			}
			return;
		}
		
		void SSG(){
			int temp;
			for(int i = 0; i < n; i++)
				for(int j = i + 1; j < n; j++)
					if(A[i]<A[j])
					{
						temp = A[i];
						A[i] = A[j];
						A[j] = temp;
					}
		}
		
		void SST(){
			int temp;
			for(int i = 0; i < n; i++)
				for(int j = i + 1; j < n; j++)
					if(A[i]>A[j])
					{
						temp = A[i];
						A[i] = A[j];
						A[j] = temp;
					}		
		}
};

int main(){
	Mang m;
	m.NhapDL();
	
	cout<<"\n===MANG BAN VUA NHAP LA:===";
	m.HienThiDL();
	m.LietKeHH();
	
	cout<<"\n===MANG SAP XEP GIAM:===";
	m.SSG();
	m.HienThiDL();
	
	cout<<"\n===MANG NGUYEN TO SAP XEP TANG:===";
	m.SST();
	m.LietKeNT();
	
}
