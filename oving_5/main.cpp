#include "std_lib_facilities.h"
#include "Card.h"

int main() {
    Rank r = Rank::king;
    Suit s = Suit::hearts;
    string rank = rankToString(r);
    string suit = suitToString(s);
    cout << "Rank: " << rank << " Suit: " << suit << endl;
    return 0;
}