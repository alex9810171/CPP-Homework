#include <iostream>
using namespace std;
class Person
{
	public:
        int Tall;    //�ŧi Tall ������쬰���Ϋ��A
		void Walk(int var)     //�w�q�]�B��k
        { cout << "�C�p�ɥi�] " << var << " ����" << endl; }
};
int main()
{
    // �H�إߤ@�몫�󪺤覡
	Person David; //�ŧi�ëإ� Person ���O�� David ����
	David.Tall = 183;             //�]�w Tall ���
	cout << "David ����=" <<  David.Tall << endl;   //���o Tall ���
	David.Walk(8);  //�I�s Walk() ��k�A�óŻ��Ѽƭ� 8
	cout << "-------------------------\n";
	// �H�إ߫���
    Person Tom; //�ŧi�ëإ� Person ���O�� Tom ���Ъ���
    Person *p=&Tom;
	p->Tall = 170;           //�]�w Tall ���
	cout << "Tom ����=" <<  p->Tall << endl;   //���o Tall ���
	p->Walk(6);  //�I�s Walk() ��k�A�óŻ��Ѽƭ� 6
	cout << "-------------------------\n";
	// �ϥΰʺA���Ыŧi
	Person *Lily= new Person(); //���ŧi Person ���O�� Lily ���Ъ���
	Lily->Tall = David.Tall;
	cout << "Tony ����=" <<  Lily->Tall << endl;   //���o Tall ���
	Lily->Walk(5);
	system("pause");
	return 0;
}
