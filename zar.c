#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
	srand(time(NULL));
	int x,y;
	x = (rand()%6)+1;
	y = (rand()%6)+1;
	printf("Dau cu zaru %d %d", x, y);
	if (x == 6 && y == 5)
		printf(" n-am nevoie de servici");
	else if (x == 6 && y == 6)
		printf(" ca mine nu se mai naste");
	putchar('\n');
	return 0;
}

