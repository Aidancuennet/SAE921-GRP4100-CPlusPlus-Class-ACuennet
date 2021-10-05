#pragma once
#pragma once
#include <string>

//Values of the cards
enum class Value : int
{
    
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
	Ace,

    nbValues
};

//suit of the Cards
enum class Suit
{
    Spades,
    Diamonds,
    Hearts,
    Clubs,

    nbSuits
};

class Card
{
    Value value;
    Suit suit;

public:
    Card(int, int);
    void print();
};
