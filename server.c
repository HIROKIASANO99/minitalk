#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
    pid_t pid = getpid();
    printf("Server PID: %d\n", pid);
    return 0;
}


pid_t getpid(void);
