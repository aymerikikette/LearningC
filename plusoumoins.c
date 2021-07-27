#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	const int MAX = 100, MIN = 1;

	int unknownNumber;
	int enteredNumber;
	srand(time(NULL));
	unknownNumber = (rand() % (MAX - MIN + 1)) + MIN;

	while(enteredNumber != unknownNumber)
	{
		printf("What's the number? : ");
		scanf("%d", &enteredNumber);

		if(enteredNumber < unknownNumber)
		{
			printf("It's more!\n");
		}
		else if(enteredNumber > unknownNumber)
		{
			printf("It's less!\n");
		}
		else
		{
			printf("Well done! You found the mysterious number!\n");
		}
	}

	return 0;


}



