#include <iostream>
using namespace std;
int main()
{
    int n; 
Start: 
    cout << "�r���� n=";
    cin >> n;               // ��J�@���}�C�j�p
    char *p=new char[n];    // �إ߰}�C�j�p�� n�ʺA�}�C
    
    cout << "�п�J�r��G";
    for (int i=0;i<n;i++) // ��J�r���æs�b�}�C��
    	cin >> *(p+i);   
    	
    cout << "�r��˦L=";
    for (int i=n-1;i>=0;i--) // �H������ܰ}�C������
    	cout << *(p+i);  
    cout << endl;  	
    goto Start;
    
    delete[] p;  //����ʺA�}�C�t�m���O����Ŷ�
	system("pause");
	return 0;
}
