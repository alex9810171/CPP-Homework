#include <iostream>
using namespace std;
double Factorial(double n) 
{
	if (n == 0) //��n=0�A�Ǧ^ ��^�� 1�A�õ������j�I�s
		return 1;
	else
		return n * Factorial(n - 1); //���j�I�s
}
int main()
{
	double n,Total;
	cout << "�п�J�Ʀr n:";
	cin >> n;
	Total = Factorial(n); // �D n!
	cout << n << "!=" << Total << endl;
	system("pause");
	return 0;
}
