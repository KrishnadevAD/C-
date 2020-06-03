// friend class 
#include<iostream>
using namespace std;
class tero ; 
class mero {
	private :
		 int m = 90 ;
		 
		friend tero; 
		 
	
};
class tero {
	mero mo;
	
	public:
	void teroFunction(){
	 cout<<"mero mo "<<mo.m<<endl;
	}
	
};
int main(){
	tero t;
	 t.teroFunction();
	
	return 0; 
}
