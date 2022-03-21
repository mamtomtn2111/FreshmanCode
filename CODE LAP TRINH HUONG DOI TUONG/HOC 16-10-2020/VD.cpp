#include<iostream>


using namespace std;
class mamal{
	public:
		void Move(){
				cout<<"\n Mamal moves 1 step";
		}
		
		void Move(int d){
			cout<<"\nMamal moves " <<d <<" steps";
		}
};
class cho : public mamal{
	public:
		void Move(){
			cout<<"\nDog moves 1 step";
		}
};
int main(){
	mamal m;
	cho n;
	m.Move();
	m.Move(9);
	n.Move();
}
