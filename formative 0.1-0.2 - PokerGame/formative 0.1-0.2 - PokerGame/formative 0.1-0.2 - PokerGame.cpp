#include <iostream>
#include <string>

enum class Value : int
{
	Two = 2,
	Three = 3,
	Four = 4,
	Five = 5,
	Six = 6,
	Seven = 7,
	Eight = 8,
	Nine = 9,
	Ten = 10,
	Jack,
	Queen,
	King,
	Ace
	
};

enum class Suit : int
{
	Spades,
	Diamonds,
	Hearts,
	Clubs
};

struct Card
{
	Value value;
	Suit suit;
};

std::string printValue(Value value_)
{
	switch (value_)
	{
	case Value::Two:
		return "two";
		break;
		{
	case Value::Three:
		return "three";
		break;
		}
		{
	case Value::Four:
		return "four";
		break;
		}
		{
	case Value::Five:
		return "five";
		break;
		}
		{
	case Value::Six:
		return "six";
		break;
	}
		{
	case Value::Seven:
		return "seven";
		break;
		}
		{
	case Value::Eight:
		return "eight";
		break;
		}
		{
	case Value::Nine:
		return "nine";
		break;
		}
		{
	case Value::Ten:
		return "ten";
		break;
		}
		{
	case Value::Jack:
		return "jack";
		break;
		}
		{
	case Value::Queen:
		return "queen";
		break;
		}
		{
	case Value::King:
		return "king";
		break;
		}
		{
	case Value::Ace:
		return "ace";
		break;
		}
	default:
		return "default";
		break;

	}
}

std::string printSuit(Suit suit_)
{
	
	switch(suit_)
	{
	case Suit::Spades:
		return "spades";
		break;
	case Suit::Diamonds:
		return "diamonds";
		break;
	case Suit::Hearts:
		return "hearts";
		break;
	case Suit::Clubs:
		return "clubs";
		break;
	default:
		return "default";
		break;
	}
}
std::string printCards(Card card_ )
{
	return printValue(card_.value) + " of " + printSuit(card_.suit);
	
}

int main()
{
	for (int t = 4; t <= 4; t++)
	{
		for (int v = 14; v <= 14; v++)
		{
			Card myCard;
			myCard.suit = static_cast<Suit>(5);
			myCard.value = static_cast<Value>(9);

			std::cout << printCards(myCard) << std::endl;
		}
	}
	
}

