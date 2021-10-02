/*
 *    Violence - a su -c prompt
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char command[100] = "";
    char violentcmd[125] = "";
    puts("Violence ENABLED.");
    for (;;) {
	printf("👊 ~ ");
	fgets(command, 100, stdin);
	command[strcspn(command, "\n")] = 0; /* Whitespace trimming */
	strcat("su -c ", violentcmd);
	strcat(command, violentcmd);
	system(violentcmd);
    }
}
