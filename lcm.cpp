// Least Common Multiple (LCM)
// The LCM of two numbers is the smallest number that is divisible by both a and b.

// Math Logic:
// The LCM of two numbers a and b is related to the GCD:
// css
// Copy code
// lcm(a, b) = (a * b) / gcd(a, b)
// Example:
// For a = 12 and b = 18, we first compute:
// scss
// Copy code
// gcd(12, 18) = 6
// lcm(12, 18) = (12 * 18) / 6 = 216 / 6 = 36
// Code:
// cpp
// Copy code
// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }
