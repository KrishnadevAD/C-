// array  with the string value
#include<iostream>
using namespace std;
int main(){
	
	string name[10];
//	for to store the names accorfing the input by users
for(int i=0;i<10;i++){
	cout<<"enter the name of the students"<<i<<endl;
	cin>>name[i];
	
}
//for to print the names , whi is inputed by the users
for (int i=0;i<10;i++){
	cout<<" The value of name"<<i<<"is "<<name[i]<<endl;
}	
	
	return 0;
	
}
