#include <iostream>
//#include <string>
using namespace std;
class Student
{
private:
static int Total;   // �ŧi�R�A���� Total
    string Name;
public:
    Student(string vName) // �غc��
    {
        Name = vName;
        Total += 1;
		cout << "�ǥͩm�W�G" <<  Name << endl;
    }
    static void Show()   // �R�A��k
    {
		cout << "�ثe�ǥͤH�� = " << Total << " �H" << endl;
    }
};

int Student::Total=0;  // �����b���O�~����l�� 
int main()
{
	Student::Show();   //���ŧi�����i�ϥ� Student::Show()

    Student Amy("���a�C");   //�إߪ���
	//�i�H�ϥ� ����.�R�A��k �Y Amy.Show()
	Amy.Show();

    Student Su("Ĭ�ɴf");
	//�]�i�H�ϥ� ���O::�R�A��k �Y Student::Show()
	Student::Show();
	system("pause");
	return 0;
}
