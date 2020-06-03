//  to calulate the employee salary 
#include<iostream>
using namespace std;
 class employee{
 	private:
 		int id;
 		string name ;
 		double salary;
 		public:
 	  employee(int id, string name , double salary){
 	  	this->id=id;
 	  	this->name = name;
 	  	this->salary = salary;
 	  	
	   }
	   double calcSalary(){
	   	return salary * 12 ;
	   	
	   }
 };
int main(){
	employee kridara( 1 , "krishnadev ", 60099);
	cout<< "the   annul salary of krishnadev is  " <<kridara.calcSalary();
	
	return 0;
	
}
