# This is a guide on how to learn the basics of programming in C

##### Reference Video: [C Full Course](https://www.youtube.com/watch?v=87SH2Cn0s9A)

## Real Basics

### Commenting

- A basic comment can be done with the //
- Multi line commenting with /\* \*/

### Includes

Includes are headers that we want to import to our program. This usually contains functions. Here is a list of common includes that can be utilized:

| Include                | Description                                                                                                                                       |
| ---------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------- |
| `#include <stdio.h>`   | Standard Input/Output library. Provides functions for input/output operations like `printf`, `scanf`, `fgets`, etc.                               |
| `#include <stdlib.h>`  | Standard Library. Contains functions for memory allocation, process control, conversions, and others, like `malloc`, `free`, `exit`, `atoi`, etc. |
| `#include <string.h>`  | String handling functions. Provides functions for manipulating C strings, like `strcpy`, `strcmp`, `strlen`, `strcat`, etc.                       |
| `#include <math.h>`    | Math library. Contains common mathematical functions like `sin`, `cos`, `sqrt`, `pow`, etc.                                                       |
| `#include <stdbool.h>` | Boolean type. Defines the `bool` type and `true`/`false` macros. Available since C99.                                                             |
| `#include <ctype.h>`   | Character type functions. Provides functions to test and manipulate characters, like `isalpha`, `isdigit`, `tolower`, `toupper`, etc.             |
| `#include <time.h>`    | Time functions. Contains functions for manipulating date and time, like `time`, `clock`, `difftime`, `strftime`, etc.                             |
| `#include <assert.h>`  | Diagnostics library. Provides a macro `assert` for debugging, which helps in checking assumptions in the code.                                    |
| `#include <errno.h>`   | Error handling. Defines macros for reporting and retrieving error conditions using `errno`.                                                       |
| `#include <limits.h>`  | Defines limits of integral types, like `INT_MAX`, `CHAR_MIN`, etc.                                                                                |
| `#include <float.h>`   | Defines limits of floating-point types, like `FLT_MAX`, `DBL_MIN`, etc.                                                                           |
| `#include <stddef.h>`  | Defines several useful types and macros, including `NULL`, `size_t`, and `ptrdiff_t`.                                                             |
| `#include <stdint.h>`  | Provides exact-width integer types, such as `int8_t`, `int32_t`, `uint64_t`. Available since C99.                                                 |
| `#include <signal.h>`  | Signal handling. Provides functions and macros for handling signals, like `signal`, `raise`, etc.                                                 |
| `#include <setjmp.h>`  | Provides macros for non-local jumps, like `setjmp` and `longjmp`.                                                                                 |
| `#include <stdarg.h>`  | Variable argument handling. Provides macros for handling functions with a variable number of arguments (like `printf`).                           |
| `#include <complex.h>` | Complex number arithmetic (available since C99). Provides support for complex number operations.                                                  |
| `#include <wchar.h>`   | Wide character handling. Provides functions for manipulating wide characters and strings (e.g., `wprintf`, `wcscmp`).                             |
| `#include <locale.h>`  | Locale-specific settings. Provides functions for setting and retrieving locale information.                                                       |
| `#include <iso646.h>`  | Provides alternative spellings for several operators (e.g., `and` for `&&`, `or` for `\|\|`).                                                     |

### Sequences

- \n : New line
- \t : New Tab
- `\\` : add a \
- `\'` : add a '
-
-
-

### Printing in C

- `printf();` : This is print formating

#### Place Holder Types in Prints

