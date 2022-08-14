#include <iostream>
using namespace std;
class Employee  //定義 Employee 類別
{
public:
	int Salary;
    void Show(int x)
    {
		cout << "Employee 本薪 = " << x << endl;
		cout << "--------------------------------" << endl;
    }
};

class Manager : public Employee  //定義 Manager 類別 繼承 Employee 類別
{
public :
	int Bonus;
    void Show(int x)  //覆寫 Show() 方法
    { cout << "Manager 薪資(本薪+獎金)=" << x + Bonus << endl; }
 };

int main()
{
    Employee Employee;
    Employee.Salary = 20000;        //本薪 20000元
    Employee.Show(Employee.Salary); //本薪=20000
    Manager Manager;
    Manager.Salary = 30000;     //本薪 30000元
    Manager.Bonus = 5000 ;      //獎金 5000元
    Manager.Show(Manager.Salary); //薪資(本薪+獎金)=35000
	system("pause");
	return 0;
}
