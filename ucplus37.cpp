#include<iostream>
using namespace std ;
int main(){
	 int a = 10 ;
	   int *p ;
	   int **p2 ;
	   p2 = &p;
	   p = &a;
	   cout<<"value of a is  = "<<a<<endl;
//	   cout<<"value of &a ="<<&a<<endl;
	   cout<< "value of p ="<<*p<<endl;
	   cout<<"the value of p2 =  "<<p2;
	return 0;
}
