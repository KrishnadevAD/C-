#include<iostream>
#include<fstream>
using namespace std;
 int main(){
 	
 	
 	ifstream i("krishnadev.txt");
 	
 	if(!i)cout<<"no file found";
 	string name ;
 	 int no;
 	 i>>name;
 	 i>>no;
 	 i.close();
 	 cout<<"name :"<<name<<endl<<" phone  "<<no;
 	 
 	 
 	
 	
 	return 0;
 }
