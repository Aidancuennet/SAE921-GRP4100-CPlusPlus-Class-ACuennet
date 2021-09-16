#include <iostream>


int main()
{

	srand(time(NULL));
	
	int currentResult;
	int pastResult = 4;
	bool continue_ = true;

	int wallet = 5;
	
	do
	{
		//one roll
		int myRoll1 = 1 + (rand() % 6);
		int myRoll2 = 1 + (rand() % 6);
		int currentResult = myRoll1 + myRoll2;

		//display of roll
		std::cout << "Roll " << myRoll1 << ":" << myRoll2 << std::endl;
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
		}

		


	} while (continue_);

	
	
	
	
		/*if (result < 7){
			std::cout << "Game Over ! you lost your money !" << std::endl;
		}
		else (result > 7)
		{
			std::cout << "you win ! double or nothing ?" << std::endl;
		}*/
	
	

	
}
