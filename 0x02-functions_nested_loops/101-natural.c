#include <stdio.h>

int main() {
int L = 1024;
int S = 0;
int i;

for (i = 1; i < L; i++) {
if (i % 3 == 0 || i % 5 == 0) {
S += i;
}
}

printf("%d\n", S);

return (0);
}
