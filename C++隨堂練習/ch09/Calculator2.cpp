#include <iostream>
using namespace std;
class Calculator    //定義 Calculator 父類別
{
private:
    int tot;
public:
    Calculator() // 建構式 
    { tot=0; }  
    int Sum(int n)  //計算 1+2+... +n
    {
        for (int i=1;i<=n;i++)
           tot += i;
        return tot;
    }
};
class Computer:public Calculator  //子類別繼承 Calculator  父類別
{
private:
    int tot;
public:
    Computer() // 建構式 
    { tot=1; }  
    int Sum(int n)  //計算 1*2*...*n
    {
        for (int i=1;i<=n;i++)
           tot *= i;
        return tot;
    }
};
int main()
{
    Calculator Calculator;
    int n;
    cout << "輸入 n=";
    cin >> n;
	cout << "1+2+3 ... +n = " << Calculator.Sum(n) << endl; 
    Computer Computer; 
	cout << "1*2*3 ... *n = " << Computer.Sum(n) << endl;
	system("pause");
	return 0;
}
