#include <iostream>
using namespace std;
int main()
{
    string Fruit[3][2]={{"王山水","橘子"},{"謝秋田","蘋果"},{"鄭竹淼","香蕉"}};
    for(int i=0;i<3;i++)
        cout << Fruit[i][0] << " 最喜歡吃的水果是 " << Fruit[i][1] << "\n";
    system("pause");
    return 0;
}
