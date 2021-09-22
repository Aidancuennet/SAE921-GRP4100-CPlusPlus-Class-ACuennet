#include <iostream>


int main()
{

	srand(time(NULL));

	int currentResult;
	int pastResult = 4;
	bool continue_ = true;
	bool Player2turn = false;
	
	int wallet = 5;

	do
	{
		//one roll
		int myRoll1 = 1 + (rand() % 6);
		int myRoll2 = 1 + (rand() % 6);
		int currentResult = myRoll1 + myRoll2;

		//display of roll for player 1
		std::cout << "it's Player 1's turn !" << std::endl;
		std::cout << "Player 1's Roll " << myRoll1 << ":" << myRoll2 << std::endl;
		std::cout << "current result is : " << currentResult << std::endl;
		std::cout << "past result is : " << pastResult << std::endl;

		////display of roll for player 2
		//std::cout << "Player 2's Roll " << myRoll1 << ":" << myRoll2 << std::endl;
		//std::cout << "current result is : " << currentResult << std::endl;
		//std::cout << "past result is : " << pastResult << std::endl;

		//see if player has won or lost
		if (currentResult > pastResult)
		{
			wallet *= 2;
			std::cout << "you won !! poggy woggy" << std::endl;
			pastResult = currentResult;

			char answer;
			std::cout << "your wallet contains " << wallet << " CHF" << std::endl;
			std::cout << "play again and double your earnings or leave with them (y/n) ?" << std::endl;
			std::cin >> answer;

			if (answer == 'y')
			{
				continue_ = true;
				Player2turn = false;
			}
			else if (answer == 'n')
			{
				std::cout << "you have won " << wallet << " CHF" << std::endl;
				continue_ = false;
			}
			else
			{
				//a traiter plus tard
			}
		}
		else
		{
			std::cout << "you lost... sadge" << std::endl;
			continue_ = false;
			Player2turn = false;
		}

		if (continue_ == false)
		{
			std::cout << "it's Player 2's turn ! let's see if they can do better !" << std::endl;
			Player2turn = true;
		}
		

	} while (continue_);

	if (Player2turn == true)
	{
		do
		{
			//one roll
			int myRoll1 = 1 + (rand() % 6);
			int myRoll2 = 1 + (rand() % 6);
			int currentResult = myRoll1 + myRoll2;

			//display of roll for player 1
			std::cout << "it's Player 2's turn !" << std::endl;
			std::cout << "Player 2's Roll " << myRoll1 << ":" << myRoll2 << std::endl;
			std::cout << "current result is : " << currentResult << std::endl;
			std::cout << "past result is : " << pastResult << std::endl;

			//see if player has won or lost
			if (currentResult > pastResult)
			{
				wallet *= 2;
				std::cout << "you won !! poggy woggy" << std::endl;
				pastResult = currentResult;

				char answer;
				std::cout << "your wallet contains " << wallet << " CHF" << std::endl;
				std::cout << "play again and double your earnings or leave with them (y/n) ?" << std::endl;
				std::cin >> answer;

				if (answer == 'y')
				{
					continue_ = true;
					Player2turn = false;
				}
				else if (answer == 'n')
				{
					std::cout << "you have won " << wallet << " CHF" << std::endl;
					continue_ = false;
				}
				else
				{
					//a traiter plus tard
				}
			}
			else
			{
				std::cout << "you lost... sadge" << std::endl;
				continue_ = false;
				Player2turn = false;
			}


		} while (continue_);
	}


	
}