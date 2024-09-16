/** @file assg07-library.cpp
 *
 * @brief Implementation file for Assignment 07: Static Variables, Default Parameters and Function Overloading
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   September 15, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */
#include <string>
using namespace std;


/** @brief return the next Fibonacci number
 *
 * The Fibonacci sequence is defined usually as
 *
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
 *
 * Where
 *
 *   fib_n = fib_(n-1) + fib_(n-2)
 *   fib_0 = 0
 *   fib_1 = 1
 *
 * e.g. the next Fibonacci number in the sequence is defined as the
 * sum of the previous two numbers in the sequence, with 0 and 1 being
 * the 0th and 1st term by definition of the sequence.
 * 
 * This funciton, when called, returns the next number in the Fibonacci
 * sequence.  We remember our previous two numbers generated (using
 * static variables).  A default parameter can be overridden to reset
 * the sequence, to continue returning number starting at fib_1.
 *
 * @param resetSequence When false we just generate and return the next
 *    Fibonacci number in the sequence.  When true we reset to the
 *    start of the sequence and return fib_1 (the 1st value in the
 *    sequence).
 *
 * @returns int Remembers and on repeated calls generates and returns
 *    the next Fibonacci number in the sequence.  Can be called with
 *    the reset flag parameter to reset and begin generating from the start
 *    of the sequence again.
 */
// your implementation of task 1 nextFibonacciNumber() goes here


/** @brief swap two given integer values in memory
 *
 * Given two integer values, swap their locations
 * in memory.  We can do this because the parameters
 * are passed by reference, so when we modify them
 * in this function, we are modifying the original
 * values passed to us.
 *
 * @param a A reference to a value in memory to be swapped with
 *    some other value.
 * @param b A second reference to a value in memory to be swapped.
 *
 * @returns void This is a void function.  Our work is returned
 *    implicitly by swapping the values in the referenced memory
 *    locations a and b.
 */
void swap(int& a, int& b)
{
  // need to save a value temporarily so we can move things
  // around successfully.
  int temp = a;
  a = b;
  b = temp;
}


/** @brief sort three values in ascending order
 *
 * Given three integer values, passed in by reference,
 * cause the three values to be sorted in the
 * variables with the smallest value in the first
 * parameter a, the largest in the last c, and the
 * in between one in b.
 *
 * @param a A reference to a value in memory to compared and sorted.
 * @param b A reference to a value in memory to compared and sorted.
 * @param c A reference to a value in memory to compared and sorted.
 *
 * @returns void This is a void function.  Our work is returned
 *    implicitly by comparing and sorting the 3 values into
 *    ascending order, smallest in a, largest in c and in between
 *    value in b.
 */
void threeSort(int& a, int& b, int& c)
{
  // swap a, b if out of order, guarantees larger of the two is now in b
  if (a > b)
  {
    swap(a, b);
  }

  // swap b, c if out of order, guarantees that largest values has been
  // now bubbled to c
  if (b > c)
  {
    swap(b, c);
  }

  // it is still possible after this "bubble pass" that a and b are out of
  // order, so check and swap them if needed
  if (a > b)
  {
    swap(a, b);
  }
}
