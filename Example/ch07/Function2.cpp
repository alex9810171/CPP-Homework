#include <iostream>
using namespace std;
float Temperature(int value)  // 定義函式 
{
	return 1.8 * value +32 ;
}
int main()
{
	cout << "攝氏 10 度轉華氏溫度=" << Temperature(10) << endl; // 呼叫函式
	cout << "---------------------\n";
	int value;
	float result;
    cout << "請輸入攝氏溫度:";
    cin >> value;
    result=Temperature(value); // 呼叫函式並傳回值給變數 result
	cout << "華氏溫度=" << result << endl;
 	system("pause");
	return 0;
}
