#include "iostream"
using namespace std;

// 加入函式原型宣告
float Temperature(int );

int main()
{
	cout << "攝氏 10 度轉華氏溫度=" << Temperature(10) << endl; // 呼叫函式
	system("pause");
	return 0;
}

float Temperature(int value)  // 定義函式 
{
	return 1.8 * value +32 ;
}
