#include <unistd.h>
#include "main.h"
/**
 *main -check description
 *Description: print the word _putchar follwed by a new line.
 *Return :0.
 */
int main(void)
{
char word[8] = "_putchar";
int i;
for (i = 0; i < 7; i++)
_putchar(word[i]);
_putchar('\n');
return(0);
}
