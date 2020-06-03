//hierrirchical inheritance
#include<iostream>
using namespace std ;
class person{
	protected:
	int id ;
	string name ;
	public:	
	void ReadPersnData(){
		cout <<"enter person id:"<<endl;
		cin >>id;
		cout <<"enter name :"<<endl;
		cin >>name;
		}
		public:
		void DisplayPersonData(){
			cout<<"ID is "<<id<<endl<<"Name is "<<name<<endl;
			
		}
};
 class Student : public person{
 	private :
 		int roll ;
 	public :
 		void GetRoll(){
 			cout<<"enter the roll no  :"<<endl;
 			cin>>roll;
		 }
		void DisplayRoll(){
			cout<<"Roll is "<<roll;
		}
 	
 };
 class Employee : public person{
	private:
	char post[100];
	double salary;
	public:
	void ReadEmployeeData(){
//		ReadPersnData();
			cout<<"enter post :"<<endl;
			cin>>post;
			cout<<"enter salary :"<<endl;
			cin>>salary;
		}
		
		
		void DisplayEmployeeData(){
//		     DisplayPersnData();
			cout<<"post is "<<post<<endl<<"Salary is "<<salary<<endl;
			
		}
	
};

int main(){
	Student s1;
	s1.ReadPersnData();
	s1.GetRoll();
	s1.DisplayPersonData();
	s1.DisplayRoll();
	return 0;
}
