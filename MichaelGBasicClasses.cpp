#include<iostream>
using namespace std;
class customer
{
	private: 
	double balance;
        double multiplier; //second private variable
	public:
	void setbal(double b)
{ balance = b; }
	double getbal()
	{ return balance; }
          void setmult(double m) //second public call to multiplier

{ multiplier = m ; }

         getmult()

{ return multiplier; }

};

 int main()
{
	double raise = 0;
 customer Mycust;
Mycust.setbal(25000);
cout<<Mycust.getbal()<<endl;
customer Mycust1;

Mycust1.setmult(2);

cout<<Mycust1.getmult()<<endl;
raise = Mycust.getbal() * Mycust1.getmult();
cout<<raise<<endl;
return 0;
}

