#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i=1; i<6 ; i+=3)
    {
        cout <<  i << " ";
    }
    cout << "\n";
    cout << "結束迴圈後的 i 值為 " << i << " \n";
    system("pause");
    return 0;
}
