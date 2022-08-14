#include <iostream>
//#include <string>
using namespace std;
class Student
{
private:
static int Total;   // 宣告靜態成員 Total
    string Name;
public:
    Student(string vName) // 建構式
    {
        Name = vName;
        Total += 1;
		cout << "學生姓名：" <<  Name << endl;
    }
    static void Show()   // 靜態方法
    {
		cout << "目前學生人數 = " << Total << " 人" << endl;
    }
};

int Student::Total=0;  // 必須在類別外部初始化 
int main()
{
	Student::Show();   //未宣告物件亦可使用 Student::Show()

    Student Amy("陳冠青");   //建立物件
	//可以使用 物件.靜態方法 即 Amy.Show()
	Amy.Show();

    Student Su("蘇玉惠");
	//也可以使用 類別::靜態方法 即 Student::Show()
	Student::Show();
	system("pause");
	return 0;
}
