#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
	Player NewPlayer;

	NewPlayer.SetHP(-100);
	int CurrentHP =
	NewPlayer.GetHP();


	NewPlayer.Attack();
	NewPlayer.Move();
	NewPlayer.Collect();
	NewPlayer.Run();
	

	return 0;
}