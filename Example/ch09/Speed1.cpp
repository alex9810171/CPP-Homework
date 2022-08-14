#include <iostream>
using namespace std;
class Car
{
	public:
		int Speed; //宣告 Speed 欄位
};

int main()
{
    Car BMW;    //建立 BMW 物件
    BMW.Speed = 70;
	cout << "現在速度=" << BMW.Speed << endl; //現在速度=70
    BMW.Speed = 120;
	cout << "現在速度=" << BMW.Speed << endl; //現在速度=120
	system("pause");
    return 0;
}
