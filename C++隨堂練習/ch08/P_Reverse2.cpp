#include <iostream>
using namespace std;
int main()
{
    int n; 
Start: 
    cout << "字元數 n=";
    cin >> n;               // 輸入一維陣列大小
    char *p=new char[n];    // 建立陣列大小為 n動態陣列
    
    cout << "請輸入字串：";
    for (int i=0;i<n;i++) // 輸入字元並存在陣列中
    	cin >> *(p+i);   
    	
    cout << "字串倒印=";
    for (int i=n-1;i>=0;i--) // 以指標顯示陣列元素值
    	cout << *(p+i);  
    cout << endl;  	
    goto Start;
    
    delete[] p;  //釋放動態陣列配置的記憶體空間
	system("pause");
	return 0;
}
