#include <iostream>
using namespace std;
class Employee  //�w�q Employee ���O
{
 public:
    void Show(int); //�禡�쫬�ŧi  
	int Salary;
};
void Employee::Show(int x)  
{
	cout << "Employee ���~ " <<  x << endl;
	cout << "--------------------------------" << endl;
}
	
class Manager:public Employee  //�w�q Manager ���O �~�� Employee ���O
{
public:
    void Show(int,int); //�禡�쫬�ŧi 
	int Bonus;
};
void Manager::Show(int x , int y ) //�h�� Show() �禡
{ cout << "Manager �~��(���~+����) = " <<  x + y << endl; }

int main()
{
    Employee obj1;
    obj1.Salary = 20000;     //���~ 20000��
    obj1.Show(obj1.Salary);  //���~=20000
    Manager obj2;
    obj2.Salary = 30000;     //���~ 30000��
    obj2.Bonus = 5000 ;      //���� 5000��
    obj2.Show(obj2.Salary, obj2.Bonus);  //�~��(���~+����)=35000
	system("pause");
	return 0;
}
