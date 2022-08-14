#include <iostream>
using namespace std;
class Employee  //定義 Employee 類別
{
public:
	int Salary;
    void Show(int x)
	{ cout << "本薪 = " << x << endl; }
};

class Manager : public Employee  //定義 Manager 類別 繼承 Employee 類別
{
public:
	int Bonus;
    void Show(int x, int y) //多載 Show() 方法
    {
		Employee::Show(x);   //呼叫父類別的 Show()方法
		cout << "獎金 = " << y << endl; //子類別中擴充新的功能
    }
};

int main()
{
    Employee obj1;
	cout << "Employee：" << endl;
    obj1.Salary = 20000;     //本薪 20000元
    obj1.Show(obj1.Salary); //本薪=20000
	cout << "----------------------------------" << endl;
    Manager obj2;
	cout << "Manager：" << endl;
    obj2.Salary = 30000; //本薪 30000元
    obj2.Bonus = 5000;   //獎金 5000元
    obj2.Show(obj2.Salary, obj2.Bonus);  //本資=30000,獎金=5000
	system("pause");
	return 0;
}
