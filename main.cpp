#include <iostream>
#include "Transition.h"
#include "State.h"
#include <vector>

using namespace std;

int main()
{
	vector<State*> StateList;
	StateList.push_back(new State(1, "배회"));
	StateList.push_back(new State(2, "추격"));
	StateList.push_back(new State(3, "공격"));
	StateList.push_back(new State(4, "죽음"));

	vector<Transition*> TransitionList;
	TransitionList.push_back(new Transition(1, "적발견", 2));
	TransitionList.push_back(new Transition(2, "적놓침", 1));
	TransitionList.push_back(new Transition(2, "사정거리접근", 3));
	TransitionList.push_back(new Transition(3, "사정거리이탈", 2));
	TransitionList.push_back(new Transition(3, "HP없음", 4));

	int MonsterCurrentState = 2; //추격
	string MonsterCondition = "적놓침";
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



	return 0;
}