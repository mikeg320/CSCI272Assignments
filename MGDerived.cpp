
#include<iostream>
#include<string>
using namespace std;
class employee  
{
  private:
    
    double salary;
    public:
    string name;
    string getname()
     { return name; }
    double getsalary()
      { return salary; }
    
    void putname(string n)
     {  name = n;  }  
     void putsalary(double s)
     { salary = s; } 
     
      };

   class manager : public employee  
                  
   {
     public:    
     string staff;
     };
int main()
{
string emplyeename, mngrname;
double emplyeesal, mngrsal; 


employee employee1;
manager manager1;

 employee1.putname(emplyeename);
 manager1.staff=emplyeename;
cout<<"employee name:";
cin>>emplyeename;
employee1.putname(emplyeename);
 cout<<"Employee salary:"<<endl;
 cin>>emplyeesal;
 employee1.putsalary(emplyeesal);
	cout<<"Manager: "<<endl;
  cin>>mngrname;
 cout<<"manager salary: "<<endl;
 cin>>mngrsal;
 manager1.putname(mngrname); 
 manager1.putsalary(mngrsal);

 cout<<"employee "<<employee1.getname()<<" salary  "<<employee1.getsalary()
 <<endl;
  
 cout<<employee1.getname()<<" is a staff member of "<<manager1.getname()<<endl; 
 cout<<"Managers salary"<<manager1.getsalary()<<endl; 

 system("pause");
 return 0;
 
}
        
    
