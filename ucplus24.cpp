//class : blueprint for creating object
#include<iostream>
using namespace std;
class person{
//	data
public:
int id;
string name;
double height;

//	function
void getName(){
	cout<<"My  name is "<<name;
	
}
};
int main(){
	person p;
	p.id=1;
	p.name="krishnadev";
	p.height=5.4;
	p.getName();
	
	return 0;
}
