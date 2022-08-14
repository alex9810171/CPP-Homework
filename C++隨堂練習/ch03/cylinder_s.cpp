#include <iostream>
using namespace std;
int main()
{
    float radium, height, volumn;
    const float pi = 3.14; 
    cout << "請輸入圓柱體的半徑(公分)：";
    cin >> radium; 
    cout << "請輸入圓柱體的高(公分)：";
    cin >> height; 
    volumn = pi * radium * radium * height; 
    cout << "圓柱體的體積：" << volumn << " 立方公分\n";
    system("pause");
    return 0;
}
