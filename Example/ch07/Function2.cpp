#include <iostream>
using namespace std;
float Temperature(int value)  // �w�q�禡 
{
	return 1.8 * value +32 ;
}
int main()
{
	cout << "��� 10 ����ؤ�ū�=" << Temperature(10) << endl; // �I�s�禡
	cout << "---------------------\n";
	int value;
	float result;
    cout << "�п�J���ū�:";
    cin >> value;
    result=Temperature(value); // �I�s�禡�öǦ^�ȵ��ܼ� result
	cout << "�ؤ�ū�=" << result << endl;
 	system("pause");
	return 0;
}
