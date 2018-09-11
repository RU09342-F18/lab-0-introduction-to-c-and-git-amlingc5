#include <math.h>


      int math(int num1, int num2, char operator) //initializes the two numbers and the operator
      {
      switch(operator)
      {
          //Addition case
        case '+':
          return num1 + num2;
          
             //Subtraction case
        case '-':
          return num1 - num2;
          
             //Multiplication case
        case '*':
          return num1 * num2;
          
             //Division case
        case '/':
          return num1 / num2;
          
             //modulus case
        case '%':
          return num1 % num2;
          
             //left shift case
        case '<':
          return num1 << num2;
          
             //right shift case
        case '<':
          return num1 >> num2;
           
             //bitwise and case
        case '&':
          return num1 & num2;
           
             //bitwise or case
        case '|':
          return num1 | num2;
              
             //bitwise xor case
        case '^':
          return num1 ^ num2;
             
             //inverse case
        case '~':
          return ~num1, ~num2;
          
        default:
          return 0;
          
      }
}
          
