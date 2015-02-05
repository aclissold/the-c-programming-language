#include <stdio.h>
#include <signal.h>

void handler() {
    printf("what up\n");
}

/* catch ctrl+c (interrupt signal) */
int main()
{
    signal(SIGINT, handler);

    while(1)
        ;
}
