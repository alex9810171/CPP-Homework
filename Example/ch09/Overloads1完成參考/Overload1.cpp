#include "Car.h"
#include <iostream>
using namespace std;
int main()
{
	Car BMW;
	BMW.Speed = 75 ; //設定 Spped=75
	cout << "現在速度=" << BMW.Speed << endl; //現在速度=75
	BMW.Turbo();     // Speed 加 1
	//執行Turbo()方法後，速度=76
	cout << "執行Turbo()方法後，速度=" << BMW.Speed << endl; //現在速度=76
	BMW.Turbo(10);   // Speed 再加 10, 速度=86
    cout << "再執行Turbo(10)方法後，速度=" << BMW.Speed << endl; //現在速度=86
	system("pause");
    return 0;
}
