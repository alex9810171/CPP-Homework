#include <iostream>
using namespace std;
struct student
{
	char name[8];
	int score;
};
int main()
{
  	struct student David={"David",90};
  	cout << "�m�W" << "\t" << "���Z" << endl; 
  	cout << David.name << "\t" << David.score << endl; 
  	system("pause");
  	return 0;
}
