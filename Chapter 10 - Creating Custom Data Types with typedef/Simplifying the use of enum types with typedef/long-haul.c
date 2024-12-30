// First define some enumerated types.
enum Face{eOne, eTwo, eThree};
enum Suit{eSpade, eHeart};

// Then, declare variabels of those types. 
enum Face f1, f2;
enum Suit s1, s2;

/* Another way to achieve the same result : */

// Defining an enumeration and declaring variables of that type at the same time.
enum Face2{eOne, eTwo, eThree} F1, F2;
enum Suit2{eSpade, eHeart} S1, S2; // [Note1]


/*The situation is quite different, however, when typedef is thrown into the mix.*/

/*The syntax for using typedef in enumerations has three forms.*/

// The first form 
enum name {enumeration1, enumeration2, enumerationN};

typedef enum name synonym_name;

typedef enum Face Face;
typedef enum Suit Suit;

Face face;
face = eThree;

Suit suit = eSpade;

// Notes:
// 1. "C distinguishes between uppercase and lowercase letters 
// so that date is different from Date."[1]

// References:
// 1. Book: Learn to Program with C.