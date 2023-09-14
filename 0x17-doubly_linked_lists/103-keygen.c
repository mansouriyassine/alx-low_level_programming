#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
unsigned int i, s, l;
size_t n, a;
char *c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
char k[7] = "      ";

if (argc != 2)
{
printf("Usage: %s <username>\n", argv[0]);
return (1);
}

n = strlen(argv[1]);
k[0] = c[(n ^ 59) & 63];

for (i = 0, a = 0; i < n; i++)
a += argv[1][i];
k[1] = c[(a ^ 79) & 63];

for (i = 0, s = 1; i < n; i++)
s *= argv[1][i];
k[2] = c[(s ^ 85) & 63];

for (s = argv[1][0], i = 0; i < n; i++)
if ((char)s <= argv[1][i])
s = argv[1][i];
srand(s ^ 14);
k[3] = c[rand() & 63];

for (s = 0, i = 0; i < n; i++)
s += argv[1][i] * argv[1][i];
k[4] = c[(s ^ 239) & 63];

for (s = 0, i = 0; (char)i < argv[1][0]; i++)
s = rand();
k[5] = c[(s ^ 229) & 63];

printf("%s\n", k);

return (0);
}
