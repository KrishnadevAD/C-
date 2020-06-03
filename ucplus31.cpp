//visibility mode/ piblic ,  private and protect
#include<iostream>
using namespace std;
 class rect{
 	private:
 		int l ;
 	protected:
 		int b;
 	public :
 		int h;
 	
	 void Calc(){
	 	l = 10 ;
	 	b = 90;
	 	h = 30;
	 }
	 
 };
 class cube: public rect{
 	public:
 		int cube;
 		
 	void Calculates(){
//	 	l = 10 ;
	 	b = 90;
	 	h = 30;
	 }
 	
 };
int main(){
	cube c;
	c.h =10
	c.cube;
	
	return 0 ;
}
