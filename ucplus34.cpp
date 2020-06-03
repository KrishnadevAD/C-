//multi level inheritance
#include<iostream>
using namespace std ;
class student{
	private:
		int roll ;
	public :
		void GetRoll(){
			cout<<"Enter the roll no :"<<endl;
			cin>> roll;
		}
		void DisplayRoll(){
			cout<<"Roll is "<< roll;
		}
		
};
class Exam : public student{
	protected :
		float sub1 , sub2 ;
	public:
		void GetMrks(){
			cout<<"enter sub1 mark :"<<endl;
			cin>>sub1;
			
			cout<<"enter sub2 mark :"<<endl;
			cin>>sub2;
			
		}
			void DisplayMrks(){
			cout<<"enter sub1 mark :"<<sub1<<endl;
			cout<<"enter sub2 mark :"<<sub2<<endl;
			
			
		}
};
class Result : public Exam{
	private:
		float total;
	public:
		void CalculateTotal(){
			total = sub1 + sub2 ;
			
		}
		void DisplayResult(){
			cout<<"ToTal is "<<total<<endl;
		}
};
 int main(){
 	Result r;
 	r.GetRoll();
 	r.GetMrks();
 	r.CalculateTotal();
 	cout<<"After Calculating result :"<<endl;
 	r.DisplayRoll();
 	r.DisplayMrks();
 	r.DisplayResult();
 	
 	return 0;
 }
