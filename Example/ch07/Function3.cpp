#include "iostream"
using namespace std;

// �[�J�禡�쫬�ŧi
float Temperature(int );

int main()
{
	cout << "��� 10 ����ؤ�ū�=" << Temperature(10) << endl; // �I�s�禡
	system("pause");
	return 0;
}

float Temperature(int value)  // �w�q�禡 
{
	return 1.8 * value +32 ;
}
