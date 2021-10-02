/*
 *    Violence - a su -c prompt
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    puts("Violence ENABLED.");
    for (;;) {
	char command[100] = "";
	char violentcmd[125] = "";
	printf("👊 ~ ");
	fgets(command, 100, stdin);
	command[strcspn(command, "\n")] = 0; /* Whitespace trimming */
	if (!strcmp(command, "exit")) { break; }
	strcat(violentcmd, "su -c \"");
	strcat(violentcmd, command);
	strcat(violentcmd, "\"");
	system(violentcmd);
    }
    puts("Violence DISABLED.");
}
