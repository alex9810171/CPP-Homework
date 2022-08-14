#include <iostream>
using namespace std;
void ShowNum(int n) // 不傳回返回值
{
	int i = 1;
    while (true)
	{
		if (i > n)
			return; // return 不可以省略
		cout << i << " ";
		i++;
	}
}
int main()
{
	int n;
	cout << "請輸入數字 n:";
	cin >> n;
	ShowNum(n);
	cout << endl;
	system("pause");
	return 0;
}
