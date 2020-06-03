#include<iostream>
using namespace std;
class country {
	 private :
	 	int countryID;
	 	string countryName;
	 	
	 	public:
	 		country(){
			 
	 		countryID = 8989;
	 		countryName = "Nepal";
	 	}
	 	friend 	void printCountry();
	 };
	
	void printCountry(){
		country c1;
		cout<<"ID   : "<<c1.countryID<< "name : "<<c1.countryName<<endl;
	} 	


int main(){
	
	printCountry();
	
	 return 0;
}
