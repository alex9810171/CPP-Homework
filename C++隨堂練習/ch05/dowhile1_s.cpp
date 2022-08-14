#include <iostream>
using namespace std;
int main()
{
    int n, c=0; //n儲存輸入數字，c為計數器 
    double sum=0, ave; //sum儲存總分，ave儲存平均 
    do //建立 do…while 迴圈 
    {
        c++;
        cout << "請輸入第 " << c << " 位學生的成績：";
        cin >> n; //等待使用者輸入
        if(n>=0) //輸入成績大於等於0才加入總分
        { 
            sum += n;  
        }
    }while(n>=0); //輸入成績大於等於0就執回到迴圈啟始
    ave = sum/(c-1); //計算平均 ，學生人數為(c-1) 
    cout << "全班總成績為： " << sum << " 分, 平均為 " << ave << " 分\n";
    system("pause");
    return 0;
}
