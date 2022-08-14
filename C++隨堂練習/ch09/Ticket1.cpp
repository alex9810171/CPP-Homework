#include <iostream>
using namespace std;
class Ticket
{
public:
	int Charge; 
	Ticket()     // 預設建構式         
	{  this->Charge = 100; 	}

	Ticket(int n)//建構式多載
	{ this->Charge =  n;  }
};
int main()
{
    Ticket Children; 
	cout << "小孩門票=" << Children.Charge << endl; 
    Ticket Man(200);
	cout << "大人門票=" << Man.Charge << endl;
	system("pause");
    return 0;
}
