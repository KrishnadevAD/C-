//polymorphism and  pure virtual function
// generalization : specialization
#include<iostream>
using namespace std ;
class bike {
	public :
		 virtual  void start() = 0; //pure virtual funtion
//		 {
//		 	
//			 cout<<"bike started"<<endl;
//		 	
//		 }
		 virtual  void stop()= 0; //pure virtual funtion
//		 {
//		 	cout<<"bike stopped"<<endl;
//		 	
//		 }
};
class bulletBike : public bike {
	public :
	void start(){
		 	cout<<" bullet bike started"<<endl;
		 	
		 }
		 void stop(){
		 	cout<<" bullet bike stopped"<<endl;
		 	
		 }
	
};
class VRbike : public bike{
	public :
	void start(){
		 	cout<<" VRbike started"<<endl;
		 	
		 }
		 void stop(){
		 	cout<<"VRbike stopped"<<endl;
		 	
		 }
};
class heroBike : public bike{
	void start(){
		 	cout<<" hero bike started"<<endl;
		 	
		 }
		 void stop(){
		 	cout<<" hero bike stopped"<<endl;
		 	
		 }
};
using namespace std ;
 int main(){
// 	for simple method 
// 	bike b;
// 	bulletBike bb;
// 	VRbike vb;
// 	heroBike hb;
// 	b.start();
// 	b.stop();
// 	bb.start();
// 	bb.stop();
//    
//     for  unique method : by making base class pointer and derived class obj
//      bike *b =  new bulletBike();
    bike *b = new heroBike();
    // it you use the above  statement as  (bike *b = new VRbike()) than vr bike will start
      b->start();
      

 	
 	
 	return 0 ;
 }
