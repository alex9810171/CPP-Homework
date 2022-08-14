#include <iostream>
using namespace std;
int main()
{
    int n, c=0, s=0; //n儲存缺考座號，c為計數器，s儲存分數 
    double sum=0, ave; //sum儲存總分，ave儲存平均 
    cout << "請輸入缺考學生的座號：";
    cin >> n; //等待使用者輸入座號 
    while(s>=0) //輸入成績大於等於0就執行迴圈內敘述 
    {
        c++;
        if(c==n) //如果缺號就跳過
        {
            continue; 
        } 
        cout << "請輸入 " << c << " 號的成績：";
        cin >> s; //等待使用者輸入分數 
        if(s>=0) //輸入成績大於等於0才加入總分 
        {
            sum += s;
        } 
    }
    ave = sum/(c-2); //計算平均，學生人數為(c-2)
    cout << "全班總成績為： " << sum << " 分, 平均為 " << ave << " 分\n";
    system("pause");
    return 0;
}
