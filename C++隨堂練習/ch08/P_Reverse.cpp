#include <iostream>
using namespace std;
int main()
{
    char s[100];
	char *p=s; 
    cout << "�п�J�r�� s=";
	cin >> s;
	
	cout << "�r��˦L=";
	int n=strlen(s);
	for (int i=n;i>=0;i--) 
		cout << *(p+i) ;
	cout << endl;
	system("pause");
	return 0;
}
