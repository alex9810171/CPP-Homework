#include <iostream>
using namespace std;
int main()
{
    short day1, day2, day3;  //宣告變數 
    cout << "請輸入第一天的支出：";  
    cin >> day1;
    cout << "請輸入第二天的支出："; 
    cin >> day2;
    cout << "請輸入第三天的支出："; 
    cin >> day3;
    int sum = day1 + day2 + day3;  //計算總支出 
    float ave = (float)sum / 3;  //計算平均 
    cout << "您的總支出為 " << sum << " 元，平均每天支出 " << ave << " 元\n";
    system("pause");
    return 0;
}
