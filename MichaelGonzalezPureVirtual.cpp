#include<iostream>
using namespace std;

class Employee
{
	protected:
		int hours, weeks;
	public:
		virtual void pay()=0;
		void setPosition (int p1, int p2)
		{
		
		hours= p1;
		weeks= p2;
}
};


class salaried : public Employee
{
	public:
		virtual void pay()
		{
		cout<<"Your calculated salary is based on weeks:"<<weeks<<endl;
	
	}
};
class hourly: public Employee
{
	public:
		virtual void pay()
		{
			cout<<"Money calculated with weekly pay is $"<<weeks<<endl;
			cout<<" Your pay per hour is:"<<"$20"<<endl;
			cout<<"Calculated pay with hours $"<<hours<<endl;
			
			
		}
};


int main()
{

           const int employee_pay = 2;
           Employee  * EmployeeArray[] = { new salaried(), new hourly};
           
             int hours = 0;
			 int weeks = 0;
			 cout<<"enter hours worked:"<<endl;
			 cin>>hours;
			 cout<<"enter weeks worked:"<<endl;
			 cin>>weeks;
			 
             for(int k = 0; k <employee_pay; k++)
             {
                EmployeeArray[k]->setPosition(hours, weeks);
                weeks *= 700;
                hours *= 20;
                };
                
                
                for(int j = 0; j<employee_pay; j++)
                {
                    
                        EmployeeArray[j]->pay();
                     }
                system("pause");
                return 0;
	
}
