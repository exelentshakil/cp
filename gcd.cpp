// Greatest Common Divisor (GCD)
// The GCD of two numbers is the largest integer that divides both numbers without leaving a remainder.

// Math Logic:
// The Euclidean Algorithm is used to find the GCD of two numbers a and b. It works as follows:
// If b == 0, then gcd(a, b) = a.
// Otherwise, compute gcd(b, a % b), where % is the modulus operator.
// The idea behind the algorithm is that the GCD of two numbers doesn't change if you replace the larger number with its remainder when divided by the smaller number.
// Example:
// To find gcd(48, 18):
// scss
// Copy code
// gcd(48, 18) = gcd(18, 48 % 18) = gcd(18, 12)
// gcd(18, 12) = gcd(12, 18 % 12) = gcd(12, 6)
// gcd(12, 6) = gcd(6, 12 % 6) = gcd(6, 0)
// gcd(6, 0) = 6
// So, the GCD of 48 and 18 is 6.

// Code:
// cpp
// Copy code
// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
