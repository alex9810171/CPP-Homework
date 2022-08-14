#include <iostream>
using namespace std;
int main()
{
    char s[100];
	char *p=s; 
    cout << "½Ð¿é¤J¦r¦ê s=";
	cin >> s;
	
	cout << "¦r¦ê­Ë¦L=";
	int n=strlen(s);
	for (int i=n;i>=0;i--) 
		cout << *(p+i) ;
	cout << endl;
	system("pause");
	return 0;
}
