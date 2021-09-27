/******************************************************************************
* File:             unsigned_even_or_odd.cc
* Description:      Takes in an size_t, and determines whether it
* is even or odd in six different ways.
*****************************************************************************/

#include <iostream>
using namespace std;

int main()
{
  size_t input;         // Declare the input
  cin >> input;         // Read from cin, write to input

  cout << (input & 1 ? "odd" : "even") << '\n';
  /* Explanation: in binary the input ends in 0 if it is even, and else in 1,
   * using the & operator we get that input & 1 gives 1 if input is odd
   * and otherwise 0. */

  cout << (input % 2 ? "odd" : "even") << '\n';
  /* Explanation: Mod 2 input is 0 if it is divisible by 2 (so even) and else 1 */

  cout << ( (input >> 1) << 1 != input ? "odd" : "even") << '\n';
  /* Explanation: If shifting all the bits one to the right
   * and then shifting back is the same as doing nothing,
   * then the number must have ended in a 0 (in binary),
   * hence it was even */

  cout << ( (input ^ 1) == input - 1 ? "odd" : "even") << '\n';
  /* If input is even, then the last digit is a 0, so the xor turns
   * it into a 1, giving input + 1, else we get input - 1*/

  cout << ( (input | 1) == input ? "odd" : "even") << '\n';
  /* If in the binary representation, the last digit is a 0,
   * then (input | 1) == input, otherwise it is input + 1 */

  cout << ( 2 * ((int) (input / 2)) == input ? "even" : "odd" ) << '\n';
  /* The (int) makes this expression into 2 * floor(n / 2) == n,
   * which is true if and only if n is even */
}
