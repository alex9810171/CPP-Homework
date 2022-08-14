#include <iostream>
using namespace std;
float Temperature(int value)  // 定義函式 
{
	return (5.0/9.0) * (value -32);
}
int main()
{
	int value;
	float result;
    cout << "請輸入華氏溫度:";
    cin >> value;
    result=Temperature(value); // 呼叫函式並傳回值給變數 result
	cout << "攝氏溫度=" << result << endl;
 	system("pause");
	return 0;
}
