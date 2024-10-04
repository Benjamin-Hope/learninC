# This is a guide on how to learn the basics of programming in C

##### Reference Video: [C Full Course](https://www.youtube.com/watch?v=87SH2Cn0s9A)

## Real Basics

### Commenting

- A basic comment can be done with the //
- Multi line commenting with /* */

### Sequences:

- \n : New line
- \t : New Tab
- `\\` : add a \
- `\'` : add a '
-
-
-


### Printing in C

- ```printf();``` : This is print formating

#### Place Holder Types in Prints

| Placeholder | Type                                  | Explanation                                                                                              | Example                |
|-------------|---------------------------------------|----------------------------------------------------------------------------------------------------------|------------------------|
| `%d`        | Signed integer                        | Prints a signed integer in decimal (base 10).                                                             | `printf("%d", 42);`    |
| `%i`        | Signed integer                        | Equivalent to `%d`, but can also be used to interpret integers in different bases (when used with `scanf`).| `printf("%i", 42);`    |
| `%u`        | Unsigned integer                      | Prints an unsigned integer in decimal (base 10).                                                          | `printf("%u", 42);`    |
| `%o`        | Unsigned integer (octal)              | Prints an unsigned integer in octal (base 8).                                                             | `printf("%o", 42);`    |
| `%x`        | Unsigned integer (hexadecimal)        | Prints an unsigned integer in lowercase hexadecimal (base 16).                                             | `printf("%x", 42);`    |
| `%X`        | Unsigned integer (hexadecimal)        | Prints an unsigned integer in uppercase hexadecimal (base 16).                                             | `printf("%X", 42);`    |
| `%f`        | Floating-point (decimal notation)     | Prints a floating-point number in decimal notation (e.g., `123.456`).                                      | `printf("%f", 42.5);`  |
| `%e`        | Floating-point (scientific notation)  | Prints a floating-point number in scientific notation (e.g., `1.23456e+02`).                               | `printf("%e", 42.5);`  |
| `%E`        | Floating-point (scientific notation)  | Same as `%e`, but uses uppercase letters (e.g., `1.23456E+02`).                                            | `printf("%E", 42.5);`  |
| `%g`        | Floating-point (shorter of `%f`/`%e`) | Prints the shorter of `%f` or `%e` (removes trailing zeros).                                               | `printf("%g", 42.5);`  |
| `%G`        | Floating-point (shorter of `%f`/`%E`) | Same as `%g`, but uses uppercase letters for scientific notation.                                          | `printf("%G", 42.5);`  |
| `%c`        | Character                             | Prints a single character.                                                                                 | `printf("%c", 'A');`   |
| `%s`        | String                                | Prints a null-terminated string.                                                                           | `printf("%s", "Hello");`|
| `%p`        | Pointer                               | Prints a pointer (memory address).                                                                         | `printf("%p", ptr);`   |
| `%%`        | Literal `%`                           | Prints a literal `%` character.                                                                            | `printf("%%");`        |
| `%lld`      | Long long (signed)                    | Prints a `long long` integer in decimal notation.                                                          | `printf("%lld", 123456789LL);` |
| `%llu`      | Long long (unsigned)                  | Prints an `unsigned long long` integer in decimal notation.                                                | `printf("%llu", 123456789ULL);`|
| `%ld`       | Long (signed)                         | Prints a `long` integer in decimal notation.                                                               | `printf("%ld", 123456789L);` |
| `%lu`       | Long (unsigned)                       | Prints an `unsigned long` integer in decimal notation.                                                     | `printf("%lu", 123456789UL);` |
| `%lf`       | Double (floating-point)               | Prints a `double` floating-point number in decimal notation (for `scanf`, `%lf` is used for `double`).     | `printf("%lf", 42.5);` |


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

