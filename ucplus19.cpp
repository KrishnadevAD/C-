//multi dimesional arry 
#include<iostream>
using namespace std;
int main(){
	int a[2][3],i,j;
//	to take the value from the user
	 for(i=0;i<2;i++){
	 	for(j=0;j<3;j++){
	 		cout<<"enter the value for "<<i<<" "<<j<<"  :";
	 		cin>>a[i][j];
		 }
	 }
//	 to display the matrix  , inputed by the users
	 for(i=0;i<2;i++){
	 	for(j=0;j<3;j++){
//	 		cout<<"enter the value for "<<i<<" "<<j;
//	 		cin>>a[i][j];
           cout<<a[i][j]<<"\t";
		 }
		 cout<<endl;
	 }
	
	return 0;
}
