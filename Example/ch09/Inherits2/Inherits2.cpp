#include <iostream>
using namespace std;
class Rectangle    //�w�q Rectangle �����O
{
public:
	int Width;     //�@���ܼ� Width
    int GetArea()  //�p��x�έ��n
    { return Width * Height; }
protected:
	int Height;    //protected �ܼ� Height
};

class Triangle:public Rectangle //�l���O�~�� Rectangle �����O
{
public:
	Triangle()       //�غc��
    {
        Width = 5;   //�l���O�i�~�Ӥ����O�� public�Bprotected������
        Height = 6;
    }
    int GetArea2()   //�l���O���s�W�p��T���έ��n��k
    { return (Width * Height) / 2; }
};

int main()
{
    Triangle obj1;
	cout << "�x�έ��n = " << obj1.GetArea() << endl;   //�x�έ��n=30
	cout << "--------------------" << endl;
	cout << "�T���έ��n = " << obj1.GetArea2() << endl;//�T���έ��n=15
	system("pause");
	return 0;
}