| Type                    | Explanation                                                                                                                                                                                                                                                                                               | Minimum size (bits) | Format specifier                             | Range                              | Suffix for decimal constants                |
|-------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|---------------------|---------------------------------------------|------------------------------------|----------------------------------------------|
| **char**                 | Smallest addressable unit of the machine that can contain basic character set. It is an integer type. Actual type can be either signed or unsigned. It contains CHAR_BIT bits.[3]                                                                                                                          | 8                   | %c                                         | [CHAR_MIN, CHAR_MAX]              | —                                            |
| **signed char**          | Of the same size as char, but guaranteed to be signed. Capable of containing at least the [−127, +127] range.[3][a]                                                                                                                                                                                      | 8                   | %c[b]                                      | [SCHAR_MIN, SCHAR_MAX][6]         | —                                            |
| **unsigned char**        | Of the same size as char, but guaranteed to be unsigned. Contains at least the [0, 255] range.[7]                                                                                                                                                                                                         | 8                   | %c[c]                                      | [0, UCHAR_MAX]                    | —                                            |
| **short**                | Short signed integer type. Capable of containing at least the [−32767, +32767] range.[3][a]                                                                                                                                                                                                               | 16                  | %hi or %hd                                | [SHRT_MIN, SHRT_MAX]              | —                                            |
| **unsigned short**       | Short unsigned integer type. Contains at least the [0, 65535] range.[3]                                                                                                                                                                                                                                  | 16                  | %hu                                        | [0, USHRT_MAX]                    | —                                            |
| **int**                  | Basic signed integer type. Capable of containing at least the [−32767, +32767] range.[3][a]                                                                                                                                                                                                               | 16                  | %i or %d                                  | [INT_MIN, INT_MAX]                | none[8]                                      |
| **unsigned int**         | Basic unsigned integer type. Contains at least the [0, 65535] range.[3]                                                                                                                                                                                                                                  | 16                  | %u                                         | [0, UINT_MAX]                    | u or U[8]                                    |
| **long**                 | Long signed integer type. Capable of containing at least the [−2147483647, +2147483647] range.[3][a]                                                                                                                                                                                                      | 32                  | %li or %ld                                | [LONG_MIN, LONG_MAX]              | l or L[8]                                    |
| **unsigned long**        | Long unsigned integer type. Contains at least the [0, 4294967295] range.[3]                                                                                                                                                                                                                              | 32                  | %lu                                        | [0, ULONG_MAX]                   | both u or U and l or L[8]                    |
| **long long**            | Long long signed integer type. Capable of containing at least the [−9223372036854775807, +9223372036854775807] range.[3][a] Specified since the C99 version of the standard.                                                                                                                               | 64                  | %lli or %lld                              | [LLONG_MIN, LLONG_MAX]            | ll or LL[8]                                  |
| **unsigned long long**   | Long long unsigned integer type. Contains at least the [0, 18446744073709551615] range.[3] Specified since the C99 version of the standard.                                                                                                                                                               | 64                  | %llu                                       | [0, ULLONG_MAX]                   | both u or U and ll or LL[8]                  |
| **float**                | Real floating-point type, usually referred to as a single-precision floating-point type. Actual properties unspecified (except minimum limits); however, on most systems, this is the IEEE 754 single-precision binary floating-point format (32 bits).                                                     |                     | %f %F<br>%g %G<br>%e %E<br>%a %A           |                                      | f or F                                     |
| **double**               | Real floating-point type, usually referred to as a double-precision floating-point type. Actual properties unspecified (except minimum limits); however, on most systems, this is the IEEE 754 double-precision binary floating-point format (64 bits).                                                    |                     | %lf %lF<br>%lg %lG<br>%le %lE<br>%la %lA[e]|                                      | none                                        |
| **long double**          | Real floating-point type, usually mapped to an extended precision floating-point number format. Actual properties unspecified. It can be either x86 extended-precision floating-point format (80 bits, but typically 96 bits or 128 bits in memory with padding bytes), or other.                           |                     | %Lf %LF<br>%Lg %LG<br>%Le %LE<br>%La %LA[e]|                                      | l or L                                      |


### Constants

Constants are a fixed value varibale that cannot be altered by the program during the execution of it.
For this we use the keyword **const** before the definition of each variable.

*Note:* Commnon Namming convention in constants it is to write them in CAPS

```c
const int NUMBER = 10;
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

##### Math Functions

To use the math functions we need to include in our code the math header file:

```#include <math.h>```

These are the functions of the math.h file:

