#include <stdlib.h>

int main(int argc,char *argv[])
{
    char *pt;

    pt = malloc(200);

    free(pt);
}
