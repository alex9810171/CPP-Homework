#include <iostream>
using namespace std;
class Car
{
    public:
	int Speed;      //�w�q Speed ���
	void Turbo()    // Turbo ��k�N Speed �ݩʥ[ 1
	{
		this->Speed = this->Speed + 1; //this �N�����O�����A�Y Car ���O
	}
};
int main()
{
	Car BMW;
	BMW.Speed = 70 ; //�]�w Spped=70
	cout << "�{�b�t��=" << BMW.Speed << endl; //�{�b�t��=70
	BMW.Turbo();     // Speed �[ 1
	cout << "�{�b�t��=" << BMW.Speed << endl; //�{�b�t��=71
	system("pause");
    return 0;
}
