#include "Car.h"
#include <iostream>
using namespace std;
int main()
{
    Car BMW; // 這行宣告會執行預設建構式，因此不可省略預設建構式的建立
	cout << "執行 Car BMW 建立物件後，速度 =" <<  BMW.Speed << endl; //速度=70
    Car BMW2(95);  //設定 Speed=95
	cout << "執行 Car BMW2(95) 建立物件後，速度 = " << BMW2.Speed << endl; //速度=95
	system("pause");
    return 0;
}
