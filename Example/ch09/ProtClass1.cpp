#include <iostream>
//#include <string>
using namespace std;
class Person
{
	public:
        void Walk(int );  //�禡�쫬�ŧi 
        int Tall;    //�ŧi Tall ������쬰���Ϋ��A
		string Name; //�ŧi Name �m�W��쬰���Ϋ��A
};
void Person::Walk(int var)     //�w�q�]�B��k
{
	cout << Name << " �C�p�ɥi�] " << var << " ����" << endl;
}

int main()
{
	Person David; //�ŧi�ëإ� Person ���O�� David ����
	David.Tall = 183;             //�]�w Tall ���
	David.Name = "David";         //�]�w Name ���
	cout << David.Name << " ����=" << David.Tall << endl; 
	David.Walk(8);  //�I�s Walk() ��k�A�óŻ��Ѽƭ� 8
	system("pause");
	return 0;
}
