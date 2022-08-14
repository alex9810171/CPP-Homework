#include <iostream>
using namespace std;
class Car
{
public:
	int Speed;
    Car()     // 建構式
	{ this->Speed = 70;	}
    ~Car()   // 解構式
	{
		 cout << "物件結束!" ;
	}
};
int main()
{
    // 本例要在 DOS 下執行，才可以顯示物件解構的執行結果 
 	Car BMW;
    cout << "目前速度=" <<  BMW.Speed << endl; //目前速度=70
    system("pause"); 
    return 0;
}
