#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static void sig_usr(int signo)
{

        if( signo == SIGUSR2)
                printf( "process of Mahrov got signal\n" );

}


int main(void)
{

     printf( "my PID: %d\n",getpid());
     for( ; ; )
        pause();
     return EXIT_SUCCESS;
