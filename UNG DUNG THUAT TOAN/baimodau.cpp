#include<iostream>

using namespace std;
int n = 6;
int arr[6] = { -2, 11, -4, 13, -5, 2 };
int dem=0;
void findSubArrayMaxWithIndices() {
    int best = INT_MIN, sum = 0;
    int best_start = 0, best_end = 0, current_start = 0;
    for (int i = 0; i < n; i++) {
        if (sum + arr[i] < arr[i]) {
            current_start = i;
            sum = arr[i];
        } else {
            sum += arr[i];
        }

        if (best < sum) {
            best = sum;
//            best_start = current_start;
//            best_end = i;
        }
        
    }
    cout <<"tong: " <<best << "\n";

//    for (int i =best_start; i <= best_end; i++ ){
//    	cout<<arr[i] <<" ";
//	}

}

int main() {
    
    findSubArrayMaxWithIndices();
}
