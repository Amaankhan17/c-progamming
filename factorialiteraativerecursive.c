#include <stdio.h>
/*NAME AMAAN KHAN
UIN 251P045
ROLL ON 41
CLASS COMPUTER C3*/
long long factorialIterative(int n){
long long fact = 1;
for (int i = 1; i <= n; i++)
fact*= i;
return fact;
}
long long factorialRecursive(int n) {
if (n== 0 ||n==1)
return 1;
return n * factorialRecursive(n - 1);
}
int main() {
int num;
printf( "Enter a number: ");
scanf("%d", &num);
printf("Factorial (Iterative): %11d\n", factorialIterative(num));
printf("Factorial (Recursive): %11d\n", factorialRecursive(num));
return 0;
}