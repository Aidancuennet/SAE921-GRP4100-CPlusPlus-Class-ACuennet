#include <iostream>
#include "Card.h"
#include <vector>
#include <array>

using namespace std;

int const DrawCards = 5;

bool inArray(int value, std::array<int, DrawCards> cardsDrawn)
{
	for (auto card : cardsDrawn)
	{
		if (value == card)
		{
			return true;
		}
	}

	return false;
}

int main()
{

	srand(time(NULL));

	
	vector<Card> deck;
	deck.reserve(52);

	
	for (int value = 0; value < 13; value++)
	{
		for (int suit = 0; suit < 4; suit++)
		{
			deck.emplace_back(Card(value, suit));
		}
	}

	
	array<int, DrawCards> hand
	{ 0 * DrawCards };

	
	for (int card = 0; card < DrawCards; card++)
	{
		
		int cardDraw;
		do
		{
			cardDraw = rand() % 52;
		} while (inArray(cardDraw, hand));

		deck.at(cardDraw).print();
	}
}