| Placeholder | Type                                  | Explanation                                                                                                 | Example                         |
| ----------- | ------------------------------------- | ----------------------------------------------------------------------------------------------------------- | ------------------------------- |
| `%d`        | Signed integer                        | Prints a signed integer in decimal (base 10).                                                               | `printf("%d", 42);`             |
| `%i`        | Signed integer                        | Equivalent to `%d`, but can also be used to interpret integers in different bases (when used with `scanf`). | `printf("%i", 42);`             |
| `%u`        | Unsigned integer                      | Prints an unsigned integer in decimal (base 10).                                                            | `printf("%u", 42);`             |
| `%o`        | Unsigned integer (octal)              | Prints an unsigned integer in octal (base 8).                                                               | `printf("%o", 42);`             |
| `%x`        | Unsigned integer (hexadecimal)        | Prints an unsigned integer in lowercase hexadecimal (base 16).                                              | `printf("%x", 42);`             |
| `%X`        | Unsigned integer (hexadecimal)        | Prints an unsigned integer in uppercase hexadecimal (base 16).                                              | `printf("%X", 42);`             |
| `%f`        | Floating-point (decimal notation)     | Prints a floating-point number in decimal notation (e.g., `123.456`).                                       | `printf("%f", 42.5);`           |
| `%e`        | Floating-point (scientific notation)  | Prints a floating-point number in scientific notation (e.g., `1.23456e+02`).                                | `printf("%e", 42.5);`           |
| `%E`        | Floating-point (scientific notation)  | Same as `%e`, but uses uppercase letters (e.g., `1.23456E+02`).                                             | `printf("%E", 42.5);`           |
| `%g`        | Floating-point (shorter of `%f`/`%e`) | Prints the shorter of `%f` or `%e` (removes trailing zeros).                                                | `printf("%g", 42.5);`           |
| `%G`        | Floating-point (shorter of `%f`/`%E`) | Same as `%g`, but uses uppercase letters for scientific notation.                                           | `printf("%G", 42.5);`           |
| `%c`        | Character                             | Prints a single character.                                                                                  | `printf("%c", 'A');`            |
| `%s`        | String                                | Prints a null-terminated string.                                                                            | `printf("%s", "Hello");`        |
| `%p`        | Pointer                               | Prints a pointer (memory address).                                                                          | `printf("%p", ptr);`            |
| `%%`        | Literal `%`                           | Prints a literal `%` character.                                                                             | `printf("%%");`                 |
| `%lld`      | Long long (signed)                    | Prints a `long long` integer in decimal notation.                                                           | `printf("%lld", 123456789LL);`  |
| `%llu`      | Long long (unsigned)                  | Prints an `unsigned long long` integer in decimal notation.                                                 | `printf("%llu", 123456789ULL);` |
| `%ld`       | Long (signed)                         | Prints a `long` integer in decimal notation.                                                                | `printf("%ld", 123456789L);`    |
| `%lu`       | Long (unsigned)                       | Prints an `unsigned long` integer in decimal notation.                                                      | `printf("%lu", 123456789UL);`   |
| `%lf`       | Double (floating-point)               | Prints a `double` floating-point number in decimal notation (for `scanf`, `%lf` is used for `double`).      | `printf("%lf", 42.5);`          |

### Variables

Variables : Allocated space in memory to store values. A variable first needs to be declared and then initialized.

When we declare a variable we are allocating space in memory to store the value.

```c
int number; // Declare
number = 1; // Initialize
```

But we can also allocate it and initialize it:

```c
int y = 2;
```

One interesting aspect is with Strings and how to store strings as 'text'. A string is an array or char (characters), therefor we can use the array to create a string such as:

```c

char name[] = 'String';
printf("The Name is %s", name);

```

** Variable Types: **

