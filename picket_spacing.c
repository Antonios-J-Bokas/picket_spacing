/*
Program: picket_spacing.c
Description: Formula for determining space between pickets of a railing
Author: Antonios J. Bokas
*/

#include <stdio.h>

int main(void) {

	puts("\nPicket Spacing Calculator\n");
	
	float ts = 0;
	float pw = 0;
	
	printf("%s", "Enter total span (inches): ");
	scanf("%f", &ts);
	printf("%s", "Enter picket width (inches): ");
	scanf("%f", &pw);
	
	float ps = 0;
	int pn = 1;
	
	printf("\n%s%20s", "Pickets", "Space Between Each");
	
	do {
		ps = (ts - (pw * pn)) / (pn + 1);
		printf("\n%02zu       %04.2f\"", pn++, ps);
	} while (ps > pw);
	
	puts("");

}