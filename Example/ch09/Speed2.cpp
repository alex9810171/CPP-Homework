#include <iostream>
using namespace std;
class Car
{
    private:
      	int mSpeed; // 宣告private mSpeed 變數供Car 類別使用     
	public:
		void SetSpeed(int var) //設定速度的方法
        {
             if ( var<60 )
                var=60;
             if ( var>100 )
                var=100;  
             mSpeed=var;  
        }
        int GetSpeed()        //讀取速度的方法
        { return mSpeed; }
};
int main()
{
    Car BMW;    //建立 BMW 物件
    BMW.SetSpeed(70);  // 設定速度為 70 
	cout << "現在速度=" << BMW.GetSpeed() << endl; //現在速度=70
    BMW.SetSpeed(120); // 設定速度為 120 
	cout << "現在速度=" << BMW.GetSpeed() << endl; //現在速度=100
	system("pause");
    return 0;
}
