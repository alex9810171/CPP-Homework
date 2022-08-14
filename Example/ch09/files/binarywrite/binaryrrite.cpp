//寫入二進位檔案資料
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;	//建立檔案輸入物件	
    char buffer[300];
    char yn;
    char no[6],name[8];
	//讀取二進位檔案sample02.dat
	// 檔案開啟為寫入狀態,從檔案結尾寫入資料
	//
	file.open("sample01.txt", ios::out|ios::binary|ios::app);
	if(file.fail())
		cout<<"檔案無法開啟...\n";
	else
    {
		do
        { 
            cout << "請輸入編號、品名\n";
            cin >> no >> name;    
            file.write((char*) &no, sizeof(no)); // 寫入資料      
           // file.write((char*) "\t", 1); // 寫入資料      
            file.write((char*) &name , sizeof(name)); // 寫入資料    
          //  file.write((char*)  "\t\n", 2); // 寫入資料     
            cout << "是否繼續(Y/N)";
            cin >> yn;
        } while (yn=='Y' || yn=='y');  
        cout << "檔案建立完成!\n";        
    	file.close(); 	//關閉檔案
	}	
    cout << endl;  	
	file.close();	//關閉檔案
	system("pause");
    return 0;
}
