#include <iostream>
using namespace std;
class Employee  //�w�q Employee ���O
{
public:
	int Salary;
    void Show(int x)
	{ cout << "���~ = " << x << endl; }
};

class Manager : public Employee  //�w�q Manager ���O �~�� Employee ���O
{
public:
	int Bonus;
    void Show(int x, int y) //�h�� Show() ��k
    {
		Employee::Show(x);   //�I�s�����O�� Show()��k
		cout << "���� = " << y << endl; //�l���O���X�R�s���\��
    }
};

int main()
{
    Employee obj1;
	cout << "Employee�G" << endl;
    obj1.Salary = 20000;     //���~ 20000��
    obj1.Show(obj1.Salary); //���~=20000
	cout << "----------------------------------" << endl;
    Manager obj2;
	cout << "Manager�G" << endl;
    obj2.Salary = 30000; //���~ 30000��
    obj2.Bonus = 5000;   //���� 5000��
    obj2.Show(obj2.Salary, obj2.Bonus);  //����=30000,����=5000
	system("pause");
	return 0;
}
