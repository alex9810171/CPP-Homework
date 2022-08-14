#include <iostream>
using namespace std;
int main()
{
    int n; //儲存輸入數字 
    double sum=0, ave; //sum儲存總分，ave儲存平均 
    for(int i=1; i<=5 ;i++) //執行五次迴圈 
    {
        cout << "請輸入第 " << i << " 位學生的成績：";
        cin >> n; //等待使用者輸入 
        sum += n; //計算總分 
    }
    ave = sum/5; //計算平均 
    cout << "全班總成績為： " << sum << "分, 平均為 " << ave << "分\n";
    system("pause");
    return 0;
}
