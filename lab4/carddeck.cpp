#include <carddeck.h>

card::card(suits suit, ranks rank)
{
	this->suit = suit;
	this->rank = rank;
}

string card::getSuit()
{
	return translateSuit[(int)this->suit];
}

string card::getRank()
{
	return translateRanks[(int)this->rank - 2];
}

CardDeck::CardDeck()
{
	suits insertSuit = suits::clubs;
	ranks insertRank = ranks::two;
	int deckPosition = 0;
	for (int i = 0; i < 4; i++)
	{
		insertSuit = (suits)i;
		for (int y = 2; y < 15; y++)
		{	
			insertRank = (ranks)y;
			cards[deckPosition] = new card(insertSuit, insertRank);
			deckPosition++;
		}
	}
	cards[52] = new card(suits::Joker, ranks::Joker);
	cards[53] = new card(suits::Joker, ranks::Joker);
	cards[54] = new card(suits::Joker, ranks::Joker);
}

CardDeck::~CardDeck()
{
	delete[] *cards;
}

void CardDeck::printCards()
{
	for (int i = 0; i < 55; i++)
	{
		cout << this->cards[i]->getRank() << " of " << this->cards[i]->getSuit() << endl;
	}

}