| Type                   | Explanation                                                                                                                                                                                                                                                                       | Minimum size (bits) | Format specifier                            | Range                     | Suffix for decimal constants |
| ---------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------- | ------------------------------------------- | ------------------------- | ---------------------------- |
| **char**               | Smallest addressable unit of the machine that can contain basic character set. It is an integer type. Actual type can be either signed or unsigned. It contains CHAR_BIT bits.[3]                                                                                                 | 8                   | %c                                          | [CHAR_MIN, CHAR_MAX]      | —                            |
| **signed char**        | Of the same size as char, but guaranteed to be signed. Capable of containing at least the [−127, +127] range.[3][a]                                                                                                                                                               | 8                   | %c[b]                                       | [SCHAR_MIN, SCHAR_MAX][6] | —                            |
| **unsigned char**      | Of the same size as char, but guaranteed to be unsigned. Contains at least the [0, 255] range.[7]                                                                                                                                                                                 | 8                   | %c[c]                                       | [0, UCHAR_MAX]            | —                            |
| **short**              | Short signed integer type. Capable of containing at least the [−32767, +32767] range.[3][a]                                                                                                                                                                                       | 16                  | %hi or %hd                                  | [SHRT_MIN, SHRT_MAX]      | —                            |
| **unsigned short**     | Short unsigned integer type. Contains at least the [0, 65535] range.[3]                                                                                                                                                                                                           | 16                  | %hu                                         | [0, USHRT_MAX]            | —                            |
| **int**                | Basic signed integer type. Capable of containing at least the [−32767, +32767] range.[3][a]                                                                                                                                                                                       | 16                  | %i or %d                                    | [INT_MIN, INT_MAX]        | none[8]                      |
| **unsigned int**       | Basic unsigned integer type. Contains at least the [0, 65535] range.[3]                                                                                                                                                                                                           | 16                  | %u                                          | [0, UINT_MAX]             | u or U[8]                    |
| **long**               | Long signed integer type. Capable of containing at least the [−2147483647, +2147483647] range.[3][a]                                                                                                                                                                              | 32                  | %li or %ld                                  | [LONG_MIN, LONG_MAX]      | l or L[8]                    |
| **unsigned long**      | Long unsigned integer type. Contains at least the [0, 4294967295] range.[3]                                                                                                                                                                                                       | 32                  | %lu                                         | [0, ULONG_MAX]            | both u or U and l or L[8]    |
| **long long**          | Long long signed integer type. Capable of containing at least the [−9223372036854775807, +9223372036854775807] range.[3][a] Specified since the C99 version of the standard.                                                                                                      | 64                  | %lli or %lld                                | [LLONG_MIN, LLONG_MAX]    | ll or LL[8]                  |
| **unsigned long long** | Long long unsigned integer type. Contains at least the [0, 18446744073709551615] range.[3] Specified since the C99 version of the standard.                                                                                                                                       | 64                  | %llu                                        | [0, ULLONG_MAX]           | both u or U and ll or LL[8]  |
| **float**              | Real floating-point type, usually referred to as a single-precision floating-point type. Actual properties unspecified (except minimum limits); however, on most systems, this is the IEEE 754 single-precision binary floating-point format (32 bits).                           |                     | %f %F<br>%g %G<br>%e %E<br>%a %A            |                           | f or F                       |
| **double**             | Real floating-point type, usually referred to as a double-precision floating-point type. Actual properties unspecified (except minimum limits); however, on most systems, this is the IEEE 754 double-precision binary floating-point format (64 bits).                           |                     | %lf %lF<br>%lg %lG<br>%le %lE<br>%la %lA[e] |                           | none                         |
| **long double**        | Real floating-point type, usually mapped to an extended precision floating-point number format. Actual properties unspecified. It can be either x86 extended-precision floating-point format (80 bits, but typically 96 bits or 128 bits in memory with padding bytes), or other. |                     | %Lf %LF<br>%Lg %LG<br>%Le %LE<br>%La %LA[e] |                           | l or L                       |

### Constants

Constants are a fixed value variable that cannot be altered by the program during the execution of it.
For this we use the keyword **const** before the definition of each variable.

_Note:_ Common Naming convention in constants it is to write them in CAPS

```c
const int NUMBER = 10;
```

### Arrays

An array is a data structure that can store many values of the same data type:

```c
double prices[] = {10.0, 5.0};

printf("1st value %lf", prices[0]);
```

We can also have **2D arrays**, this is useful if we need a matrix or grid, table, etc...

