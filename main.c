//C "Hello, World!" Program

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

//C Program to Print an Integer (Entered by the User)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("the number is %d",n);
    return 0;
}

//C Program to Add Two Integers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum=0;
    printf("Enter the two number\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("the addition of two number is %d",sum);
    return 0;
}

//C Program to Multiply Two Floating-Point Numbers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,multi=1;
    printf("Enter the two number\n");
    scanf("%f%f",&a,&b);
    multi=a*b;
    printf("the multiplication of two number is %f",multi);
    return 0;
}

//C Program to Find ASCII Value of a Character

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    printf("ASCII Value of a Character %c is %d",c,c);
    return 0;
}

//C Program to Compute Quotient and Remainder

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividend,divisor,quotient,reaminder;
    printf("Enter dividend\n");
    scanf("%d",&dividend);
    printf("Enter divisor\n");
    scanf("%d",&divisor);
    quotient = dividend / divisor;
    reaminder = dividend%divisor;
    printf("the quotient is %d\n",quotient);
    printf("the remainder is %d\n",reaminder);
    return 0;
}

//C Program to Find the Size of int, float, double and char

#include<stdio.h>
int main() {
    int a;
    float b;
    double c;
    char d;
    printf("Size of int: %zu\n", sizeof(a));
    printf("Size of float: %zu\n", sizeof(b));
    printf("Size of double: %zu\n", sizeof(c));
    printf("Size of char: %zu\n", sizeof(d));
    return 0;
}

//C Program to Demonstrate the Working of Keyword long

#include <stdio.h>
int main() {
    int a;
    long b;
    long long c;
    double e;
    long double f;
    printf("Size of int = %zu bytes \n", sizeof(a));
    printf("Size of long int = %zu bytes\n", sizeof(b));
    printf("Size of long long int = %zu bytes\n", sizeof(c));
    printf("Size of double = %zu bytes\n", sizeof(e));
    printf("Size of long double = %zu bytes\n", sizeof(f));

    return 0;
}


//C Program to Swap Two Numbers

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    printf("Enter the two number\n");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap number a is %d and b is %d",a,b);
    return 0;
}

//C Program to Check Whether a Number is Even or Odd

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("it is a even number");
    }
    else
    {
        printf("it is a odd number");
    }
    return 0;
}

//C Program to Check Whether a Character is a Vowel or Consonant

#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}

//C Program to Find the Largest Number Among Three Numbers

#include <stdio.h>
int main() {
    double n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if (n1 >= n2 && n1 >= n3)
        printf("%.2f is the largest number.", n1);
    if (n2 >= n1 && n2 >= n3)
        printf("%.2f is the largest number.", n2);
    if (n3 >= n1 && n3 >= n2)
        printf("%.2f is the largest number.", n3);

    return 0;
}

//C Program to Check Leap Year

#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}

//C Program to Check Whether a Number is Positive or Negative

#include <stdio.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    } else
        printf("You entered a positive number.");
    return 0;
}

//C Program to Check Whether a Character is an Alphabet or not

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}

//C Program to Calculate the Sum of Natural Numbers

#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

//C Program to Find Factorial of a Number

#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}

//C Program to Generate Multiplication Table

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    return 0;
}

//C Program to Display Fibonacci Sequence
#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

//C Program to Display Characters from A to Z Using Loop

#include <stdio.h>
int main() {
    char c;
    for (c = 'A'; c <= 'Z'; ++c)
        printf("%c ", c);
    return 0;
}

//C Program to Count Number of Digits in an Integer

#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    while (n != 0) {
        n /= 10;     // n = n/10
        ++count;
    }
printf("Number of digits: %d", count);
}

//C Program to Reverse a Number

#include <stdio.h>
int main() {
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}

//C Program to Check Whether a Number is Palindrome or Not

#include <stdio.h>
int main() {
    int n, reversedN = 0, remainder, originalN;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalN = n;
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);

    return 0;
}

//C Program to Check Whether a Number is Prime or Not

#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}

//







