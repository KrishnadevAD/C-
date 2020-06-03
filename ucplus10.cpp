//to use the switch case
#include<iostream>
using namespace std;
int main(){
	int day;
	cout<<"enter the no of days "<<endl;
	cin>>day;
	switch(day){
		case 1:
			cout<<"day is sunday"<<endl;
			break;
		case 2:
			cout<<"day is monday"<<endl;
			
		case 3:
			cout<<"day is tuesday"<<endl;
			break;
		case 4:
			cout<<"day is wednesday"<<endl;
			break;
		case 5:
			cout<<"day is thursday"<<endl;
			break;
		case 6:
			cout<<"day is friday"<<endl;
		case 7:
			cout<<"day is Saturday"<<endl;
			break;
		default:
		cout<<"invalid day"<<endl;	
		
	}
	
	
	
	return 0;
	
}