```c
int matrix[2][3] = {{1,2,3},{1,2,3}}; // 2x3
```

To better visualize this we can use this formatting:

```c
int matrix[2][3] = {
                   {1,2,3},
                   {1,2,3}
                    };
```

###### Array of strings

Array of strings can be a little trickie the syntax because it can look like a 2D matrix, which in truth is if we think that a string is an array of characters. Note the following example:

```c
char cars[][3] = {"tesla","bmw","fiat"};
```

### If Statements:

If statements have the following options:

```c
if(){

}else if(){

}else{

}
```

This can also be **reduced** to a ternary statement:

```c
int max = (a > b) ? a : b;

```

Inside the **()** we insert condition operators, which can be the following:

| Operator | Description                                                         | Example                | Result                                      |
| -------- | ------------------------------------------------------------------- | ---------------------- | ------------------------------------------- |
| `==`     | Equal to. Checks if two values are equal.                           | `a == b`               | True if `a` equals `b`                      |
| `!=`     | Not equal to. Checks if two values are not equal.                   | `a != b`               | True if `a` does not equal `b`              |
| `>`      | Greater than. Checks if the left value is greater.                  | `a > b`                | True if `a` is greater than `b`             |
| `<`      | Less than. Checks if the left value is smaller.                     | `a < b`                | True if `a` is less than `b`                |
| `>=`     | Greater than or equal to. Checks if left value is greater or equal. | `a >= b`               | True if `a` is greater than or equal to `b` |
| `<=`     | Less than or equal to. Checks if left value is smaller or equal.    | `a <= b`               | True if `a` is less than or equal to `b`    |
| `&&`     | Logical AND. True if both conditions are true.                      | `(a > b) && (a < c)`   | True if both conditions are true            |
| `\|\|`   | Logical OR. True if at least one condition is true.                 | `(a > b) \|\| (a < c)` | True if at least one condition is true      |
| `!`      | Logical NOT. Reverses the boolean state of the operand.             | `!(a == b)`            | True if `a` is not equal to `b`             |
| `?:`     | Ternary operator. Shorthand for if-else.                            | `a > b ? a : b`        | Returns `a` if `a > b`, otherwise `b`       |

### Switches

Switches are a more efficient alternative of using `else if` statements. Allows a value to be tested for equality against many cases. It is a bad practice to create a lot of `else if` statements. Some switch statements are more effective because some compilers have **jump tables**.

```c
switch(variable){
    case 0:
        print("0");
        break;
    default:
        break;
}
```

**_Important Note:_** Switch statements cannot handle every variable types. If that is the case we need to use _typecasting_. Example: `(int)radius`, which considers the radius which was a float to and int.

### Loops

##### For Loops

```c

for(int i = 0; i <= 10; i++){
    printf("\ni");
}

```

##### While Loops

Example:

```c
while(true){
    printf("while loop\n");
}
```

But there is another way of performing while loops --> **Do-While loop**:

```c
do{
    printf("Do-While");
}while(true);
```

###### Difference between a while and a do-while loop:

The `while` loop checks the condition first before executing, while the ``do-while```, executes the commands and checks the condition at the end.

_Note:_ **Nested Loops**: A nested loop is a loop inside another loop.

### Enums

Enums, or enumerators are user defined type of named integer identifiers. It helps to make a program more readable.

```c
enum Days = { Sun = 1, Tues = 2};

int main(){

    enum Day today = Sun;

    return 0;
}
```

### Random Numbers

They in truth are **pseudo random numbers**. This means that they are a set of values or elements that are statistically random. But the seed is always the same, there for we **cannot** use this for any cryptography security.

```c
// Important to include this libraries at the top
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // Use the current type to generate a seed
    srand(time(0)); // 's'rand is for 'seed'

    int random_number = rand(); // random number between 0 - 32.767

    /*To have a random number between 1 - 6 we can use the modulus operator:*/

    int rand_6 = (rand() % 6) +1; // % 6 will give 0 - 5

    return 0;
}


