#include <stdio.h>

void f(void)
{
int * x = malloc(10 * sizeof(int));
x[10] = 0; // 1er problème : dépassement de la pile
} // 2ème problème : perte de mémoire pas de free

int main(void)
{
f();
return 0;
}
