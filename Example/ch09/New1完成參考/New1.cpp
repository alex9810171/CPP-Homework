#include "Car.h"
#include <iostream>
using namespace std;
int main()
{
    Car BMW; // �o��ŧi�|����w�]�غc���A�]�����i�ٲ��w�]�غc�����إ�
	cout << "���� Car BMW �إߪ����A�t�� =" <<  BMW.Speed << endl; //�t��=70
    Car BMW2(95);  //�]�w Speed=95
	cout << "���� Car BMW2(95) �إߪ����A�t�� = " << BMW2.Speed << endl; //�t��=95
	system("pause");
    return 0;
}
