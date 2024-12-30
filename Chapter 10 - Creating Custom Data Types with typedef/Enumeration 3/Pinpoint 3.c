#include <stdio.h>

// First define some enumerated types.
enum Face { eOne, eTwo, eThree };
enum Suit { eSpade, eHeart };

// Then, declare variabels of those types. 
enum Face f1, f2;
enum Suit s1, s2;

/* Another way to achieve the same result : */

// Defining an enumeration and declaring variables of that type at the same time.
enum Face2 { eOne1, eTwo2, eThree3 } F1, F2;
enum Suit2 { eSpade1, eHeart2 } S1, S2;

int main() {

	f1 = eOne;

	s1 = eSpade;

	F1 = eTwo;

	S2 = eHeart;

	printf("%d \n %d \n %d \n %d \n %d \n", f1, s1,F1, S2);
}