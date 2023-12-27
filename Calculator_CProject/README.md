------------------------------------------------SCIENTIFIC-CALCULATOR-------------------------------------------------


* This calculator is a menu based program dealing with real , complex numbers.

* This calculator stores the History in a text file using file handling and can 
  be printed withing the program along tih the time.

* Function : 

  - Factorial : if the inpur value is 1 or 0 , it returns 1 whereas if its a big 
    number , the final value is printed using recursion
 
  - loga : Using taylor series,the value of log has been calculated for number 
    greater than and less than 1. for greter than 1 , same formula is used but it
    is first divided by 10 until it reaches a number less than 1 and the number of 
    time it is divided is added to the final value of the logarithm.

  - logarithm : this is just so that the base can be custom made rather than it 
    being default 10.

  - exponential : for y belonging to 0 to 1 , taylor series has been used, whereas 
    for others, the number has first been substracted by the integer smaller than 
    the number and closest to it and then the old formula is used along with 
    adding our number raised to the integer closest to it.

  - sini : this function uses taylor series to calculate the sin inverse of a 
    float number. 

  - tani : using taylor series , we calculate the tan inverse of a float number.

  - cosa : first we substract 2pie from the input number as many times as
    possible then we use taylor series and find the value of cos thetha.

* This is followed by the main function which has all the menus and the submenus
  it first gives you the option of real numbers , complex numbers , history,exit.

* There are many subparts in real numbers and complex numbers which calls the 
  required function from the functions stated above.

* The program has been optimized to make use of as less of function as possible 
  for example rather than creating a substraction function , we have used the
  addition function directly with variables as a,-b.

* There is a quadratic submenu , which asks for powers of x as input and returns the 
  value after putting in the value of x as output.This has been done using arrays.

* Volume and Surface Area is a big submenu with many options for surface area and
  volume of different shapes.

* In complex operations , we take a and b as input in the form a+bi. Then the 
  operations are used separately for both a and b taken as input , after that normal
  addition and substraction are used.



  
