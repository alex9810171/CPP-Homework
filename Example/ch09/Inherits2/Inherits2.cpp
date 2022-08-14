#include <iostream>
using namespace std;
class Rectangle    //定義 Rectangle 父類別
{
public:
	int Width;     //共用變數 Width
    int GetArea()  //計算矩形面積
    { return Width * Height; }
protected:
	int Height;    //protected 變數 Height
};

class Triangle:public Rectangle //子類別繼承 Rectangle 父類別
{
public:
	Triangle()       //建構式
    {
        Width = 5;   //子類別可繼承父類別中 public、protected的成員
        Height = 6;
    }
    int GetArea2()   //子類別中新增計算三角形面積方法
    { return (Width * Height) / 2; }
};

int main()
{
    Triangle obj1;
	cout << "矩形面積 = " << obj1.GetArea() << endl;   //矩形面積=30
	cout << "--------------------" << endl;
	cout << "三角形面積 = " << obj1.GetArea2() << endl;//三角形面積=15
	system("pause");
	return 0;
}