| Function                        | Description                                         | Parameters                         | Return Type |
|----------------------------------|-----------------------------------------------------|-------------------------------------|-------------|
| `double sin(double)`             | Computes the sine of an angle (in radians).         | Angle in radians                   | `double`    |
| `double cos(double)`             | Computes the cosine of an angle (in radians).       | Angle in radians                   | `double`    |
| `double tan(double)`             | Computes the tangent of an angle (in radians).      | Angle in radians                   | `double`    |
| `double sinh(double)`            | Computes the hyperbolic sine of a number.           | Number                             | `double`    |
| `double cosh(double)`            | Computes the hyperbolic cosine of a number.         | Number                             | `double`    |
| `double tanh(double)`            | Computes the hyperbolic tangent of a number.        | Number                             | `double`    |
| `double asin(double)`            | Computes the arc sine (inverse sine) of a number.   | Number                             | `double`    |
| `double acos(double)`            | Computes the arc cosine (inverse cosine) of a number.| Number                            | `double`    |
| `double atan(double)`            | Computes the arc tangent (inverse tangent) of a number. | Number                           | `double`    |
| `double atan2(double, double)`   | Computes the arc tangent of the quotient of two numbers. | Two numbers (y, x)              | `double`    |
| `double exp(double)`             | Computes the exponential of a number (e^x).         | Exponent (x)                       | `double`    |
| `double log(double)`             | Computes the natural logarithm (base e) of a number.| Number                             | `double`    |
| `double log10(double)`           | Computes the logarithm (base 10) of a number.       | Number                             | `double`    |
| `double pow(double, double)`     | Raises a number to the power of another.            | Base, exponent                     | `double`    |
| `double sqrt(double)`            | Computes the square root of a number.               | Number                             | `double`    |
| `double ceil(double)`            | Rounds a number up to the nearest integer.          | Number                             | `double`    |
| `double floor(double)`           | Rounds a number down to the nearest integer.        | Number                             | `double`    |
| `double fabs(double)`            | Computes the absolute value of a number.            | Number                             | `double`    |
| `double ldexp(double, int)`      | Multiplies a number by 2 raised to the power of the integer. | Number, exponent               | `double`    |
| `double frexp(double, int*)`     | Breaks a number into a normalized fraction and an exponent. | Number, pointer to exponent    | `double`    |
| `double modf(double, double*)`   | Breaks a number into its fractional and integral parts. | Number, pointer to integral part| `double`    |
| `double fmod(double, double)`    | Computes the remainder of the division of two numbers. | Dividend, divisor               | `double`    |


### User Input

To access a user input in the terminal we use the **scanf**. This requires the definition of a variable to store the user input to and assigning it to, just as presented:

```c
char name[25]; //bytes

printf("What is your name?");
scanf("%s",&name);
```

If our user input gonna use *white spaces* we need to use another function. **fgets();*.It has the following structure:

```fgets(variable,variable_size,standard_type)```

The standard type is referent to standard input or output, stdin...

Here it is an example:

```c
fgets(name,25,stdin);
```

### Errors

- The terminal will inform the user of the success of the Code. If the code has run successfully it will return :
    - [Done] exited with **code=0** in 0.354 seconds
    Else if there is an error it will return
    - [Done] exited with **code=1** in 0.354 seconds



### ASCII Table

