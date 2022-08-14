#include <iostream>
using namespace std;
int main()
{
    int n;  // 儲存輸入資料
    cout << "請輸入一分鐘打字字數:";
    cin >>n;
    if (n >= 80)  //如果字數超過80 
    {
       cout << "你是打字快手！\n";  
    }
    system("pause");
    return 0;
}
