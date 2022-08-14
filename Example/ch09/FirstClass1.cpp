#include <iostream>
//#include <string>
using namespace std;
class Person
{
	public:
        int Tall;    //宣告 Tall 身高欄位為公用型態
		string Name; //宣告 Name 姓名欄位為公用型態
		void Walk(int var)     //定義跑步方法
        {
			cout << Name << " 每小時可跑 " << var << " 公里" << endl;
        }
};
int main()
{
	Person David; //宣告並建立 Person 類別的 David 物件
	David.Tall = 183;             //設定 Tall 欄位
	David.Name = "David";         //設定 Name 欄位
	cout << David.Name << " 身高=" << David.Tall << endl; 
	David.Walk(8);  //呼叫 Walk() 方法，並傅遞參數值 8
	system("pause");
	return 0;
}
