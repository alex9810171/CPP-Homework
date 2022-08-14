#include "Lotto.h"  // 必須引用 Lotto.h 標頭檔
#define NUM 49    // 共有  49 個樂透球
int main()
{
    BigLotto BigLotto;
    int Ball[NUM];   //49 個樂透球
    int BigLottoBall[7]; // 開獎--取出的 6 個樂透球 + 1 個特別號
    // 準備 49 個樂透球
    for (int i = 0; i < NUM; i++)  // 1~49
        Ball[i]=i+1; 
    // 將樂透球打散  
    for (int i = 0; i <NUM; i++)  
    {
        int n=BigLotto.Next(i,NUM-1); //  i<=n<=48 
    	int tmp=Ball[i]; // 第 i 和 n 樂透球互換
    	Ball[i]=Ball[n]; 
    	Ball[n]=tmp;
    }
    for (int i = 0; i <7; i++)  // 6 個樂透球 + 1 個特別號
        BigLottoBall[i]=Ball[i]; 
    // 顯示 6 個樂透號碼  + 1 個特別號
    BigLotto.show(BigLottoBall);
    // 大樂透號碼排序 
    BigLotto.sort(BigLottoBall);
    cout << "排序後! ";
    BigLotto.show(BigLottoBall);
    system("pause");
    return 0;    
}
