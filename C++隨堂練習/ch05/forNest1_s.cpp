#include <iostream>
using namespace std;
int main()
{
    int n; //儲存輸入數字 
    double sum, ave; //sum儲存總分，ave儲存平均 
    for(int i=1; i<=2 ;i++) //外部迴圈代表班級 
    { 
        cout << "第 " << i << " 個班級：\n"; 
        sum = 0; //新的班級將總分歸零 
        for(int j=1; j<=4 ;j++) //內部迴圈代表學生
        {
            cout << "請輸入第 " << j << " 位學生的成績：";
            cin >> n; //等待使用者輸入 
            sum += n; //計算總分 
        }
        ave = sum/4; //計算平均 
        cout << "第" << i << "班總成績為： " << sum << "分, 平均為 " << ave << "分\n\n";
    }
    system("pause");
    return 0;
}
