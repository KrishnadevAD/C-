//multiple inheritance 
#include<iostream>
using namespace std ;

	class AcademicActivities{
		protected:
			 int academicTotal ;
			 
	    public:
	    	void GetTotalAcademic(){
	    		cout<<"Enter Academic Total marks :"<<endl;
	    		cin>>academicTotal;
	    		
			}
			void DisplayacademicTotal(){
				cout<<"academic total marks   :"<<academicTotal<<endl;
				
			}
	};
	class ExtraActivities{
		protected:
			float disciplineMark;
			float sportMark ;
			
	    public :
		void ReadExtraMark(){
			cout<<"enter discipline mark"<<endl;
			cin>>disciplineMark;
			cout<<"enter sports marks"<<endl;
			cin>>sportMark;
			
		}	
		void DisplayExtraActivities(){
				cout<<"extra total marks  for discipline  :"<<disciplineMark<<endl;
			    	cout<<"extra total marks  for sport  :"<<sportMark<<endl;	
			}	
	};
	class result : public AcademicActivities ,  public ExtraActivities{
		private :
			float total ;
			
			public:
			void CalculateTotal(){
				total = academicTotal + disciplineMark + sportMark ;
			}
			public:
			void DisplayTotal(){
				cout<<"Total is "<<total<<endl;
			}
	};
	int main(){
		result r;
		 r.GetTotalAcademic();
		 r.ReadExtraMark();
		 r.CalculateTotal();
		 r.DisplayTotal();
	
	return 0;
}
