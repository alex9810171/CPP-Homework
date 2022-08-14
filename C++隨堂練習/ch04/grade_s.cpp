#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "叫块Θ罿(0-100)"; 
    cin >> score;
    if (score>=90)
       cout << "纔单\n";
    else if (score>=80)
       cout << "ヒ单\n";
    else if (score>=70)
       cout << "单\n";
    else if (score>=60)
       cout << "单\n";
    else  
       cout << "单\n";
    system("pause");
    return 0;
}
