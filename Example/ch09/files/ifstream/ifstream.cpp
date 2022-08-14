#include <iostream>
#include <fstream>
using namespace std;
#define size 2000
int main()
{
    fstream file;
    char buffer[size];
    file.open("sample.txt",ios::in);
   // file.open("ifstream.cpp",ios::in);
    if (file.fail())
       cout << "error...";
    else
    {
        file.read(buffer,size);
            cout << buffer << endl;
 
        cout << "****  show each char\n";
        for (int i=0;i<strlen(buffer);i++)
          cout << buffer[i];
    }
    file.close();
    system("pause");
    return 0;
}
