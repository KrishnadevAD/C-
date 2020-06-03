//multiple inheritance
#include<iostream>
using namespace std;
class student{
	private:
		int roll;
	
	public:
		
		void Getroll(){
			cout<<"Enter roll :"<<endl;
			cin>>roll;
		}
		void Displayroll(){
			cout<<"Roll is "<<roll;
			
		}
};
class exam: public student{
	protected:
		float sub1 , sub2;
	public:
	void GetMarks(){
		cout<<"enter subj 1  mark"<<endl;
		cin>>sub1;
		cout<<"enter subj 2 marks"<<endl;
		cin>>sub2;
	}
	void DisplayMarks(){
		cout<<"enter subj 1  mark"<<sub1<<endl;
		
		cout<<"enter subj 2 marks"<<sub2<<endl;
		
	}
class result : public exam{
	private:
		float total;
	public:
		void CalculateTotal(){
			total = sub1 + sub2;
		}
    void DisplayResult(){
    	cout<<"total is "<<total<<endl;
	}

		
};
int main(){
	
	return 0;
	
}
