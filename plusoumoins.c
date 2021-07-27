#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	const int MAX = 100, MIN = 1;

	int nombreMystere;
	int nombreEntre;
	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

	while(nombreEntre != nombreMystere)
	{
		printf("Quel est le nombre? : ");
		scanf("%d", &nombreEntre);

		if(nombreEntre < nombreMystere)
		{
			printf("C'est plus!\n");
		}
		else if(nombreEntre > nombreMystere)
		{
			printf("C'est moins!\n");
		}
		else
		{
			printf("Bravo! Vous avez trouvé le nombre mystère!\n");
		}
	}

	return 0;


}



