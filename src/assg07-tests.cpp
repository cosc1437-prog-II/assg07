/** @file assg07-tests.cpp
 *
 * @brief Unit tests for Assignment 07: Static Variables, Default Parameters and Function Overloading
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   September 15, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "assg07-library.hpp"
#include "catch.hpp"
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3
#define predefined

/** nextFibonacciNumber() test cases
 * Create a function called nextFibonacciNumber() to pass
 * the following tests as described in the assignment description.
 */
#ifdef task1
TEST_CASE("Task 1 <nextFibonacciNumber()> tests", "[task1]")
{
  // have to reset the sequence to ensure initialized, by
  // default will return fib_1 == 1
  CHECK(nextFibonacciNumber(true) == 1);

  // after reset we should have set fib_0 = 0 and fib_1 = 1 and start
  // generating from fib_2, so sequence 1, 2, 3, 5, 8, 13, 21, 34...
  CHECK(nextFibonacciNumber() == 1);
  CHECK(nextFibonacciNumber() == 2);
  CHECK(nextFibonacciNumber() == 3);
  CHECK(nextFibonacciNumber() == 5);
  CHECK(nextFibonacciNumber() == 8);
  CHECK(nextFibonacciNumber() == 13);
  CHECK(nextFibonacciNumber() == 21);
  CHECK(nextFibonacciNumber() == 34);
  CHECK(nextFibonacciNumber() == 55);
  CHECK(nextFibonacciNumber() == 89);
  CHECK(nextFibonacciNumber() == 144);
  CHECK(nextFibonacciNumber() == 233);
  CHECK(nextFibonacciNumber() == 377);

  // test reset in middle of sequence begins generating from fib_1 again
  CHECK(nextFibonacciNumber(true) == 1);
  CHECK(nextFibonacciNumber() == 1);
  CHECK(nextFibonacciNumber() == 2);
  CHECK(nextFibonacciNumber() == 3);
  CHECK(nextFibonacciNumber() == 5);
  CHECK(nextFibonacciNumber() == 8);
  CHECK(nextFibonacciNumber() == 13);
  CHECK(nextFibonacciNumber() == 21);
  CHECK(nextFibonacciNumber() == 34);
  CHECK(nextFibonacciNumber() == 55);
  CHECK(nextFibonacciNumber() == 89);
  CHECK(nextFibonacciNumber() == 144);
  CHECK(nextFibonacciNumber() == 233);
  CHECK(nextFibonacciNumber() == 377);
  CHECK(nextFibonacciNumber() == 610);
  CHECK(nextFibonacciNumber() == 987);
}
#endif


/** swap() char test cases
 * Create an overloaded function called swap() to pass
 * the following tests as described in the assignment description.
 */
#ifdef task2
TEST_CASE("Task 2 <swap()> of char parameters> tests", "[task2]")
{
  // to pass by value, we need local variables
  char a;
  char b;

  // swap two values
  a = 'C';
  b = 'M';
  swap(a, b);
  CHECK(a == 'M');
  CHECK(b == 'C');

  // and swap back
  swap(a, b);
  CHECK(a == 'C');
  CHECK(b == 'M');

  // a few more tests
  char c = 'X';
  swap(a, c);
  CHECK(a == 'X');
  CHECK(b == 'M');
  CHECK(c == 'C');

  swap(a, b);
  CHECK(a == 'M');
  CHECK(b == 'X');
  CHECK(c == 'C');

  swap(b, c);
  CHECK(a == 'M');
  CHECK(b == 'C');
  CHECK(c == 'X');

  // everything back to where we started
  swap(a, b);
  CHECK(a == 'C');
  CHECK(b == 'M');
  CHECK(c == 'X');
}
#endif


/** threeSort() of char test cases
 * Create a function called threeSort() to pass
 * the following tests as described in the assignment description.
 */
#ifdef task2
TEST_CASE("Task2 <threeSort()> of char parameters  tests", "[task2]")
{
  char a, b, c;

  // already sorted
  a = 'x'; b = 'y'; c = 'z';
  threeSort(a, b, c);
  CHECK(a == 'x');
  CHECK(b == 'y');
  CHECK(c == 'z');
  
  // in reverse order
  a = 'z'; b = 'y'; c = 'x';
  threeSort(a, b, c);
  CHECK(a == 'x');
  CHECK(b == 'y');
  CHECK(c == 'z');


  // all other possible permutations
  a = 'x'; b = 'z'; c = 'y';
  threeSort(a, b, c);
  CHECK(a == 'x');
  CHECK(b == 'y');
  CHECK(c == 'z');

  a = 'y'; b = 'z'; c = 'x';
  threeSort(a, b, c);
  CHECK(a == 'x');
  CHECK(b == 'y');
  CHECK(c == 'z');

  a = 'y'; b = 'x'; c = 'z';
  threeSort(a, b, c);
  CHECK(a == 'x');
  CHECK(b == 'y');
  CHECK(c == 'z');

  a = 'z'; b = 'x'; c = 'y';
  threeSort(a, b, c);
  CHECK(a == 'x');
  CHECK(b == 'y');
  CHECK(c == 'z');
}
#endif


