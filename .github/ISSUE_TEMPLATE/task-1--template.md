---
name: 'Task 1: Yielding the Fibonacci Sequence'
about: Task 1 for Students
title: 'Task 1: Yielding the Fibonacci Sequence'
labels: enhancement, good first issue
assignees: ''

---

**Description**

Define and implement a function named `nextFibonacciNumber()` to pass the
given task1 tests.  This function should take a boolean flag as an input
parameter, that defaults to `false`, which indicates whether the sequence
should be reset or not.  This function should return an integer value, 
by calculating the next value in the Fibonacci sequence and returning it.
In order to remember the previous two values so you can calculate the next
one in the sequence, you will need to declare two statically allocated
local variables in this function.

You need to do the following steps:

1. As usual start by declaring the prototype of this function and adding to the
   assignment header file, then a stub implementation that returns 0 in the
   implementation file, and then enable the task 1 tests and ensure code
   compiles and runs.
2. Make sure you are passing in a `bool` parameter to this function that defaults
   to `false`.
3. Create two statically allocated local variables to hold the two previous
   remembered values of the sequence.
4. When the reset flag is false, you should initialize the static variables to
   0 and 1 for the start of the sequence, and return 1.
5. When the reset flag is true you need to generate and return the next value
   of the sequence using the remembered previous two values:
   - Also before you return you have to shift the values to now remember 
     the one you just generated and the one before that as the previous 2 values of
	 the sequence.

**Suggested Solution**

You will need a condition statement that checks the reset flag parameter.  When it is true,
you should initialize your two statically allocated local variables to 0 and 1 and return the
first 1 of the Fibonacci sequence.

When the reset flag is false, you need to calculate the next value in
the sequence from the previous two rememberd values.  But before you return you need
to update the previous two rememberd values of the sequence correctly.

**Additional Requirements**

- You are required to define a default parameter of type `bool` that indicates whether
  the sequence should be reset and start from the beginning or not.
- You are required to use statically allocated variables declared in the scope of this
  function.  You may not use global variables here.


