#include <iostream>
#include <string>
#include <array>

enum class Value : int
{
    Two = 2,
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
    Ace
};

enum class Suit : int
{
    Spades = 1,
    Coeur,
    Carreau,
    Clubs
};

struct Card {
    Value value;
    Suit suit;

};

std::string printValues(Value value_) {

    switch (value_)
    {
    case Value::Two:
        return "Two";
        break;
    case Value::Three:
        return "Three";
        break;
    case Value::Four:
        return "Four";
        break;
    case Value::Five:
        return "Five";
        break;
    case Value::Six:
        return "Six";
        break;
    case Value::Seven:
        return "Seven";
        break;
    case Value::Eight:
        return "Eight";
        break;
    case Value::Nine:
        return "Nine";
        break;
    case Value::Ten:
        return "Ten";
        break;
    case Value::Jack:
        return "Jack";
        break;
    case Value::Queen:
        return "Queen";
        break;
    case Value::King:
        return "King";
        break;
    case Value::Ace:
        return "Ace";
        break;
    default:
        return "Default";
        break;
    }

}

std::string printSuits(Suit suit_) {

    switch (suit_)
    {
    case Suit::Spades:
        return "Spades";
        break;
    case Suit::Coeur:
        return "Hearts";
        break;
    case Suit::Carreau:
        return "Diamonds";
        break;
    case Suit::Clubs:
        return "Clubs";
        break;
    default:
        return "Default";
        break;
    }

}

std::string printCards(Card card_) {
    return printValues(card_.value) + " of " + printSuits(card_.suit);
}

int main()
{
    std::array<Card, 52> deck{};
    int deckDeal = 0;

    for (int s{ 1 }; s <= 4; s++) {

        for (int v{ 2 }; v <= 14; v++) {

            Card myCard;
            myCard.suit = static_cast<Suit>(s);
            myCard.value = static_cast<Value>(v);

            deck.at(deckDeal) = myCard;
            deckDeal++;

        }
    }


    srand(time(NULL));
    std::array<int, 5> cardIndexes{};
    cardIndexes.fill(-1);

    for (int n{ 0 }; n < 5; n++) {
        int idxCardTemp = rand() % 52;

        bool trouve = false;
        for (auto iCard : cardIndexes) {
            if (iCard == idxCardTemp) {
                trouve = true;
                break;
            }
        }

        if (!trouve) {
            cardIndexes.at(n) = idxCardTemp;
            std::cout << printCards(deck.at(idxCardTemp)) << std::endl;
        }
    }

}
