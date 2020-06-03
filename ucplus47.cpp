#include<iostream>
#include<fstream>
using namespace std;
 int main(){
// 	by default it is in truncate mode 1 trucn and 2 append
 	ofstream o("krishnadev.txt");//open file stream =ofstream
 	o<<"krishnadev adhikari "<<endl;
 	o<<988894984<<endl;
 	
 	
 	o.close();
 	
 	 return 0;
 }
