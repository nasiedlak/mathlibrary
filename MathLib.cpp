/**
 * @Author: Cooper Nasiedlak
 * @NETID: nasiedlak
 * @ID#: 9082213803
 * @Source(s): GeeksforGeeks.org, JournalDev.com, & StacKOverflow.com
 */

#include "MathLib.h"

int absVal(int E)
{
    if(E >= 0) { return E; }
    return -1 * E;
}

long absVal(long E)
{
    if(E >= 0) { return E; }
    return -1 * E;
}

double absVal(double E)
{
    if(E >= 0) { return E; }
    return -1 * E;
}

long ceiling(double E)
{
    if(E <= 0) { return -1 * floor(absVal(E)); }

    // e.g. E = 42 returns 42 not 43
    else if(E - (static_cast <int> (E)) == 0) { return E; }

    return static_cast <int> (E) + 1;
}

long floor(double E)
{
    if(E < 0) { return -1 * ceiling(absVal(E)); }
    return static_cast <int> (E);
}

long round(double E, RoundingRule R)
{
    // rounds the double parameter using the given rounding rule
    if(R == 1) { return floor(E); }
    else if(R == 2) { return ceiling(E); }
    else if(R == 3)
    {
        if(E < 0) { return ceiling(E); }
        return floor(E);
    }
    else if(R == 4)
    {
        if(E < 0) { return floor(E); }
        return ceiling(E);
    }
    else if(R == 0 || R == (5) || R == (6) || R == (7) || R == (8) || R == (9))
    {
        if(absVal(E) - absVal(static_cast <int> (E)) < 0.5)
        {
            if(E < 0) { return ceiling(E); }
            return floor(E);
        }
        else if(absVal(E) - absVal(static_cast <int> (E)) > 0.5)
        {
            if(E < 0) { return floor(E); }
            return ceiling(E);
        }
    }

    // this chunk of code is reached if and only if the decimal of the double is 0.5
    // rounds the double to the selected tiebreaker
    if(R == 0) { return ceiling(E); }
    else if(R == 5) { return floor(E); }
    else if(R == 6) { return round(E, ROUND_TO_ZERO); }
    else if(R == 7) { return round(E, ROUND_AWAY_ZERO); }
    else if(R == 8)
    {
        if (E < 0)
        {
            if ((static_cast <int> (E) % 2) == 0) { return static_cast <int> (E); }
            return static_cast <int> (E) - 1;
        }
        if ((static_cast <int> (E) % 2) == 0) { return static_cast <int> (E); }
        return static_cast <int> (E) + 1;
    }

    if(E < 0)
    {
        if ((static_cast <int> (E) % 2) == -1) { return static_cast <int> (E); }
        return static_cast <int> (E) - 1;
    }
    if ((static_cast <int> (E) % 2) == 1) { return static_cast <int> (E); }
    return static_cast <int> (E) + 1;
}

double pow(double E, long L)
{
    // base case
    if(L == 0) { return 1.0; }

    double total = E;
    for(int i = 1; i < absVal(L); i++) { total = total * E; }

    // in the case the exponent is negative
    if(L < 0) { return 1 / total; }

    return total;
}

// is not fully implemented
std::string toString(int num, unsigned int radix, bool B)
{
    char returnString[1000];
    int index = 0;
    int numberOfDigits = 0;

    // only base-10 negative integers can be handled
    if(num < 0 && radix == 10)
    {
        numberOfDigits++;
        returnString[index++] = '-';
        num = absVal(num);
    }

    // finds the number of digits in the integer
    int numX = num;
    do
    {
        numberOfDigits++;
        numX = numX / radix;
    } while(numX);

    if(num < 0) { return 0; }

    while(index < numberOfDigits)
    {
        int base = static_cast <int> (pow(radix, numberOfDigits - 1 - index));
        int digit = num / base;
        returnString[index] = digit + 48;
        index++;
        num -= base * digit;
    }
    returnString[index] = '\0';
    return returnString;
}

int gcd(int x, int y)
{
    // base case
    if(x == 0 && y == 0) { return 0; }
    if(x == 0 || y == 0) { return std::max(x, y); }

    // recursive call to find the greatest common multiple
    return gcd(absVal(y), absVal(x) % absVal(y));
}