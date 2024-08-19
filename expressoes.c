#include <stdio.h>

int main() {
int a = 1, b = 2, c = 3, d = 4, e = 5;
float f, g;
printf("Considerando A=1, B=2, C=3 D=4, E=5 compute as expressões abaixo:\n");
f = a * b / c;
printf("1 * 2 / 3 = %f\n", 2.0/3.0);
g = a * b % c + 1;
printf("(a * b) %% (c + 1) = %f\n", 1.0, 2.0/3.0);
f = ++ a * b - c --;
printf("++ a * b - c -- = %f\n", f);
g = 7 - - b * ++ d;
printf("7 - - b * ++ d = %f\n", g);
f = a / b / c;
printf("a / b / c = %f\n", 1.0/2.0/3.0);
g = 7 + c * -- d / e;
printf("7 + c * -- d / e = %f\n", g);
f = 2 * a % - b + c + 1;
printf("2 * a %% b + c + 1 = %f\n", f);
return 0;
}
