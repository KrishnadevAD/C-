#include<iostream>
using namespace std;
int main(){
	int day;
	cout<<"enter the number of the day  ";
	cin>>day;
	if(day==1){
		cout<<"the day is sunday.";
		
	}else if(day==2){
		cout<<"the day is monday.";
	
	}
	
	else if(day==3){
		cout<<"the day is tuesday.";
	
	}
	else if(day==4){
		cout<<"the day is wednesday.";
	
	}
	else if(day==5){
		cout<<"the day is thursday.";
	
	}
	else if(day==6){
		cout<<"the day is friday.";
	
	}
	else if(day==7){
		cout<<"the day is saturday.";
	
	}else{
		cout<<"the day is invalid ";
	}
	
	
	return 0;
}
