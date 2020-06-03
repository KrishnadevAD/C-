
//to  input the marks of the 10 subjects and print the average of it
#include<iostream>
using namespace std;
int main(){
	int num=10;
	int marks[num],sum=0;
//	for storing the marks
for(int i=0;i<num;i++){
	cout<<"enter the marks of "<<i+1<<endl;
	cin>>marks[i];
	
}
for(int i=0;i<num;i++){
	sum=sum+marks[i];
}
int avg=sum/num;
cout<<"the average of the marks is "<<avg<<endl;
	
	return 0;
}
