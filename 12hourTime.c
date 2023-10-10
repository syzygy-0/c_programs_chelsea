/* This program asks the user for a 24-hour time, then displays the time in 12-hour form */

#include <stdio.h>

int main(void)
{
	int hour24, min24;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour24, &min24);

	printf("Equivalent 12-hour time: ");
	
	switch (hour24){
		case 0: printf("12"); break;
		case 1: printf("1"); break;
		case 2: printf("2"); break;
		case 3: printf("3"); break;
		case 4: printf("4"); break;
		case 5: printf("5"); break;
		case 6: printf("6"); break;
		case 7: printf("7"); break;
		case 8: printf("8"); break;
		case 9: printf("9"); break;
		case 10: printf("10"); break;
		case 11: printf("11"); break;
		case 12: printf("12"); break;
		case 13: printf("1"); break;
		case 14: printf("2"); break;
		case 15: printf("3"); break;
		case 16: printf("4"); break;
		case 17: printf("5"); break;
		case 18: printf("6"); break;
		case 19: printf("7"); break;
		case 20: printf("8"); break;
		case 21: printf("9"); break;
		case 22: printf("10"); break;
		case 23: printf("11"); break;
	}
	printf(":%d ", min24);

	if (hour24 >= 0 && hour24 <= 11)
		printf("AM\n");
	else
		printf("PM\n");

	return 0;
}
