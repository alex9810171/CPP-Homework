#include <iostream>
using namespace std;
float Temperature(int value)  // �w�q�禡 
{
	return (5.0/9.0) * (value -32);
}
int main()
{
	int value;
	float result;
    cout << "�п�J�ؤ�ū�:";
    cin >> value;
    result=Temperature(value); // �I�s�禡�öǦ^�ȵ��ܼ� result
	cout << "���ū�=" << result << endl;
 	system("pause");
	return 0;
}
