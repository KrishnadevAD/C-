//inheritance
#include<iostream>
using namespace std ;
class Rect{
	public:
		int len;
		int bre;
		
		
		   
		   Rect(){
		   	cout<<"this is the constructor of rec"<<endl;
		   }
		   Rect(int l , int b){
		   	len = l;
		   	bre = b;
		   }
};
class Cube : public Rect{
	public:
		int hei;
		
		Cube(){
			cout<<"this is the constructor of the cube"<<endl;
		}
		Cube(int h , int l , int b):Rect(l,b){
			hei = h;
//		cout<<"the cube  is "<<"len * bre * hei" <<endl;
		}
		void CubeCalculate(){
		
		cout<<"the cube  is "<<(len * bre * hei) <<endl;
	}
};

int main(){
	Cube cb(13 , 28 , 78);
	cb.CubeCalculate();
	
	
	return 0;
	
}
