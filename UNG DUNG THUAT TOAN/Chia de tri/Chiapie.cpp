#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
double a[10001], pi = acos(-1.0);
int f,n;
int dao(double size){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += int(a[i]/size);
	}
	if(sum >= f+1)
		return 1;
	else 
		return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
//cout<<"----------------------------------------------------------"<<endl;
		double low,high,mid,ans=-1,v=0;//,max=-1
		scanf("%d%d", &n,&f);
		for(int i=1; i<
		n; i++){
			scanf("%lf",&a[i]);
			a[i]=a[i]*a[i]*pi;
			v+=a[i];
			//if(a[i]>max) max = a[i];
		}
		low=0;
		high=v/(f+1);
		while(high-low>0.000001){
			mid=(high+low)/2;
//cout<<"low="<<low<<" mid="<<mid<<" high="<<high<<endl<<"dao(mid)="<<dao(mid)<<" f+1="<<f+1<<endl;
			if(dao(mid)){
				low=mid;
				//if(mid>ans){ans=mid;}
			}
			else high=mid;
//cout<<"ans="<<ans<<endl<<endl;
		}
		printf("%.4lf\n",mid);	
	}
	return 0;
}