```

### Functions

- [return type][function_name]{}:

```c
int main(){
    printf("Hello World");
    // Since we are expecting and int we need to return one
    return 0;
}

```

#### Function Prototype

Ensures that we have the correct structure of the function before we use it, so we don't miss any arguments. This can be done by defining the function at the beginning like demonstrated:

```c
void my_function(char[], int);

int main(){
    char name[] = "my name";
    int age = 111;
    my_function(name, age);
    return 0;
}

void my_function(char name[], int age){
    printf("My name is %s and I am %d yo", name, age);
}
```

### `void` in C

In C programming, `void` is a keyword used to specify that a function or pointer does not return or refer to any value.

#### 1. **Void as a Function Return Type**

When used as a function return type, `void` indicates that the function does not return any value.

Example:

```c
void myFunction() {
    printf("This function does not return a value.\n");
}
```

#### 2. **Void as a function Parameter**

When a function has a `void` parameter, it means that the function does not accept any arguments.

```c
void myFunction(void) {
    printf("This function takes no arguments.\n");
}
```

##### 3. **Void Pointers**

A `void` pointer is a pointer that can point to any data type. It is a generic pointer type, and it must be cast to a specific data type before dereferencing.

```c
void* ptr;
int x = 10;
ptr = &x;  // void pointer pointing to an int
printf("Value of x: %d\n", *(int*)ptr);  // Cast void pointer to int pointer
```

##### Creating and calling functions:

We can define a function and then call it in another function in this way:

```c
float calculateCirc(float radius)
{
    const double PI = 3.14159;
    return 2 * PI * radius;
}

int main()
{
    float radius;
    double circumference;

    printf("\nEnter the Circumference of your circle\n");
    scanf("%f", &radius);

    circumference = calculateCirc(radius);
    printf("\nThe answer is %lf", circumference);
}
```

_Note:_ If for some reason the output is not what is expected that can because the mismatch between the types in the prints such as `%lf` or `%f`. This is essential for the `scanf`.

##### Math Functions

To use the math functions we need to include in our code the math header file:

`#include <math.h>`

These are the functions of the math.h file:

| Function                       | Description                                                       | Parameters                       | Return Type |
| ------------------------------ | ----------------------------------------------------------------- | -------------------------------- | ----------- |
| `double sin(double)`           | Computes the sine of an angle (in radians).                       | Angle in radians                 | `double`    |
| `double cos(double)`           | Computes the cosine of an angle (in radians).                     | Angle in radians                 | `double`    |
| `double tan(double)`           | Computes the tangent of an angle (in radians).                    | Angle in radians                 | `double`    |
| `double sinh(double)`          | Computes the hyperbolic sine of a number.                         | Number                           | `double`    |
| `double cosh(double)`          | Computes the hyperbolic cosine of a number.                       | Number                           | `double`    |
| `double tanh(double)`          | Computes the hyperbolic tangent of a number.                      | Number                           | `double`    |
| `double asin(double)`          | Computes the arc sine (inverse sine) of a number.                 | Number                           | `double`    |
| `double acos(double)`          | Computes the arc cosine (inverse cosine) of a number.             | Number                           | `double`    |
| `double atan(double)`          | Computes the arc tangent (inverse tangent) of a number.           | Number                           | `double`    |
| `double atan2(double, double)` | Computes the arc tangent of the quotient of two numbers.          | Two numbers (y, x)               | `double`    |
| `double exp(double)`           | Computes the exponential of a number (e^x).                       | Exponent (x)                     | `double`    |
| `double log(double)`           | Computes the natural logarithm (base e) of a number.              | Number                           | `double`    |
| `double log10(double)`         | Computes the logarithm (base 10) of a number.                     | Number                           | `double`    |
| `double pow(double, double)`   | Raises a number to the power of another.                          | Base, exponent                   | `double`    |
| `double sqrt(double)`          | Computes the square root of a number.                             | Number                           | `double`    |
| `double round(double)`         | Rounds a number to the nearest integer. (Scientifically accurate) | Number                           | `double`    |
| `double ceil(double)`          | Rounds a number up to the nearest integer.                        | Number                           | `double`    |
| `double floor(double)`         | Rounds a number down to the nearest integer.                      | Number                           | `double`    |
| `double fabs(double)`          | Computes the absolute value of a number.                          | Number                           | `double`    |
| `double ldexp(double, int)`    | Multiplies a number by 2 raised to the power of the integer.      | Number, exponent                 | `double`    |
| `double frexp(double, int*)`   | Breaks a number into a normalized fraction and an exponent.       | Number, pointer to exponent      | `double`    |
| `double modf(double, double*)` | Breaks a number into its fractional and integral parts.           | Number, pointer to integral part | `double`    |
| `double fmod(double, double)`  | Computes the remainder of the division of two numbers.            | Dividend, divisor                | `double`    |

