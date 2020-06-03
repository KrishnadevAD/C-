//array 
#include<iostream>
using namespace std;
int main(){
	
//	int a; //normal variable
//	int a[4]// array variable

 int a[5];
 a[0]=10;
 a[1]=20;
 a[2]=30;
 a[3]=40;
 a[4]=50;
// a[6]=70;
 
 
// cout <<"the value of a[1] is "<<a[1]<<endl;
// cout <<"the value of a[6] is "<<a[6];
//	
for( int i=0;i<5;i++)
cout<<"the value of a "<<i<<"is "<<a[i]<<endl;
	return 0;
}
