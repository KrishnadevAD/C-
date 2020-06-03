//WAP  which add 2*3 matrix and display the addition.
#include<iostream>
using namespace std;
int main(){
	int a[2][3],b[2][3],sum[2][3];
// take the data for 2*3 matrix from the user
 cout<<"enter the data for the firs matrix A"<<endl;
 for(int i=0;i<2;i++){
 	for(int j=0;j<3;j++){
 		cout<<"enter the data for the matix a ["<<i<<"]["<<j<<"]"<<endl;
 		cin>>a[i][j];
	 }
 }
 cout<<"enter the data for the firs matrix B"<<endl;
 for(int i=0;i<2;i++){
 	for(int j=0;j<3;j++){
 		cout<<"enter the data for the matix b ["<<i<<"]["<<j<<"]"<<endl;
 		cin>>b[i][j];
	 }
 }
 for(int i=0;i<2;i++){
 	for(int j=0;j<3;j++){
 	sum[i][j]=a[i][j]+b[i][j];	
	 }
 }
 cout<<" the sum of the matrix  A and matrix B is :"<<endl;
 for(int i=0;i<2;i++){
 	for(int j=0;j<3;j++){
 		cout<<"["<<sum[i][j]<<"]"<<endl;
 		
	 }
	 cout<<endl;
 }
 
	
	return 0;
}
