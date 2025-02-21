#include <stdio.h>
#include <math.h>

int main() {
char operator;
double num1, num2, result;

printf("Enter operator (+, -, *, /, ^, s, c, t, q, l): ");
scanf(" %c", &operator);

if (operator != 's' && operator != 'c' && operator != 't' && operator != 'q' && operator != 'l') {
printf("Enter two operands: ");
scanf("%lf %lf", &num1, &num2);
} else {
printf("Enter one operand: ");
scanf("%lf", &num1);
}



switch (operator) {
case '+':
result = num1 + num2;
break;
case '-':
result = num1 - num2;
break;
case '*':
result = num1 * num2;
break;
case '/':
if (num2 == 0) {
printf("Error: Division by zero\n");
return 1;
}
result = num1 / num2;
break;
case '^':
result = pow(num1, num2);
break;
case 's':
result = sin(num1);
break;
case 'c':
result = cos(num1);
break;
case 't':
result = tan(num1);
break;
case 'q':
if (num1 < 0) {
printf("Error: Square root of a negative number\n");
return 1;
}
result = sqrt(num1);
break;
case 'l':
if (num1 <= 0) {
printf("Error: Logarithm of a non-positive number\n");
return 1;
}
result = log(num1);
break;
default:
printf("Error: Invalid operator\n");
return 1;
}

printf("Result: %lf\n", result);

return 0;
}