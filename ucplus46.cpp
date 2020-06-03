//exception handling
#include<iostream>
using namespace std;
 int main(){
 	int a , b;
 	 cout<<"enter the value of  a "<<endl;
 	 cin>>a;
 	 cout<<"enter the value of b"<<endl;
 	 cin>>b;
 	 try{
 	 	
 	 	if(b == 0){
 	 		throw(b);
		  }
	  int result = a/b;
 	 cout<<"result is "<<result;
 }
 catch(int i){
 	cout<<"Cannot divisible by Zero."<<endl;
 }
 	return 0;
 }
 