/** swap() string test cases
 * Create an overloaded function called swap() to pass
 * the following tests as described in the assignment description.
 */
#ifdef task3
TEST_CASE("Task 3 <swap()> of string parameters> tests", "[task3]")
{
  // to pass by value, we need local variables
  string a;
  string b;

  // swap two values
  a = "California";
  b = "Michigan";
  swap(a, b);
  CHECK(a == "Michigan");
  CHECK(b == "California");

  // and swap back
  swap(a, b);
  CHECK(a == "California");
  CHECK(b == "Michigan");

  // a few more tests
  string c = "Wyoming";
  swap(a, c);
  CHECK(a == "Wyoming");
  CHECK(b == "Michigan");
  CHECK(c == "California");

  swap(a, b);
  CHECK(a == "Michigan");
  CHECK(b == "Wyoming");
  CHECK(c == "California");

  swap(b, c);
  CHECK(a == "Michigan");
  CHECK(b == "California");
  CHECK(c == "Wyoming");

  // everything back to where we started
  swap(a, b);
  CHECK(a == "California");
  CHECK(b == "Michigan");
  CHECK(c == "Wyoming");
}
#endif


/** threeSort() of string test cases
 * Create a function called threeSort() to pass
 * the following tests as described in the assignment description.
 */
#ifdef task3
TEST_CASE("Task3 <threeSort()> of string parameters tests", "[task3]")
{
  string a, b, c;

  // already sorted
  a = "Alabama"; b = "Connecticut"; c = "Delaware";
  threeSort(a, b, c);
  CHECK(a == "Alabama");
  CHECK(b == "Connecticut");
  CHECK(c == "Delaware");
  
  // in reverse order
  a = "Delaware"; b = "Connecticut"; c = "Alabama";
  threeSort(a, b, c);
  CHECK(a == "Alabama");
  CHECK(b == "Connecticut");
  CHECK(c == "Delaware");


  // all other possible permutations
  a = "Alabama"; b = "Delaware"; c = "Connecticut";
  threeSort(a, b, c);
  CHECK(a == "Alabama");
  CHECK(b == "Connecticut");
  CHECK(c == "Delaware");

  a = "Connecticut"; b = "Delaware"; c = "Alabama";
  threeSort(a, b, c);
  CHECK(a == "Alabama");
  CHECK(b == "Connecticut");
  CHECK(c == "Delaware");

  a = "Connecticut"; b = "Alabama"; c = "Delaware";
  threeSort(a, b, c);
  CHECK(a == "Alabama");
  CHECK(b == "Connecticut");
  CHECK(c == "Delaware");

  a = "Delaware"; b = "Alabama"; c = "Connecticut";
  threeSort(a, b, c);
  CHECK(a == "Alabama");
  CHECK(b == "Connecticut");
  CHECK(c == "Delaware");
}
#endif


/** swap() test cases
 * Create a function called swap() to pass
 * the following tests as described in the assignment description.
 */
#ifdef predefined
TEST_CASE("Predefined <swap()> of int parameters> tests", "[predefined]")
{
  // to pass by value, we need local variables
  int a;
  int b;

  // swap two values
  a = 5;
  b = 10;
  swap(a, b);
  CHECK(a == 10);
  CHECK(b == 5);

  // and swap back
  swap(a, b);
  CHECK(a == 5);
  CHECK(b == 10);

  // a few more tests
  int c = 42;
  swap(a, c);
  CHECK(a == 42);
  CHECK(b == 10);
  CHECK(c == 5);

  swap(a, b);
  CHECK(a == 10);
  CHECK(b == 42);
  CHECK(c == 5);

  swap(b, c);
  CHECK(a == 10);
  CHECK(b == 5);
  CHECK(c == 42);

  // everything back to where we started
  swap(a, b);
  CHECK(a == 5);
  CHECK(b == 10);
  CHECK(c == 42);
}
#endif


/** threeSort() test cases
 * Create a function called threeSort() to pass
 * the following tests as described in the assignment description.
 */
#ifdef predefined
TEST_CASE("Predefined <threeSort()> of int parameters  tests", "[predefined]")
{
  int a, b, c;

  // already sorted
  a = 1; b = 2; c = 3;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);
  
  // in reverse order
  a = 3; b = 2; c = 1;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);


  // all other possible permutations
  a = 1; b = 3; c = 2;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);

  a = 2; b = 3; c = 1;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);

  a = 2; b = 1; c = 3;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);

  a = 3; b = 1; c = 2;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);
}
#endif
