#include <iostream>
#include "Transition.h"
#include "State.h"
#include "Image.h"
#include <vector>

using namespace std;

int main()
{

	vector<State*> StateList;
	StateList.push_back(new State(1, "��ȸ"));
	StateList.push_back(new State(2, "�߰�"));
	StateList.push_back(new State(3, "����"));
	StateList.push_back(new State(4, "����"));

	vector<Transition*> TransitionList;
	TransitionList.push_back(new Transition(1, "���߰�", 2));
	TransitionList.push_back(new Transition(2, "����ħ", 1));
	TransitionList.push_back(new Transition(2, "�����Ÿ�����", 3));
	TransitionList.push_back(new Transition(3, "�����Ÿ���Ż", 2));
	TransitionList.push_back(new Transition(3, "HP����", 4));

	int MonsterCurrentState = 2; //�߰�
	string MonsterCondition = "�����Ÿ�����";
	int MonsterNextState = 0;

	for (size_t i = 0; i < TransitionList.size(); ++i)
	{
		if (TransitionList[i]->Condition == MonsterCondition &&
			TransitionList[i]->CurrentState == MonsterCurrentState)
		{
			MonsterNextState = TransitionList[i]->NextState;
		}
	}

	for (size_t i = 0; i < StateList.size(); ++i)
	{
		if (StateList[i]->ID == MonsterNextState)
		{
			cout << StateList[i]->StateName << endl;
		}
	}


	class Image
	{
	public:
		Image();
		Image(int NewX, int NewY, int NewR, int NewG, int NewB)
		{
			X = NewX;
			Y = NewY;
			R = NewR;
			G = NewG;
			B = NewB;
		}

		~Image();

		int X;
		int Y;
		int R;
		int G;
		int B;

	};



	vector<Image*> ImageList;
	ImageList.push_back(new Image(0, 0, 165, 55, 128));
	ImageList.push_back(new Image(0, 1, 133, 28, 182));
	ImageList.push_back(new Image(0, 2, 115, 136, 63));
	ImageList.push_back(new Image(1, 0, 209, 132, 221));
	ImageList.push_back(new Image(1, 1, 123, 72, 106));
	ImageList.push_back(new Image(1, 2, 105, 117, 92));
	ImageList.push_back(new Image(2, 0, 10, 98, 237));
	ImageList.push_back(new Image(2, 1, 134, 222, 36));
	ImageList.push_back(new Image(2, 2, 217, 8, 171));
	ImageList.push_back(new Image(3, 0, 223, 163, 22));
	ImageList.push_back(new Image(3, 1, 64, 10, 131));
	ImageList.push_back(new Image(3, 2, 220, 111, 106));




	return 0;
}