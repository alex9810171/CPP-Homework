#include <iostream>
using namespace std;
class Ticket
{
public:
	int Charge; 
	Ticket()     // �w�]�غc��         
	{  this->Charge = 100; 	}

	Ticket(int n)//�غc���h��
	{ this->Charge =  n;  }
};
int main()
{
    Ticket Children; 
	cout << "�p�Ī���=" << Children.Charge << endl; 
    Ticket Man(200);
	cout << "�j�H����=" << Man.Charge << endl;
	system("pause");
    return 0;
}
