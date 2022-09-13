#include <unistd.h>
#include "main.h"
/**
 *main -check description
 *Description: print the word _putchar follwed by a new line.
 *Return :0.
 */
int main(void)
{
char *sh = "_putchar";
while (*sh){
_putchar(*sh);
sh++;
}
_putchar('\n');
return(0);
}
