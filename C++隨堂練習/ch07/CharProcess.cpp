#include <iostream>  
using namespace std; 
int main()
{
	char a[12];
	char b[12];
	cout << "�п�J�r�� a�G" ;
    cin >> a;
    cout << "�п�J�r�� b�G" ;
    cin >> b;
    //�r����
	int n= strcmp(a,b); 
	cout << "�r�� a�Bb ��������G��:" << n << endl;  
    // �r��ۥ[ 
	cout << "�r�� a+b =" << strcat(a,b) << endl;  
	system("pause");
	return 0;
}
