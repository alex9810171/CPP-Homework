#include <iostream>
using namespace std;
int main()
{
	int x,y,sum;
	int *px=&x;
	int *py=&y;
    cout << "�п�J�ܼ� x=";
    cin >> *px;
    cout << "�п�J�ܼ� y=";
    cin >> *py;
    sum=*px + *py;
	cout << *px << " + " << *py  << " = " << sum << endl ;
	system("pause");
	return 0;
}
