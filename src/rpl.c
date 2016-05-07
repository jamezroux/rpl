#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
	FILE *file;
	char c, *prog;
	bool dev = false;
	int n = 0, w = 0, x = 0, y = 0, z = 0, loop = 0, i = 0, tmp_num = 0, un = 0;
	int stacks[5][2][2][2];
	char log[500];
	if(argc < 2) { printf("Error, usage is rcl <filename> <options>\n"); return 0; }
	for(loop = 0; loop < argc; loop++) {
		if(!strncmp(argv[loop], "-d", 2)) {
			dev = true;
		}
	}
	prog = argv[1];
	file = fopen(prog, "r");
	if (file == NULL) 
		perror ("Error reading file");
	else {
		do {
			c = getc(file);
			switch(c) {
				case '1':
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = 1;
					break;
				case '2':
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = 2;
					break;
				case '3':
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = 3;
					break;
				case '4':
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = 4;
					break;
				case '5':
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = 5;
					break;
				case '6':
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = 6;
					break;
				case '7':
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = 7;
					break;
				case '8':
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = 8;
					break;
				case '9':
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = 9;
					break;
				case '0':
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = 0;
					break;
				case '+':
					stacks[w][x][y][1] = stacks[w][x][y][0] + stacks[w][x][y][1];
					stacks[w][x][y][0] = '\0';
					break;
				case '-':
					stacks[w][x][y][1] = stacks[w][x][y][0] - stacks[w][x][y][1];
					stacks[w][x][y][0] = '\0';
					break;
				case '*':
					stacks[w][x][y][1] = stacks[w][x][y][1] * stacks[w][x][y][0];
					stacks[w][x][y][0] = '\0';
					break;
				case '/':
					stacks[w][x][y][1] = stacks[w][x][y][0] / stacks[w][x][y][1];
					stacks[w][x][y][0] = '\0';
					break;
				case '>':
					x += 1;
					z = 0;
					if (x >= 2) { x = 0; }
					break;
				case '<':
					x -= 1;
					z = 0;
					if (x <= -1) { x = 2; }
					break;
				case 'v':
					y -= 1;
					z = 0;
					if (y <= -1) { y = 0; }
					break;
				case '^':
					y += 1;
					z = 0;
					if (y <= -1) { y = 0; }
					break;
				case 'x':
					c = getc(file);
					switch(c) {
						case '>':
							if (x >= 2) { n = 0; } else { n = x + 1; }
							stacks[w][n][y][0] = stacks[w][n][y][1];
							stacks[w][n][y][1] = stacks[w][x][y][1];
							stacks[w][x][y][0] = stacks[w][x][y][1];
							break;
						case '<':
							if (x <= 0) { n = 2; } else { n = x - 1; }
							stacks[w][n][y][0] = stacks[w][n][y][1];
							stacks[w][n][y][1] = stacks[w][x][y][1];
							stacks[w][x][y][0] = stacks[w][x][y][1];
							break;
						case 'v':
							if (y <= 0) { n = 0; } else { n = y - 1; }
							stacks[w][x][n][0] = stacks[w][x][n][1];
							stacks[w][x][n][1] = stacks[w][x][y][1];
							stacks[w][x][y][0] = stacks[w][x][y][1];
							break;
						case '^':
							if (y >= 2) { n = 2; } else { n = y + 1; }
							stacks[w][x][n][0] = stacks[w][x][n][1];
							stacks[w][x][n][1] = stacks[w][x][y][1];
							stacks[w][x][y][0] = stacks[w][x][y][1];
							break;
					}
					break;
				case '.':
					printf("%d", stacks[w][x][y][1]);
					stacks[w][x][y][1] = stacks[w][x][y][0];
					stacks[w][x][y][0] = '\0';
					break;
				case ',':
					printf("%c", stacks[w][x][y][1]);
					stacks[w][x][y][1] = stacks[w][x][y][0];
					stacks[w][x][y][0] = '\0';
					break;
				case 'y':
					c = getc(file);
					switch(c) {
						case '>':
							if (x >= 2) { n = 0; } else { n = x + 1; }
							if (stacks[w][x][y][1] == stacks[w][n][y][1]) {
								stacks[w][x][y][1] = 1;
							} else { stacks[w][x][y][1] = 0; }
							break;
						case '<':
							if (x <= 0) { n = 2; } else { n = x - 1; }
							if (stacks[w][x][y][1] == stacks[w][n][y][1]) {
								stacks[w][x][y][1] = 1;
							} else { stacks[w][x][y][1] = 0; }
							break;
						case 'v':
							if (y <= 0) { n = 0; } else { n = y - 1; }
							if (stacks[w][x][y][1] == stacks[w][x][n][1]) {
								stacks[w][x][y][1] = 1;
							} else { stacks[w][x][y][1] = 0; }
							break;
						case '^':
							if (y >= 2) { n = 2; } else { n = y + 1; }
							if (stacks[w][x][y][1] == stacks[w][x][n][1]) {
								stacks[w][x][y][1] = 1;
							} else { stacks[w][x][y][1] = 0; }
							break;
					}
					break;
				case '!':
					if (stacks[w][x][y][1] == 0) { stacks[w][x][y][1] = 1; }
					else { stacks[w][x][y][1] = 0; }
					break;
				case '@':
					exit(0);
					break;
				case '~':
					scanf("%d", &tmp_num);
					stacks[w][x][y][0] = stacks[w][x][y][1];
					stacks[w][x][y][1] = tmp_num;
					break;
				case 'c':
					for (un = 0; un < stacks[w][x][y][1]; un++) { 
						c = getc(file);
						log[un] = c;
					}
					break;
				case 'p':
					for (un = sizeof(log); un > -1; un--) {
						ungetc(log[un], file);
					}
					break;
				case 'L':
					stacks[w - 1][x][y][0] = stacks[w][x][y][0];
					stacks[w - 1][x][y][0] = stacks[w][x][y][0];
					stacks[w - 1][x][y][0] = stacks[w][x][y][0];
					stacks[w - 1][x][y][1] = stacks[w][x][y][1];
					stacks[w - 1][x][y][1] = stacks[w][x][y][1];
					stacks[w - 1][x][y][1] = stacks[w][x][y][1];
					stacks[w][x][y][0] = stacks[w + 3][x + 2][y][0];
					stacks[w][x][y][0] = stacks[w + 3][x + 2][y][0];
					stacks[w][x][y][0] = stacks[w + 3][x + 2][y][0];
					stacks[w][x][y][1] = stacks[w + 3][x + 2][y][1];
					stacks[w][x][y][1] = stacks[w + 3][x + 2][y][1];
					stacks[w][x][y][1] = stacks[w + 3][x + 2][y][1];
					stacks[w + 3][x][y][0] = stacks[w + 2][x][y][0];
					stacks[w + 3][x][y][0] = stacks[w + 2][x][y][0];
					stacks[w + 3][x][y][0] = stacks[w + 2][x][y][0];
					stacks[w + 3][x][y][1] = stacks[w + 2][x][y][1];
					stacks[w + 3][x][y][1] = stacks[w + 2][x][y][1];
					stacks[w + 3][x][y][1] = stacks[w + 2][x][y][1];
					stacks[w + 2][x][y][0] = stacks[w + 1][x][y][0];
					stacks[w + 2][x][y][0] = stacks[w + 1][x][y][0];
					stacks[w + 2][x][y][0] = stacks[w + 1][x][y][0];
					stacks[w + 2][x][y][1] = stacks[w + 1][x][y][1];
					stacks[w + 2][x][y][1] = stacks[w + 1][x][y][1];
					stacks[w + 2][x][y][1] = stacks[w + 1][x][y][1];
					stacks[w + 1][x][y][0] = stacks[w - 1][x][y][0];
					stacks[w + 1][x][y][0] = stacks[w - 1][x][y][0];
					stacks[w + 1][x][y][0] = stacks[w - 1][x][y][0];
					stacks[w + 1][x][y][1] = stacks[w - 1][x][y][1];
					stacks[w + 1][x][y][1] = stacks[w - 1][x][y][1];
					stacks[w + 1][x][y][1] = stacks[w - 1][x][y][1];
					break;
				case 'l':
					break;
				case 'R':
					break;
				case 'r':
					break;
				case 'U':
					break;
				case 'u':
					break;
				case 'D':
					break;
				case 'd':
					break;
				case 'B':
					break;
				case 'b':
					break;
				case 'F':
					break;
				case 'f':
					break;
			}
			if (dev == true) {
				i++;
				printf("\nIteration: %d\t", i);
				printf("x:%d y:%d face:%d\n", x, y, w);
				usleep(100000);
			}
		} while (c != EOF);
		fclose (file);
	}
	exit(0);
}
