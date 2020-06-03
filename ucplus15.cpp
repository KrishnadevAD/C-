////break and continue
//break -> terminate the loop
//continue->continues the loop
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=30;i++)
	{
		if(i==10){
			break;
		}
		cout<<"the value of i are  "<<i<<endl;
	}
//	for(int i=1;i<=30;i++)
//	{
//		if(i==10){
//			continue;
//		}
//		cout<<"the value of i are  "<<i<<endl;
//	}
//	
//	
	
	return 0;
}
