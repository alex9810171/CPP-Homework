#include "Lotto.h"  // �����ޥ� Lotto.h ���Y��
#define NUM 49    // �@��  49 �Ӽֳz�y
int main()
{
    BigLotto BigLotto;
    int Ball[NUM];   //49 �Ӽֳz�y
    int BigLottoBall[7]; // �}��--���X�� 6 �Ӽֳz�y + 1 �ӯS�O��
    // �ǳ� 49 �Ӽֳz�y
    for (int i = 0; i < NUM; i++)  // 1~49
        Ball[i]=i+1; 
    // �N�ֳz�y����  
    for (int i = 0; i <NUM; i++)  
    {
        int n=BigLotto.Next(i,NUM-1); //  i<=n<=48 
    	int tmp=Ball[i]; // �� i �M n �ֳz�y����
    	Ball[i]=Ball[n]; 
    	Ball[n]=tmp;
    }
    for (int i = 0; i <7; i++)  // 6 �Ӽֳz�y + 1 �ӯS�O��
        BigLottoBall[i]=Ball[i]; 
    // ��� 6 �Ӽֳz���X  + 1 �ӯS�O��
    BigLotto.show(BigLottoBall);
    // �j�ֳz���X�Ƨ� 
    BigLotto.sort(BigLottoBall);
    cout << "�Ƨǫ�! ";
    BigLotto.show(BigLottoBall);
    system("pause");
    return 0;    
}
