#include<iostream>
using namespace std;
int main(){
	int num,i,j,k;
	cout<< "Enter Number : ";
	cin>>num;
	for(i =1 ; i<=5 ;i++){
		for(j=1 ; j<=5 ; j++){
			cout<<" ";
		}
		for(k = 5 ; k>=i ; k--){
			cout<<k;
		}
	cout<<endl;
	}
}
