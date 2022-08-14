#include "iostream"
#include "string"  // 宣告字串，必須此檔頭  
using namespace std;
void PassWord(char *UserPass)
{
     //字串比較
	int n= strcmp(UserPass,"1234"); // UserPass=="1234"
	if (n==0)
		cout << "歡迎光臨!" << endl;
	else
		cout << "密碼錯誤!" << endl;
}
int main()
{
	char Pass[6];
    cout << "請輸入密碼:";
    cin >> Pass;
    PassWord(Pass); // 呼叫函式
	system("pause");
	return 0;
}
