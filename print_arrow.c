#include <stdio.h>

int main(void) {
	int baseInt;
	int headInt;

	puts("Enter the number for arrow body:");
	scanf("%d", &headInt);
	puts("Enter the number for arrow head:");
	scanf("%d", &headInt);

	printf("    %d\n", baseInt);
	printf("    %d%d\n", headInt, headInt);
	printf("%d%d%d%d%d%d%d\n", baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt);
	printf("%d%d%d%d%d%d%d%d\n", baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt, headInt);
	printf("%d%d%d%d%d%d%d\n", baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt);
	printf("    %d%d\n", headInt, headInt);
	printf("    %d\n", headInt);

	return 0;
}
