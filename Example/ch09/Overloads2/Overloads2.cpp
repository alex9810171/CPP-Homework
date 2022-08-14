#include <iostream>
using namespace std;
class Employee  //定義 Employee 類別
{
 public:
    void Show(int); //函式原型宣告  
	int Salary;
};
void Employee::Show(int x)  
{
	cout << "Employee 本薪 " <<  x << endl;
	cout << "--------------------------------" << endl;
}
	
class Manager:public Employee  //定義 Manager 類別 繼承 Employee 類別
{
public:
    void Show(int,int); //函式原型宣告 
	int Bonus;
};
void Manager::Show(int x , int y ) //多載 Show() 函式
{ cout << "Manager 薪資(本薪+獎金) = " <<  x + y << endl; }

int main()
{
    Employee obj1;
    obj1.Salary = 20000;     //本薪 20000元
    obj1.Show(obj1.Salary);  //本薪=20000
    Manager obj2;
    obj2.Salary = 30000;     //本薪 30000元
    obj2.Bonus = 5000 ;      //獎金 5000元
    obj2.Show(obj2.Salary, obj2.Bonus);  //薪資(本薪+獎金)=35000
	system("pause");
	return 0;
}
