#pragma once
#include <iostream>
//encapsulation

using namespace std;

class Player
{
private:
	int HP;
	int MP;
	int Gold;

public:
	Player() //�⺻ ������(constructor)0
	{
		cout << "�÷��̾� ����" << endl;
	}

	~Player() //�Ҹ���, �ı���(destructor)
	{
		cout << "�÷��̾� �����" << endl;
	}

	//const �Լ� ���� �� ��ȯ��
	//const Player* GetHP(); // ��ȯ���� �������� ������.

	//�Լ� ���ڿ� const�� ������ ���ڰ��� �Լ� �ȿ��� �������� �ʽ��ϴ�.
	//void strcpy(cahar* Dest, const char* Source)

	//�Լ� ���� �ڿ� const
	//int GetHP() const //�� �Լ��� ��������� �������� �ʽ��ϴ�.

	//������, accessor
	void SetHP(int NewHP)
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}
	const int GetHP() const
	{
		return HP;
	}

	void Collect();
	void Move();
	void Attack();
	void Run();
};
