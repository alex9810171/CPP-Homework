#include <iostream>
using namespace std;
int MaxValue(int a,int b) 
{
    int r;
    if (a>b) 
       r=a;
    else
       r=b;
    return r;
}
int main()
{
	int a,b,max;
    cout << "請輸入數值 a=";
    cin >> a;
    cout << "請輸入數值 b=";
    cin >> b;
    max=MaxValue(a,b); // 找較大的數 
	cout << "較大的數是:" << max << endl;
	system("pause");
	return 0;
}
