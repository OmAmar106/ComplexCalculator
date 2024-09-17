# Scientific Calculator

This is a menu-based scientific calculator program written in C, designed to handle both real and complex numbers. It includes a wide range of operations and maintains a history of calculations in a text file, which includes timestamps for each operation.

## Features

- **Extensive Operations**: Perform a variety of calculations including factorials, logarithms, exponentials, and trigonometric functions.
- **History Tracking**: Operations and results are stored in a text file with execution timestamps for later review.
- **Real and Complex Number Support**: Conduct calculations involving real numbers, complex numbers, and their combinations.

## Key Functions

### Factorial
- Calculates the factorial of a number using recursion.
- Efficiently handles both small (e.g., 0 or 1) and large values.

### Logarithm (`loga`)
- Computes the logarithm using Taylor series.
- For numbers greater than 1, the value is divided by 10 iteratively until it's less than 1, and the count of divisions is added to the result.
- Supports custom bases for logarithms.

### Exponential
- Uses Taylor series to compute the exponential function for values between 0 and 1.
- For values outside this range, the number is decomposed into an integer part and a fractional part, applying the formula accordingly.

### Trigonometric Functions
- **Sine Inverse (`sini`)**: Computes the inverse sine using Taylor series.
- **Tangent Inverse (`tani`)**: Calculates the inverse tangent using Taylor series.
- **Cosine (`cosa`)**: Determines the cosine by reducing the angle modulo \(2\pi\) and then applying Taylor series.

## Main Menu

The main menu offers options to perform operations with real numbers, complex numbers, access history, or exit the program. The menu includes:

- **Real Numbers**: Perform operations like addition, subtraction, multiplication, division, and more.
- **Complex Numbers**: Handle calculations with complex numbers in the form `a+bi`, including addition, subtraction, and other operations.
- **History**: View a log of past operations along with timestamps.
- **Exit**: Close the calculator.

## Quadratic Equations

- **Quadratic Submenu**: Solves quadratic equations by accepting powers of \(x\) and providing the result for different values of \(x\). Utilizes arrays for efficient computation.

## Volume and Surface Area

- **Volume and Surface Area Submenu**: Provides options to calculate the volume and surface area for various geometric shapes.

## Usage

1. Compile the program using a C compiler.
2. Run the executable to access the main menu.
3. Navigate through the menus to perform desired operations.

## Example

To calculate the factorial of 5:

1. Select the "Real Numbers" menu.
2. Choose the "Factorial" option.
3. Enter the number 5.

The result will be displayed, and the operation will be saved to the history file.

