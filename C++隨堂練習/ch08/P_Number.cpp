#include <iostream>
using namespace std;
int main()
{
	int n;
	int *p=&n;
    cout << "�п�J�ܼ� n=";
    cin >> n;
	cout << "�ܼ� n ����=" << n << endl ;
	cout << "�ܼ� n ����}=" << &n <<endl;
	cout << "���� p ����=" << p <<endl;
	system("pause");
	return 0;
}
