#pragma once
#include <iostream>
using namespace std;

enum class suits { clubs = 0, diamonds, hearts, spades, Joker };

enum class ranks {
	two = 2, three = 3, four = 4, five = 5, six = 6, seven = 7, eight = 8, nine = 9, ten = 10,
	Jack = 11, Queen = 12, King = 13, Ace = 14, Joker = 15};

const string translateRanks[] = { "two", "three", "four", "five", "six", "seven", "eight", "nine",
								   "ten", "Jack", "Queen", "King", "Ace", "Joker" };

const string translateSuit[] = { "clubs", "diamonds", "hearts", "spades", "Joker" };

class card
{
private:
	suits suit;
	ranks rank;

public:
	card(suits suit, ranks rank);
	string getSuit();
	string getRank();
};

class CardDeck
{
private:
	card* cards[55];
public:
	CardDeck();
	~CardDeck();
	void printCards();
};
