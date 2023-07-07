#include "main.h"
/**
*_isdigit - check if a character is digitit
*@c: character ti check
*Return: returns 1, or 0
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
