# Naive_primes
A simple algorithm to check for prime numbers.
How it works:
//Explanation for the Prime function
Takes in 2 inputs a Threshold (A): you check if it is a prime number and a flag (a) to tell you if a number is prime or not
//Inside the function
You declare the flag to be 0
In a for loop you check iteratively from 2 up to sqrt(A) for the lowest divisor of A call it ppd(A) (if you didn't find it in this interval perhaps you won't find it)
    =>You find ppd(A), the flag a will become 1
You check the flag:
  The flag is still 0: print the number A is prime
