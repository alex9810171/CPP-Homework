#include <iostream>
using namespace std;
int main()
{
	int n;
	int *p=&n;
    cout << "請輸入變數 n=";
    cin >> n;
	cout << "變數 n 的值=" << n << endl ;
	cout << "變數 n 的位址=" << &n <<endl;
	cout << "指標 p 的值=" << p <<endl;
	system("pause");
	return 0;
}
