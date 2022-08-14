#include <iostream>
using namespace std;
double Factorial(double n) 
{
	if (n == 0) //當n=0，傳回 返回值 1，並結束遞迴呼叫
		return 1;
	else
		return n * Factorial(n - 1); //遞迴呼叫
}
int main()
{
	double n,Total;
	cout << "請輸入數字 n:";
	cin >> n;
	Total = Factorial(n); // 求 n!
	cout << n << "!=" << Total << endl;
	system("pause");
	return 0;
}
