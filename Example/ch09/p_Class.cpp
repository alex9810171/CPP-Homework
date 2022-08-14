#include <iostream>
using namespace std;
class Person
{
	public:
        int Tall;    //宣告 Tall 身高欄位為公用型態
		void Walk(int var)     //定義跑步方法
        { cout << "每小時可跑 " << var << " 公里" << endl; }
};
int main()
{
    // 以建立一般物件的方式
	Person David; //宣告並建立 Person 類別的 David 物件
	David.Tall = 183;             //設定 Tall 欄位
	cout << "David 身高=" <<  David.Tall << endl;   //取得 Tall 欄位
	David.Walk(8);  //呼叫 Walk() 方法，並傅遞參數值 8
	cout << "-------------------------\n";
	// 以建立指標
    Person Tom; //宣告並建立 Person 類別的 Tom 指標物件
    Person *p=&Tom;
	p->Tall = 170;           //設定 Tall 欄位
	cout << "Tom 身高=" <<  p->Tall << endl;   //取得 Tall 欄位
	p->Walk(6);  //呼叫 Walk() 方法，並傅遞參數值 6
	cout << "-------------------------\n";
	// 使用動態指標宣告
	Person *Lily= new Person(); //先宣告 Person 類別的 Lily 指標物件
	Lily->Tall = David.Tall;
	cout << "Tony 身高=" <<  Lily->Tall << endl;   //取得 Tall 欄位
	Lily->Walk(5);
	system("pause");
	return 0;
}