### User Input

To access a user input in the terminal we use the **scanf**. This requires the definition of a variable to store the user input to and assigning it to, just as presented:

```c
char name[25]; //bytes

printf("What is your name?");
scanf("%s",&name);
```

If our user input gonna use _white spaces_ we need to use another function. \*_fgets();_.It has the following structure:

`fgets(variable,variable_size,standard_type)`

The standard type is referent to standard input or output, stdin...

Here it is an example:

```c
fgets(name,25,stdin);
```

A lot of times to type the input we use _Enter_, but this will be also reflected in our variable value if we are working with strings. To remove this we can do:

```c
fgets(name,25,stdin);
name[strlen(name)-1] = '\0'
```

### Errors

- The terminal will inform the user of the success of the Code. If the code has run successfully it will return :
  - [Done] exited with **code=0** in 0.354 seconds
    Else if there is an error it will return
  - [Done] exited with **code=1** in 0.354 seconds

### Structures

A structure is a collection of related members/variables. They can be of diff data types listed under one name in a block of memory. This is very similar to classes (there are no methods in structures) in other languages.
To access that structure we can call it by a variable name.

```c
struct Player{
    char name[12];
    int shirt_number;
    int score;
};

int main(){
    struct Player player1; // Here we are defining an item of the struct

    strcpy(player1.name, "Bryan"); // Here we are copying and assigning the name "Bryan" to the name parameter of the 'player1'.
    player1.score = 2;
    player1.shirt_number = 12;
}

```

###### Array of structs

```c

struct Students{
    char name[25];
    float gpa;
}

int main(){
    struct Students student1 = {"Bob",11};
    struct Students student2 = {"John",22};

    struct Students students[] = {student1, student2};

    return 0;
}

```

### Typedef

´typedef' is a reserved keyword that gives an existing datatype a "nickname".

```c

typedef char Nickname[25];

int main(){
    //FIXME: char user1[25] = "Bro"; // Writing this syntax can be annoying, so we can assign it to a nickname.
    Nickname user1 = "bro";

    return 0;
}
```

This is very common to use also with structs:

```c

/*Before -- -- - --
struct User{
    char name[25];
    char password[25];
}
*/

typedef struct{
    char name[25];
    char password[25];
} User;

int main(){
/*Before -- -- - --
    struct User user1 = {"Name","password"};
    struct User user2 = {"Name","password"};
*/

    User user1 = {"Name","password"};

    return 0;
}

```

### Bitwise Operators

They are special operators used in bit level programming (binary);

