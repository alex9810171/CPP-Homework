#include <iostream>
using namespace std;
class Employee  //�w�q Employee ���O
{
public:
	int Salary;
    void Show(int x)
    {
		cout << "Employee ���~ = " << x << endl;
		cout << "--------------------------------" << endl;
    }
};

class Manager : public Employee  //�w�q Manager ���O �~�� Employee ���O
{
public :
	int Bonus;
    void Show(int x)  //�мg Show() ��k
    { cout << "Manager �~��(���~+����)=" << x + Bonus << endl; }
 };

int main()
{
    Employee Employee;
    Employee.Salary = 20000;        //���~ 20000��
    Employee.Show(Employee.Salary); //���~=20000
    Manager Manager;
    Manager.Salary = 30000;     //���~ 30000��
    Manager.Bonus = 5000 ;      //���� 5000��
    Manager.Show(Manager.Salary); //�~��(���~+����)=35000
	system("pause");
	return 0;
}
