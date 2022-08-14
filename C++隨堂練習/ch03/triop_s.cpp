#include <iostream>
using namespace std;
int main()
{
	int score;
	string s;  //儲存運算式結果 
    cout << "請輸入國文成績：";
    cin >> score;
    s = score>=60 ? "成績及格，恭喜！" : "成績不及格，再加油！"; //根據輸入成績判斷 
    cout << s << "\n"; //顯示結果
    system("pause");
    return 0;
}
