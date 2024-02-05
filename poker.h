#pragma once
#include <iostream>
#include <string>
#include <vector>


enum class Suit { HEARTS, DIAMONDS, CLUBS, SPADES };
enum class Rank { TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };

std::wstring suitToString(Suit suit) {
    switch (suit) {
    case Suit::HEARTS: return L"\u2665";
    case Suit::DIAMONDS: return L"\u2665";
    case Suit::CLUBS: return L"\u2665";
    case Suit::SPADES: return L"\u2665";
    default: return L".";
    }
}

std::wstring rankToString(Rank rank) {
    switch (rank) {
    case Rank::TWO: return L"2";
    case Rank::THREE: return L"3";
    case Rank::FOUR: return L"4";
    case Rank::FIVE: return L"5";
    case Rank::SIX: return L"6";
    case Rank::SEVEN: return L"7";
    case Rank::EIGHT: return L"8";
    case Rank::NINE: return L"9";
    case Rank::TEN: return L"T";
    case Rank::JACK: return L"J";
    case Rank::QUEEN: return L"Q";
    case Rank::KING: return L"K";
    case Rank::ACE: return L"A";
    default: return L"x";
    }
}

std::vector SUITS = { Suit::HEARTS, Suit::DIAMONDS, Suit::CLUBS, Suit::SPADES };
std::vector RANKS = {
    Rank::TWO, Rank::THREE, Rank::FOUR, Rank::FIVE, Rank::SIX, Rank::SEVEN, Rank::EIGHT,
    Rank::NINE, Rank::TEN, Rank::JACK, Rank::QUEEN, Rank::KING, Rank::ACE,
};

class Card {
    const Rank rank;
    const Suit suit;

    Card(Rank rank, Suit suit) : rank(rank), suit(suit) {}
};

std::vector<Card> createDeck() {
    std::vector<Card> deck;
    for (const Suit& suit : SUITS) {
        for (const Rank& rank : RANKS) {
            std::wcout << rankToString(rank) << suitToString(suit) << L"\n";
        }
    }
    return deck;
}
