#include <iostream>
using namespace std;
int main()
{
    float sum=0, n;  //sum�x�s�`�M�A��l�Ȭ�0 
    cout << "�п�J�Ĥ@�ӼơG";
    cin >> n;
    sum += n;  //�`�M�[�J�Ĥ@�Ӽ� 
    cout << "�п�J�ĤG�ӼơG";
    cin >> n;
    sum += n;  //�`�M�[�J�ĤG�Ӽ�
    cout << "�п�J�ĤT�ӼơG";
    cin >> n;
    sum += n;  //�`�M�[�J�ĤT�Ӽ�
    cout << "�T�Ӽƪ��`�M���G" << sum << "\n";
    system("pause");
    return 0;
}
