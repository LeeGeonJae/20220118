#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
	Player NewPlayer;

	NewPlayer.Gold = 10;
	NewPlayer.HP = 100;
	NewPlayer.Attack();
	NewPlayer.Move();
	NewPlayer.Collect();
	NewPlayer.Run();
	

	return 0;
}