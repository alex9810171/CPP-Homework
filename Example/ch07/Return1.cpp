#include <iostream>
using namespace std;
void ShowNum(int n) // ���Ǧ^��^��
{
	int i = 1;
    while (true)
	{
		if (i > n)
			return; // return ���i�H�ٲ�
		cout << i << " ";
		i++;
	}
}
int main()
{
	int n;
	cout << "�п�J�Ʀr n:";
	cin >> n;
	ShowNum(n);
	cout << endl;
	system("pause");
	return 0;
}
