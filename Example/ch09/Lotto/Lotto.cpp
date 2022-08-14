#include "Lotto.h"  // 必須引用 Lotto.h 標頭檔
#include <iostream>
using namespace std;
#define NUM 42        // 共有  42 個樂透球
int main()
{
    Lotto Lotto;
    int Ball[NUM];    //42 個樂透球 
    int LottoBall[6]; // 開獎--取出的 6 個樂透球
    // 準備 42 個樂透球
    for (int i = 0; i < NUM; i++)  // 1~42，但索引值為 0~41 
        Ball[i]=i+1; 
    // 將樂透球打散  
    for (int i = 0; i <NUM; i++)  
    {
        int n=Lotto.Next(i,NUM-1); //  i<=n<=41 (n 為陣列索引值) 
    	int tmp=Ball[i]; // 第 i 和 n 樂透球互換
    	Ball[i]=Ball[n]; 
    	Ball[n]=tmp;
    }
    for (int i = 0; i <6; i++)  // 開獎--取出 6 個樂透球
        LottoBall[i]=Ball[i]; 
    // 顯示樂透號碼   
    Lotto.show(LottoBall);
    // 樂透號碼排序 
    Lotto.sort(LottoBall);
    cout << "排序後! ";
    Lotto.show(LottoBall);
    system("pause");
    return 0;    
}
