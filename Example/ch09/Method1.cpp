#include <iostream>
using namespace std;
class Car
{
    public:
	int Speed;      //定義 Speed 欄位
	void Turbo()    // Turbo 方法將 Speed 屬性加 1
	{
		this->Speed = this->Speed + 1; //this 代表類別本身，即 Car 類別
	}
};
int main()
{
	Car BMW;
	BMW.Speed = 70 ; //設定 Spped=70
	cout << "現在速度=" << BMW.Speed << endl; //現在速度=70
	BMW.Turbo();     // Speed 加 1
	cout << "現在速度=" << BMW.Speed << endl; //現在速度=71
	system("pause");
    return 0;
}