| Decimal | Hex  | Character | Description                         |
|---------|------|-----------|-------------------------------------|
| 0       | 00   | NUL       | Null character                      |
| 1       | 01   | SOH       | Start of Header                     |
| 2       | 02   | STX       | Start of Text                       |
| 3       | 03   | ETX       | End of Text                         |
| 4       | 04   | EOT       | End of Transmission                 |
| 5       | 05   | ENQ       | Enquiry                             |
| 6       | 06   | ACK       | Acknowledge                         |
| 7       | 07   | BEL       | Bell (alert)                        |
| 8       | 08   | BS        | Backspace                           |
| 9       | 09   | TAB       | Horizontal Tab                      |
| 10      | 0A   | LF        | Line Feed                           |
| 11      | 0B   | VT        | Vertical Tab                        |
| 12      | 0C   | FF        | Form Feed                           |
| 13      | 0D   | CR        | Carriage Return                     |
| 14      | 0E   | SO        | Shift Out                           |
| 15      | 0F   | SI        | Shift In                            |
| 16      | 10   | DLE       | Data Link Escape                    |
| 17      | 11   | DC1       | Device Control 1                    |
| 18      | 12   | DC2       | Device Control 2                    |
| 19      | 13   | DC3       | Device Control 3                    |
| 20      | 14   | DC4       | Device Control 4                    |
| 21      | 15   | NAK       | Negative Acknowledge                |
| 22      | 16   | SYN       | Synchronous Idle                    |
| 23      | 17   | ETB       | End of Block                        |
| 24      | 18   | CAN       | Cancel                              |
| 25      | 19   | EM        | End of Medium                       |
| 26      | 1A   | SUB       | Substitute                          |
| 27      | 1B   | ESC       | Escape                              |
| 28      | 1C   | FS        | File Separator                      |
| 29      | 1D   | GS        | Group Separator                     |
| 30      | 1E   | RS        | Record Separator                    |
| 31      | 1F   | US        | Unit Separator                      |
| 32      | 20   | Space     | Space                               |
| 33      | 21   | !         | Exclamation mark                    |
| 34      | 22   | "         | Double quote                        |
| 35      | 23   | #         | Number sign                         |
| 36      | 24   | $         | Dollar sign                         |
| 37      | 25   | %         | Percent sign                        |
| 38      | 26   | &         | Ampersand                           |
| 39      | 27   | '         | Single quote                        |
| 40      | 28   | (         | Left parenthesis                    |
| 41      | 29   | )         | Right parenthesis                   |
| 42      | 2A   | *         | Asterisk                            |
| 43      | 2B   | +         | Plus sign                           |
| 44      | 2C   | ,         | Comma                               |
| 45      | 2D   | -         | Hyphen/minus                        |
| 46      | 2E   | .         | Period (dot)                        |
| 47      | 2F   | /         | Slash                               |
| 48      | 30   | 0         | Digit 0                             |
| 49      | 31   | 1         | Digit 1                             |
| 50      | 32   | 2         | Digit 2                             |
| 51      | 33   | 3         | Digit 3                             |
| 52      | 34   | 4         | Digit 4                             |
| 53      | 35   | 5         | Digit 5                             |
| 54      | 36   | 6         | Digit 6                             |
| 55      | 37   | 7         | Digit 7                             |
| 56      | 38   | 8         | Digit 8                             |
| 57      | 39   | 9         | Digit 9                             |
| 58      | 3A   | :         | Colon                               |
| 59      | 3B   | ;         | Semicolon                           |
| 60      | 3C   | <         | Less-than sign                      |
| 61      | 3D   | =         | Equals sign                         |
| 62      | 3E   | >         | Greater-than sign                   |
| 63      | 3F   | ?         | Question mark                       |
| 64      | 40   | @         | At sign                             |
| 65      | 41   | A         | Uppercase A                         |
| 66      | 42   | B         | Uppercase B                         |
| 67      | 43   | C         | Uppercase C                         |
| 68      | 44   | D         | Uppercase D                         |
| 69      | 45   | E         | Uppercase E                         |
| 70      | 46   | F         | Uppercase F                         |
| 71      | 47   | G         | Uppercase G                         |
| 72      | 48   | H         | Uppercase H                         |
| 73      | 49   | I         | Uppercase I                         |
| 74      | 4A   | J         | Uppercase J                         |
| 75      | 4B   | K         | Uppercase K                         |
| 76      | 4C   | L         | Uppercase L                         |
| 77      | 4D   | M         | Uppercase M                         |
| 78      | 4E   | N         | Uppercase N                         |
| 79      | 4F   | O         | Uppercase O                         |
| 80      | 50   | P         | Uppercase P                         |
| 81      | 51   | Q         | Uppercase Q                         |
| 82      | 52   | R         | Uppercase R                         |
| 83      | 53   | S         | Uppercase S                         |
| 84      | 54   | T         | Uppercase T                         |
| 85      | 55   | U         | Uppercase U                         |
| 86      | 56   | V         | Uppercase V                         |
| 87      | 57   | W         | Uppercase W                         |
| 88      | 58   | X         | Uppercase X                         |
| 89      | 59   | Y         | Uppercase Y                         |
| 90      | 5A   | Z         | Uppercase Z                         |
| 91      | 5B   | [         | Left square bracket                 |
| 92      | 5C   | \         | Backslash                           |
| 93      | 5D   | ]         | Right square bracket                |
| 94      | 5E   | ^         | Caret (circumflex)                  |
| 95      | 5F   | _         | Underscore                          |
| 96      | 60   | `         | Grave accent                        |
| 97      | 61   | a         | Lowercase a                         |
| 98      | 62   | b         | Lowercase b                         |
| 99      | 63   | c         | Lowercase c                         |
| 100     | 64   | d         | Lowercase d                         |
| 101     | 65   | e         | Lowercase e                         |
| 102     | 66   | f         | Lowercase f                         |
| 103     | 67   | g         | Lowercase g                         |
| 104     | 68   | h         | Lowercase h                         |
| 105     | 69   | i         | Lowercase i                         |
| 106     | 6A   | j         | Lowercase j                         |
| 107     | 6B   | k         | Lowercase k                         |
| 108     | 6C   | l         | Lowercase l                         |
| 109     | 6D   | m         | Lowercase m                         |
| 110     | 6E   | n         | Lowercase n                         |
| 111     | 6F   | o         | Lowercase o                         |
| 112     | 70   | p         | Lowercase p                         |
| 113     | 71   | q         | Lowercase q                         |
| 114     | 72   | r         | Lowercase r                         |
| 115     | 73   | s         | Lowercase s                         |
| 116     | 74   | t         | Lowercase t                         |
| 117     | 75   | u         | Lowercase u                         |
| 118     | 76   | v         | Lowercase v                         |
| 119     | 77   | w         | Lowercase w                         |
| 120     | 78   | x         | Lowercase x                         |
| 121     | 79   | y         | Lowercase y                         |
| 122     | 7A   | z         | Lowercase z                         |
| 123     | 7B   | {         | Left curly brace                    |
| 124     | 7C   | |         | Vertical bar                        |
| 125     | 7D   | }         | Right curly brace                   |
| 126     | 7E   | ~         | Tilde                               |
| 127     | 7F   | DEL       | Delete                              |
