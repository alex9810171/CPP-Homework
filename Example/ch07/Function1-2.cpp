#include "iostream"
#include "string"  // �ŧi�r��A���������Y  
using namespace std;
void PassWord(char *UserPass)
{
     //�r����
	int n= strcmp(UserPass,"1234"); // UserPass=="1234"
	if (n==0)
		cout << "�w����{!" << endl;
	else
		cout << "�K�X���~!" << endl;
}
int main()
{
	char Pass[6];
    cout << "�п�J�K�X:";
    cin >> Pass;
    PassWord(Pass); // �I�s�禡
	system("pause");
	return 0;
}
