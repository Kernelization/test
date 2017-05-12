#include <stdlib.h>
#include <stdio.h>

int main(void) {
        char msg[25] = "Hello world!\n\0";
        char *c = &msg[0];
	puts(c);
	FILE *openfile = fopen("test.txt", "w+");
        while(*c != 0) {
                fputc(*c, openfile);
		c++;
        }
	return 0;
}
