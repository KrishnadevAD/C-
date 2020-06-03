#include<iostream>
using namespace std ;
 class basicHelicopter{
 	public :
 		void fly(){
 			 cout<<"Basic fly"<<endl;
 			 
		 }
		  virtual void land(){
		 	cout<<"basic land "<<endl;
		 }
 		
 	
 };
 class advanceHelicopter : public basicHelicopter{
 	public :
 		void runAC(){
 			cout<<"Advance AC"<<endl;
		 }
 };
 int main(){
 	advanceHelicopter a;
 	a.fly();
 	a.land();
 	a.runAC();
 	basicHelicopter *p = new advanceHelicopter;
 	p->land();
 	
 	
 	return 0 ;
 	
 }
