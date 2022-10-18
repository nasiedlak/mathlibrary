/**
 * @Author: Cooper Nasiedlak
 */

#include "MathLib.h"
#include <iostream>
using namespace std;

int main()
{
    // testing absVal() on int, double, & long types
    int x1 = -10;
    double x2 = -10.12345;
    long x3 = -2147483648;

    cout << "absVal() negative testing: " << "\n";
    cout << "The absolute value of "<< x1 << " is: " << absVal(x1) << "\n";
    cout << "The absolute value of "<< x2 << " is: " << absVal(x2) << "\n";
    cout << "The absolute value of "<< x3 << " is: " << absVal(x3) << "\n";
    cout << "\n";

    // same as above except all values are positive
    int x4 = 10;
    double x5 = 10.12345;
    long x6 = 2147483648;

    cout << "absVal() positive testing: " << "\n";
    cout << "The absolute value of "<< x4 << " is: " << absVal(x4) << "\n";
    cout << "The absolute value of "<< x5 << " is: " << absVal(x5) << "\n";
    cout << "The absolute value of "<< x6 << " is: " << absVal(x6) << "\n";
    cout << "\n";

    // testing ceiling() on positive and negative double types
    double y1 = 3;
    double y2 = -3.8;

    cout << "ceiling() testing: " << "\n";
    cout << "The ceiling of " << y1 << " is: " << ceiling(y1) << "\n";
    cout << "The ceiling of " << y2 << " is: " << ceiling(y2) << "\n";
    cout << "\n";

    // testing floor() on positive and negative double types
    double z1 = 3.8;
    double z2 = -3.8;

    cout << "floor() testing: " << "\n";
    cout << "The floor of " << z1 << " is: " << floor(z1) << "\n";
    cout << "The floor of " << z2 << " is: " << floor(z2) << "\n";
    cout << "\n";

    // testing round() on positive and negative double types
    double a1 = 3.8;
    double a2 = -3.8;
    double a3 = 3.3;
    double a4 = -3.3;
    double a5 = 3.5;
    double a6 = -3.5;

    cout << "round() UP/DOWN testing: " << "\n";
    cout << "Rounding " << a1 << " down is: " << round(a1, ROUND_DOWN) << "\n";
    cout << "Rounding " << a2 << " up is: " << round(a2, ROUND_UP) << "\n";
    cout << "\n";

    cout << "round() TO/AWAY FROM ZERO testing: " << "\n";
    cout << "Rounding " << a1 << " to zero is: " << round(a1, ROUND_TO_ZERO) << "\n";
    cout << "Rounding " << a2 << " away from zero is: " << round(a2, ROUND_AWAY_ZERO) << "\n";
    cout << "\n";

    cout << "round() HALF_* testing: " << "\n";
    cout << "Rounding " << a1 << " is: " << round(a1, ROUND_HALF_UP) << "\n";
    cout << "Rounding " << a2 << " is: " << round(a2, ROUND_HALF_UP) << "\n";
    cout << "Rounding " << a3 << " is: " << round(a3, ROUND_HALF_UP) << "\n";
    cout << "Rounding " << a4 << " is: " << round(a4, ROUND_HALF_UP) << "\n";
    cout << "\n";

    cout << "round() HALF_* TIEBREAKER testing: " << "\n";
    cout << "Rounding " << a5 << " with HALF_UP TIEBREAKER is: " << round(a5, ROUND_HALF_UP) << "\n";
    cout << "Rounding " << a6 << " with HALF_DOWN TIEBREAKER is is: " << round(a6, ROUND_HALF_DOWN) << "\n";

    cout << "Rounding " << a5 << " with TO_ZERO TIEBREAKER is: " << round(a5, ROUND_HALF_TO_ZERO) << "\n";
    cout << "Rounding " << a6 << " with AWAY_ZERO TIEBREAKER is is: " << round(a6, ROUND_HALF_AWAY_ZERO) << "\n";

    cout << "Rounding " << a5 << " with TO_EVEN TIEBREAKER is: " << round(a5, ROUND_HALF_TO_EVEN) << "\n";
    cout << "Rounding " << a6 << " with TO_ODD TIEBREAKER is is: " << round(a6, ROUND_HALF_TO_ODD) << "\n";
    cout << "\n";

    // testing pow() with negative and positive double types
    double b1 = 2.5;
    long b1p = 4;
    double b2 = 2;
    long b2p = -4;

    cout << "pow() testing: " << "\n";
    cout << b1 << " to the power of " << b1p << " is: " << pow(b1, b1p) << "\n";
    cout << b2 << " to the power of " << b2p << " is: " << pow(b2, b2p) << "\n";
    cout << "\n";

//    // testing toString() with negative/positive int types, different bases, and capitalization
//    int c1 = 5;
//    int c1n = -5;
//    int c1b = 10;
//    bool c1bool = true;
//
//    cout << "toString() testing: " << "\n";
//    cout << "The base " << c1b << " representation of " << c1 << " is: " << toString(c1, c1b, c1bool) << "\n";
//    cout << "The base " << c1b << " representation of " << c1n << " is: " << toString(c1n, c1b, c1bool) << "\n";
//    cout << "\n";

    // testing gcd() with negative and positive int types
    int d1 = 110;
    int d2 = 50;
    int d3 = 0;
    int d4 = -110;

    cout << "gcd() testing: " << "\n";
    cout << "The greatest common divisor of " << d1 << " and " << d2 << " is: " << gcd(d1, d2) << "\n";
    cout << "The greatest common divisor of " << d1 << " and " << d3 << " is: " << gcd(d1, d3) << "\n";
    cout << "The greatest common divisor of " << d3 << " and " << d2 << " is: " << gcd(d3, d2) << "\n";
    cout << "The greatest common divisor of " << d3 << " and " << d3 << " is: " << gcd(d3, d3) << "\n";
    cout << "The greatest common divisor of " << d4 << " and " << d2 << " is: " << gcd(d4, d2) << "\n";
    cout << "\n";

    // testing toString()
    int num = 16;
    int base = 2;

    cout << "toString() testing: " << "\n";
    cout << "The base " << base << " value of " << num << " is: " << toString(num, base);
    cout << "\n";
}
