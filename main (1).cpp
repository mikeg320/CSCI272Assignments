#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#include <iomanip>
using namespace std;


class Account
{
	private:
    string accountname;
    double salary;
    int records;

public:

    string getName()
    
	{return accountname;}

    void setName (string accountnamerecord)
  
    {accountname = accountnamerecord;}

    double getsalary()
    {
        return salary;
    }

    void setsalary (double salaryval)
    {
        salary = salaryval;
    }

    int getRecordsNum()
    {return records;}
    void setrecordsnum (int recNum)
    {records = recNum;}
};
int main ()
{
    string name;
    double salary;
    int record;
    int recsize = sizeof(string) + sizeof(double) + sizeof(int);

    fstream outAccount("account.dat", ios::in | ios::out);

    if (!outAccount)
    {
        cerr << "The file could not be opened" <<endl;
        exit (1);
    }

    Account account1 ;


    cout << "Please enter Record Number. (0 when you're finished.)" << endl;
    cin >> record;
    cout << endl;



    while (record > 0 && record <=20)
    {
        account1.setrecordsnum(record);

        cout << " Account Name" << setw(12)
             << " Account Salary" << endl;

        cin >> name >> setw(11) >> salary;
        cout << endl << endl;


        account1.setName (name);
        account1.setsalary (salary);

        outAccount.seekp ( (account1.getRecordsNum() -1) * sizeof (account1));


        outAccount.write (reinterpret_cast<char*> (&name), sizeof (string) );
       
        outAccount.write (reinterpret_cast<char*> (&salary), sizeof (double) );


        cin.clear();
        cin.ignore(20,'\n');
        cout << "Enter New Records Number. (0 when you're finished.)" << endl;
        cin >> record;
        
    }
    
	outAccount.close();
	 
	/* string name1;
    double salary1;
    int record1;
    int recsize1 = sizeof(string) + sizeof(double) + sizeof(int);

	int recNum1;
	*/
	 ifstream outfile("account.dat", ios::app | ios::binary);
	 if (!outfile)
    {
        cerr << "The file could not be opened" <<endl;
        exit (1);
    }
   Account account2;
   cout<<"enter a record number to read (0 to end)."<<endl;
   cin>>record;
   while(record >0 && record <= 20)
   {

    account2.setrecordsnum(record);


        
        outfile.seekg ( (account2.getRecordsNum() -1) * sizeof (account2));
  outfile.read((char*)&account2, sizeof(account2));
  outfile.read (reinterpret_cast<char*> (&name), sizeof (string) );
 outfile.read (reinterpret_cast<char*> (&salary), sizeof (double) );
 
 cout<<"Name: "<<account2.getName()<<" "<<"Salary: "<<account2.getsalary()<<endl;
        cin.clear();
        cin.ignore(20,'\n');
        
        cout << "Enter New Record Number to read. (0 when done)"<<endl;
      
        
        
        cin >> record;
        
	}
	system("pause");
	return 0;
}
	
