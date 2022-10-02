#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

int main(int argc , char * argv[])
{

        pid_t pid = ( pid_t ) atoi(argv[1]);
        if(!kill(pid,SIGUSR2))
                printf( "send signal to the process of Mahrov with PID=%d!\n",pid );
        else
                fprintf( stderr,"ERROR\n" );
        return EXIT_SUCCESS;

}

