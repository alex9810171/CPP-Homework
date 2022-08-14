#include <iostream>
using namespace std;
int main()
{
    int n;  //購買貨品件數 
    cout << "請輸入購買貨品件數：";
    cin >> n; 
    int money[n]; //宣告陣列 
    double sum=0; 
    for(int i=0; i<n ;i++) 
    {
        cout << "請輸入第 " << i+1 << " 件貨品的價格：";
        cin >> money[i]; //等待使用者輸入 
    }
    for(int i=0; i<n ;i++)
    {
        sum += money[i]; //計算總價 
    }
    cout << "全部貨品總價為： " << sum << " 元\n";
    system("pause");
    return 0;
}
