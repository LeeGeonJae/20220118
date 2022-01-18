#pragma once


class Player
{
private:
	int HP;
public:
	int MP;
	int Gold;

public:
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
