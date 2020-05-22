#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 3)
        return 0;
    int n = atoi(argv[1]);
    int d = atoi(argv[2]);
    if (n < 0 || d < 0)
        return 0;
    int cables = (n * (n + 1) / 2) * d;
    printf("%d\n", cables);
    return cables;
}