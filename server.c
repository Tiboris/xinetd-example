// Author Tibor Dudlák xdudla00@stud.fit.vutbr.cz
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <stdbool.h>




bool handle_request();
void sig_handler(int signal);
/*
*   Main
*/
int main(int argc, char** argv)
{
	signal(SIGINT, sig_handler);
	// handling server run and parsing file
	return handle_request();
}

bool handle_request()
{
	while(true)
	{
		printf("Hello xinetd service\n");
		break;	
	}
	return EXIT_SUCCESS;
}


void sig_handler(int signal)
{
	printf("\nInterrupt signal ( %d ) received...\nClosing server socket...\n", signal);
	exit(EXIT_SUCCESS);
}