| Operator | Name        | Description                                                                  | Example  | Result                                 |
| -------- | ----------- | ---------------------------------------------------------------------------- | -------- | -------------------------------------- |
| `&`      | Bitwise AND | Performs a bitwise AND between two numbers.                                  | `a & b`  | 1 only if both bits are 1              |
| `\|`     | Bitwise OR  | Performs a bitwise OR between two numbers.                                   | `a \| b` | 1 if at least one bit is 1             |
| `^`      | Bitwise XOR | Performs a bitwise XOR (exclusive OR) between two numbers.                   | `a ^ b`  | 1 if only one of the bits is 1         |
| `~`      | Bitwise NOT | Inverts all the bits (1 becomes 0, 0 becomes 1).                             | `~a`     | Flips all the bits of `a`              |
| `<<`     | Left shift  | Shifts the bits of the left operand to the left by the number of positions.  | `a << 2` | Shifts bits of `a` two positions left  |
| `>>`     | Right shift | Shifts the bits of the left operand to the right by the number of positions. | `a >> 2` | Shifts bits of `a` two positions right |

```c

int x = 12; // 00001100
int y = 6; //  00000110
int z = 0; //  00000000

z = x & y;

```

### Memory



### ASCII Table

| Decimal | Hex | Character | Description          |
| ------- | --- | --------- | -------------------- |
| 0       | 00  | NUL       | Null character       |
| 1       | 01  | SOH       | Start of Header      |
| 2       | 02  | STX       | Start of Text        |
| 3       | 03  | ETX       | End of Text          |
| 4       | 04  | EOT       | End of Transmission  |
| 5       | 05  | ENQ       | Enquiry              |
| 6       | 06  | ACK       | Acknowledge          |
| 7       | 07  | BEL       | Bell (alert)         |
| 8       | 08  | BS        | Backspace            |
| 9       | 09  | TAB       | Horizontal Tab       |
| 10      | 0A  | LF        | Line Feed            |
| 11      | 0B  | VT        | Vertical Tab         |
| 12      | 0C  | FF        | Form Feed            |
| 13      | 0D  | CR        | Carriage Return      |
| 14      | 0E  | SO        | Shift Out            |
| 15      | 0F  | SI        | Shift In             |
| 16      | 10  | DLE       | Data Link Escape     |
| 17      | 11  | DC1       | Device Control 1     |
| 18      | 12  | DC2       | Device Control 2     |
| 19      | 13  | DC3       | Device Control 3     |
| 20      | 14  | DC4       | Device Control 4     |
| 21      | 15  | NAK       | Negative Acknowledge |
| 22      | 16  | SYN       | Synchronous Idle     |
| 23      | 17  | ETB       | End of Block         |
| 24      | 18  | CAN       | Cancel               |
| 25      | 19  | EM        | End of Medium        |
| 26      | 1A  | SUB       | Substitute           |
| 27      | 1B  | ESC       | Escape               |
| 28      | 1C  | FS        | File Separator       |
| 29      | 1D  | GS        | Group Separator      |
| 30      | 1E  | RS        | Record Separator     |
| 31      | 1F  | US        | Unit Separator       |
| 32      | 20  | Space     | Space                |
| 33      | 21  | !         | Exclamation mark     |
| 34      | 22  | "         | Double quote         |
| 35      | 23  | #         | Number sign          |
| 36      | 24  | $         | Dollar sign          |
| 37      | 25  | %         | Percent sign         |
| 38      | 26  | &         | Ampersand            |
| 39      | 27  | '         | Single quote         |
| 40      | 28  | (         | Left parenthesis     |
| 41      | 29  | )         | Right parenthesis    |
| 42      | 2A  | \*        | Asterisk             |
| 43      | 2B  | +         | Plus sign            |
| 44      | 2C  | ,         | Comma                |
| 45      | 2D  | -         | Hyphen/minus         |
| 46      | 2E  | .         | Period (dot)         |
| 47      | 2F  | /         | Slash                |
| 48      | 30  | 0         | Digit 0              |
| 49      | 31  | 1         | Digit 1              |
| 50      | 32  | 2         | Digit 2              |
| 51      | 33  | 3         | Digit 3              |
| 52      | 34  | 4         | Digit 4              |
| 53      | 35  | 5         | Digit 5              |
| 54      | 36  | 6         | Digit 6              |
| 55      | 37  | 7         | Digit 7              |
| 56      | 38  | 8         | Digit 8              |
| 57      | 39  | 9         | Digit 9              |
| 58      | 3A  | :         | Colon                |
| 59      | 3B  | ;         | Semicolon            |
| 60      | 3C  | <         | Less-than sign       |
| 61      | 3D  | =         | Equals sign          |
| 62      | 3E  | >         | Greater-than sign    |
| 63      | 3F  | ?         | Question mark        |
| 64      | 40  | @         | At sign              |
| 65      | 41  | A         | Uppercase A          |
| 66      | 42  | B         | Uppercase B          |
| 67      | 43  | C         | Uppercase C          |
| 68      | 44  | D         | Uppercase D          |
| 69      | 45  | E         | Uppercase E          |
| 70      | 46  | F         | Uppercase F          |
| 71      | 47  | G         | Uppercase G          |
| 72      | 48  | H         | Uppercase H          |
| 73      | 49  | I         | Uppercase I          |
| 74      | 4A  | J         | Uppercase J          |
| 75      | 4B  | K         | Uppercase K          |
| 76      | 4C  | L         | Uppercase L          |
| 77      | 4D  | M         | Uppercase M          |
| 78      | 4E  | N         | Uppercase N          |
| 79      | 4F  | O         | Uppercase O          |
| 80      | 50  | P         | Uppercase P          |
| 81      | 51  | Q         | Uppercase Q          |
| 82      | 52  | R         | Uppercase R          |
| 83      | 53  | S         | Uppercase S          |
| 84      | 54  | T         | Uppercase T          |
| 85      | 55  | U         | Uppercase U          |
| 86      | 56  | V         | Uppercase V          |
| 87      | 57  | W         | Uppercase W          |
| 88      | 58  | X         | Uppercase X          |
| 89      | 59  | Y         | Uppercase Y          |
| 90      | 5A  | Z         | Uppercase Z          |
| 91      | 5B  | [         | Left square bracket  |
| 92      | 5C  | \         | Backslash            |
| 93      | 5D  | ]         | Right square bracket |
| 94      | 5E  | ^         | Caret (circumflex)   |
| 95      | 5F  | \_        | Underscore           |
| 96      | 60  | `         | Grave accent         |
| 97      | 61  | a         | Lowercase a          |
| 98      | 62  | b         | Lowercase b          |
| 99      | 63  | c         | Lowercase c          |
| 100     | 64  | d         | Lowercase d          |
| 101     | 65  | e         | Lowercase e          |
| 102     | 66  | f         | Lowercase f          |
| 103     | 67  | g         | Lowercase g          |
| 104     | 68  | h         | Lowercase h          |
| 105     | 69  | i         | Lowercase i          |
| 106     | 6A  | j         | Lowercase j          |
| 107     | 6B  | k         | Lowercase k          |
| 108     | 6C  | l         | Lowercase l          |
| 109     | 6D  | m         | Lowercase m          |
| 110     | 6E  | n         | Lowercase n          |
| 111     | 6F  | o         | Lowercase o          |
| 112     | 70  | p         | Lowercase p          |
| 113     | 71  | q         | Lowercase q          |
| 114     | 72  | r         | Lowercase r          |
| 115     | 73  | s         | Lowercase s          |
| 116     | 74  | t         | Lowercase t          |
| 117     | 75  | u         | Lowercase u          |
| 118     | 76  | v         | Lowercase v          |
| 119     | 77  | w         | Lowercase w          |
| 120     | 78  | x         | Lowercase x          |
| 121     | 79  | y         | Lowercase y          |
| 122     | 7A  | z         | Lowercase z          |
| 123     | 7B  | {         | Left curly brace     |
| 124     | 7C  | \|        | Vertical bar         |
| 125     | 7D  | }         | Right curly brace    |
| 126     | 7E  | ~         | Tilde                |
| 127     | 7F  | DEL       | Delete               |
