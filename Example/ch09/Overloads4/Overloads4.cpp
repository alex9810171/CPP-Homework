#include <iostream>
using namespace std;
class A  //�����O A
{
public:
	int n;
	A(){n=1;}      // �۩w�w�]�غc��n=1
	A(int x){n=x;} // �۩w�h���غc�� n=x
};

class B : public A //B �l���O�~�Ӥ����O  A
{
public:
    //�l���O�����۩w�w�]�غc��
	B():A()    // �l���O�I�s�����O���w�]�غc��
	{}   
	B(int x)   // �l���O�۩w�h���غc��
	{ n=x + 5;}    
};

int main()
{
    B B1;
    cout << "B1.n=" << B1.n << endl; // B1.n=1
    B B2(10);
    cout << "B2.n=" << B2.n << endl; // B2.n=15
	system("pause");
	return 0;
}
