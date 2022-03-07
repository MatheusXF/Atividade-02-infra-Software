#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main()
{
    int filedescriptor [2];
    if (pipe(filedescriptor) == -1) {
        printf("erro ao criar o pipe");
        return 1;
    }
    int id = fork();

    if (id != 0) {

        int x = 6;
        write(filedescriptor[1], &x, sizeof(int));
        close(filedescriptor[1]);
    } else {

        int y;
        read(filedescriptor[0], &y, sizeof(int));
        printf(" o valor recebido foi %d\n", y);
    }

    return 0;
}