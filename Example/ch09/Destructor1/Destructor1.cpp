#include <iostream>
using namespace std;
class Car
{
public:
	int Speed;
    Car()     // �غc��
	{ this->Speed = 70;	}
    ~Car()   // �Ѻc��
	{
		 cout << "���󵲧�!" ;
	}
};
int main()
{
    // ���ҭn�b DOS �U����A�~�i�H��ܪ���Ѻc�����浲�G 
 	Car BMW;
    cout << "�ثe�t��=" <<  BMW.Speed << endl; //�ثe�t��=70
    system("pause"); 
    return 0;
}
