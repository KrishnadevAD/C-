// static
#include<iostream>
using namespace std ;
 class Dudhauli{
 	public :
 		int visitorID;
 		string  visitorName ;
 		 static int count ;
 		 
 		 Dudhauli(){
 		 	visitorID = '2';
 		 	visitorName = "Krishnadev adhikari";
 		 	count++;
 		 	
 		 	
		  }
		  public:
		 static int getTotalVisitor(){
		 	return count;
		 }
		
 };
 int Dudhauli::count = 0;
 int main(){
 	Dudhauli d;
 	
 	
 	Dudhauli du;
 	
 	
// 	cout<<d.Dudhauli();
 	cout<<d.getTotalVisitor();// 1st way
 	cout<<Dudhauli::getTotalVisitor(); // 2nd way
 	
 	
 	
 	 return 0 ;
 }
