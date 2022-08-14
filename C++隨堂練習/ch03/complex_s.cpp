#include <iostream>
using namespace std;
int main()
{
    float sum=0, n;  //sum儲存總和，初始值為0 
    cout << "請輸入第一個數：";
    cin >> n;
    sum += n;  //總和加入第一個數 
    cout << "請輸入第二個數：";
    cin >> n;
    sum += n;  //總和加入第二個數
    cout << "請輸入第三個數：";
    cin >> n;
    sum += n;  //總和加入第三個數
    cout << "三個數的總和為：" << sum << "\n";
    system("pause");
    return 0;
}
