class Car
{
public:
	int Speed;    //�w�q Speed ���
	void Turbo()  // Turbo ��k�N Speed �ݩʥ[ 1
	{
		this->Speed = this->Speed + 1; //this �N�����O�����A�Y Car ���O
	}
	// Turbo ��k�h���N Speed �ݩʥ[ n
	void Turbo(int n )
	{
		this->Speed = this->Speed  + n;
	}
};
