#include <iostream>
using namespace std;
class Car
{
    private:
      	int mSpeed; // �ŧiprivate mSpeed �ܼƨ�Car ���O�ϥ�     
	public:
		void SetSpeed(int var) //�]�w�t�ת���k
        {
             if ( var<60 )
                var=60;
             if ( var>100 )
                var=100;  
             mSpeed=var;  
        }
        int GetSpeed()        //Ū���t�ת���k
        { return mSpeed; }
};
int main()
{
    Car BMW;    //�إ� BMW ����
    BMW.SetSpeed(70);  // �]�w�t�׬� 70 
	cout << "�{�b�t��=" << BMW.GetSpeed() << endl; //�{�b�t��=70
    BMW.SetSpeed(120); // �]�w�t�׬� 120 
	cout << "�{�b�t��=" << BMW.GetSpeed() << endl; //�{�b�t��=100
	system("pause");
    return 0;
}
