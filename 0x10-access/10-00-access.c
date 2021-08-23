#include <stdio.h>
#include <unistd.h>

int main (void)
{
	char *path = "/bin/ls";

        access(path, X_OK);
        printf("%s\n", path);
        printf("%d\n", access(path, X_OK));
        return 0;
}