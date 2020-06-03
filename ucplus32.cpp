//single inheritance
#include<iostream>
using namespace std;
class person{
	protected:
	int id ;
	string name ;
		
	void ReadPersnData(){
		cout <<"enter person id:"<<endl;
		cin >>id;
		cout <<"enter name :"<<endl;
		cin >>name;
		}
		
		void DisplayPersonData(){
			cout<<"ID is "<<id<<endl<<"Name is "<<name<<endl;
			
		}
};
class Employee : public person{
	private:
	char post[100];
	double salary;
	public:
	void ReadEmployeeData(){
		ReadPersnData();
			cout<<"enter post :"<<endl;
			cin>>post;
			cout<<"enter salary :"<<endl;
			cin>>salary;
		}
		
		
		void DisplayEmployeeData(){
		     DisplayPersnData();
			cout<<"post is "<<post<<endl<<"Salary is "<<salary<<endl;
			
		}
	
};
using namespace std;
int main(){
	Employee e;
	e.ReadEmployeeData();
	e.DisplayEmployeeData();
	
	return 0;
}
