//WAP to find the area of the circle.
#include<iostream>
using namespace std;
#define PI 3.14;

int main(){
	double radius;
	cout<<"enter the radius of the circle"<<endl;
	cin>>radius;
	double area= radius*radius*PI;
	cout<<"the area of the circle is "<<area;
	
	
	return 0;
}

