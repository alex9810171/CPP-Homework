#include <iostream>
using namespace std;
class ClassA  //�����O ClassA
{
public:
	int a1;   // �l���O�i�H�~��
	ClassA()  // �غc��
	{ a1=1; a2=2; a3=3;	}
	void MethodA() // �ŧi public ��k
	{ cout << "�o�O ClassA �� MethodA" << endl; }
private:
	int a2;  // �l���O�i���H�~��
protected:
	int a3;  // �l���O�i�H�~��
};

class ClassB : public ClassA //ClassB �l���O �~�� ClassA �����O
{
public:
	int b1;          //�ŧi�s�� public b1
    void MethodB()   //�ŧi�s�� public ��k
    {
        a1 = 8;      //�l���O�i�H�~�Ӥ����O�� public�Bprotected����
        a3 = 7;
        //a2 = 5;    //�����|�~�� private�������A�ҥH a2=5 �|�X�{���~
    }
};

int main()
{
    ClassA ObjectA;  // �إߪ��� ObjectA
    ClassB ObjectB;  // �إߪ��� ObjectB
	cout << "ObjectA �� a1 ���ȡG" <<  ObjectA.a1 << endl; //ObjectA.a1=1
	cout << "ObjectB �� a1 ���ȡG" <<  ObjectB.a1 << endl; //ObjectB.a1=1
    //cout << "ObjectB �� a3 ���ȡG " << ObjectB.a3; //�|���Ϳ��~
    ObjectB.MethodA();   //��ܡu�o�O ClassA �� MethodA�v
    ObjectB.MethodB();   // ����  MethodB() ��� ObjectB �� a1�Ba3 ���� 
	cout << "---���� ClassB �� MethodB ��---" << endl;
	cout << "ObjectA �� a1 ���ȡG" << ObjectA.a1 << endl;  //ObjectA.a1=1
	cout << "ObjectB �� a1 ���ȡG" << ObjectB.a1 << endl;  //ObjectB.a1=8
	system("pause");
	return 0;
}

