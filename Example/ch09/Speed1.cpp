#include <iostream>
using namespace std;
class Car
{
	public:
		int Speed; //�ŧi Speed ���
};

int main()
{
    Car BMW;    //�إ� BMW ����
    BMW.Speed = 70;
	cout << "�{�b�t��=" << BMW.Speed << endl; //�{�b�t��=70
    BMW.Speed = 120;
	cout << "�{�b�t��=" << BMW.Speed << endl; //�{�b�t��=120
	system("pause");
    return 0;
}
