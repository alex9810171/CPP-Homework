#include <iostream>
using namespace std;
int main()
{
	int x,y,sum;
	int *px=&x;
	int *py=&y;
    cout << "請輸入變數 x=";
    cin >> *px;
    cout << "請輸入變數 y=";
    cin >> *py;
    sum=*px + *py;
	cout << *px << " + " << *py  << " = " << sum << endl ;
	system("pause");
	return 0;
}
