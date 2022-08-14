#include <iostream>
using namespace std;
class ClassA  //父類別 ClassA
{
public:
	int a1;   // 子類別可以繼承
	ClassA()  // 建構式
	{ a1=1; a2=2; a3=3;	}
	void MethodA() // 宣告 public 方法
	{ cout << "這是 ClassA 的 MethodA" << endl; }
private:
	int a2;  // 子類別可不以繼承
protected:
	int a3;  // 子類別可以繼承
};

class ClassB : public ClassA //ClassB 子類別 繼承 ClassA 父類別
{
public:
	int b1;          //宣告新的 public b1
    void MethodB()   //宣告新的 public 方法
    {
        a1 = 8;      //子類別可以繼承父類別中 public、protected成員
        a3 = 7;
        //a2 = 5;    //但不會繼承 private的成員，所以 a2=5 會出現錯誤
    }
};

int main()
{
    ClassA ObjectA;  // 建立物件 ObjectA
    ClassB ObjectB;  // 建立物件 ObjectB
	cout << "ObjectA 中 a1 的值：" <<  ObjectA.a1 << endl; //ObjectA.a1=1
	cout << "ObjectB 中 a1 的值：" <<  ObjectB.a1 << endl; //ObjectB.a1=1
    //cout << "ObjectB 中 a3 的值： " << ObjectB.a3; //會產生錯誤
    ObjectB.MethodA();   //顯示「這是 ClassA 的 MethodA」
    ObjectB.MethodB();   // 執行  MethodB() 更改 ObjectB 的 a1、a3 的值 
	cout << "---執行 ClassB 的 MethodB 後---" << endl;
	cout << "ObjectA 中 a1 的值：" << ObjectA.a1 << endl;  //ObjectA.a1=1
	cout << "ObjectB 中 a1 的值：" << ObjectB.a1 << endl;  //ObjectB.a1=8
	system("pause");
	return 0;
}

