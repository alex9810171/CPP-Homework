#include "Car.h"
#include <iostream>
using namespace std;
int main()
{
	Car BMW;
	BMW.Speed = 75 ; //�]�w Spped=75
	cout << "�{�b�t��=" << BMW.Speed << endl; //�{�b�t��=75
	BMW.Turbo();     // Speed �[ 1
	//����Turbo()��k��A�t��=76
	cout << "����Turbo()��k��A�t��=" << BMW.Speed << endl; //�{�b�t��=76
	BMW.Turbo(10);   // Speed �A�[ 10, �t��=86
    cout << "�A����Turbo(10)��k��A�t��=" << BMW.Speed << endl; //�{�b�t��=86
	system("pause");
    return 0;
}
