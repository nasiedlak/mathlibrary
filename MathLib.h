/**
 * @Author: Cooper Nasiedlak
 * @NETID: nasiedlak
 * @ID#: 9082213803
 * @Source(s): GeeksforGeeks.org, JournalDev.com, & StacKOverflow.com
 */

#ifndef MATHLIB_FUNCTIONS_H
#define MATHLIB_FUNCTIONS_H
#include <iostream>

/**
 * This enumeration contains all possible rounding rules. The default rule is ROUND_HALF_UP.
 */
enum RoundingRule { ROUND_HALF_UP = 0, ROUND_DOWN = 1, ROUND_UP = 2, ROUND_TO_ZERO = 3, ROUND_AWAY_ZERO = 4,
        ROUND_HALF_DOWN = 5, ROUND_HALF_TO_ZERO = 6, ROUND_HALF_AWAY_ZERO = 7, ROUND_HALF_TO_EVEN = 8, ROUND_HALF_TO_ODD = 9};

/**
 * This function returns the absolute value of the parameter.
 * @param E will have its absolute value found.
 * @return the absolute value of int parameter E.
 */
int absVal(int E);

/**
 * This function returns the absolute value of the parameter.
 * @param E will have its absolute value found.
 * @return the absolute value of long parameter E.
 */
long absVal(long E);

/**
 * This function returns the absolute value of the parameter.
 * @param E will have its absolute value found.
 * @return the absolute value of double parameter E.
 */
double absVal(double E);

/**
 * This function returns the smallest possible integral value not smaller than the parameter.
 * @param E the number for which this function finds the ceiling.
 * @return the smallest possible integral value not smaller than the parameter.
 */
long ceiling(double E);

/**
 * This function returns the largest possible integral value not larger than the parameter.
 * @param E the number for which this function finds the floor.
 * @return the largest possible integral value not larger than the parameter.
 */
long floor(double E);

/**
 * This function rounds the double parameter based on the RoundingRule parameter.
 * @param E the double to be rounded.
 * @param R the rounding rule to be followed.
 * @return
 */
long round(double E, RoundingRule R);

/**
 * This functions raises the double parameter to the long parameter exponent.
 * @param E the double to be powered.
 * @param L the exponent of the power.
 * @return the double parameter raised to the power of the long exponent.
 */
double pow(double E, long L);

/**
 * This function build an std::string representation of num using the radix as the numerical base.
 * @param num the integer to have an std:: string representation created.
 * @param radix the numerical base.
 * @param B tells if the resulting string contain capitals or not.
 * @return a string representation of num using radix as the numerical base.
 */
std::string toString(int num, unsigned int radix = 10, bool B = true);

/**
 * This function returns the greatest common divisor of the two parameters.
 * @param x
 * @param y
 * @return the greatest common divisor of parameter x and parameter y.
 */
int gcd(int x, int y);

#endif /* MATHLIB_FUNCTIONS_H */