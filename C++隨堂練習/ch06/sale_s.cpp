#include <iostream>
using namespace std;
int main()
{
    int n;  //�ʶR�f�~��� 
    cout << "�п�J�ʶR�f�~��ơG";
    cin >> n; 
    int money[n]; //�ŧi�}�C 
    double sum=0; 
    for(int i=0; i<n ;i++) 
    {
        cout << "�п�J�� " << i+1 << " ��f�~������G";
        cin >> money[i]; //���ݨϥΪ̿�J 
    }
    for(int i=0; i<n ;i++)
    {
        sum += money[i]; //�p���`�� 
    }
    cout << "�����f�~�`�����G " << sum << " ��\n";
    system("pause");
    return 0;
}
