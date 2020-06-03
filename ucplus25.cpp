#include<iostream>
using namespace std;
class circle{
	public:
		double radius;
		const double  PI=3.14;
	
	int findArea(){
		double radius =  this->radius * this->radius * PI;
		return radius;
	}
		
};
int main(){
	circle c1,c2,c3;
	c1.radius =2.5;
	c2.radius = 9.08;
	c3.radius = 3.33;
	double radiusofc1 = c1.findArea();
	cout<<"the are of c1 is "<<radiusofc1;
	
	
	return 0;
}
