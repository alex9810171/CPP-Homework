#include "Lotto.h"  // �����ޥ� Lotto.h ���Y��
#include <iostream>
using namespace std;
#define NUM 42        // �@��  42 �Ӽֳz�y
int main()
{
    Lotto Lotto;
    int Ball[NUM];    //42 �Ӽֳz�y 
    int LottoBall[6]; // �}��--���X�� 6 �Ӽֳz�y
    // �ǳ� 42 �Ӽֳz�y
    for (int i = 0; i < NUM; i++)  // 1~42�A�����ޭȬ� 0~41 
        Ball[i]=i+1; 
    // �N�ֳz�y����  
    for (int i = 0; i <NUM; i++)  
    {
        int n=Lotto.Next(i,NUM-1); //  i<=n<=41 (n ���}�C���ޭ�) 
    	int tmp=Ball[i]; // �� i �M n �ֳz�y����
    	Ball[i]=Ball[n]; 
    	Ball[n]=tmp;
    }
    for (int i = 0; i <6; i++)  // �}��--���X 6 �Ӽֳz�y
        LottoBall[i]=Ball[i]; 
    // ��ֳܼz���X   
    Lotto.show(LottoBall);
    // �ֳz���X�Ƨ� 
    Lotto.sort(LottoBall);
    cout << "�Ƨǫ�! ";
    Lotto.show(LottoBall);
    system("pause");
    return 0;    
}
