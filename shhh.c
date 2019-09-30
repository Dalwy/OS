#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/*
 * Write a small shell - called shhh - that has the
following capabilities:

1. Can execute a command with the accompanying arguments.
2. Recognize multiple pipe requests and handle them.
3. Recognize redirection requests and handle them.
4. Type "exit" to quit the shhh shell
 */

int main(int argc, char *argv[])
{
    while(1)
    {
        int commands[10],
            pipes[10],
            pipecount = 0,
            Count = 0;
        commands[Count++] = 0;
        int x;
        for(x = 1; x < Count; x++)
        {
            if(strcmp(argv[x], "|") == 0)
            {
                pipes[pipecount++] = x;
                argv[x] = 0;
                commands[Count++] = x + 1;
            }
            else if(strcmp(argv[x], "<") == 0)
            {
                
            }
        }
    }




    return 0;
}