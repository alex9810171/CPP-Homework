#include <iostream>  
using namespace std; 
int main()
{
	char a[12];
	char b[12];
	cout << "請輸入字串 a：" ;
    cin >> a;
    cout << "請輸入字串 b：" ;
    cin >> b;
    //字串比較
	int n= strcmp(a,b); 
	cout << "字串 a、b 比較的結果為:" << n << endl;  
    // 字串相加 
	cout << "字串 a+b =" << strcat(a,b) << endl;  
	system("pause");
	return 0;
}
