// Guess the Number Game (2 Player Game) *BY Abhishikt Mohanty.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// Player 1
	int guess, num, nguesses = 1;
	srand(time(0));
	num = rand() % 100 + 1;
	printf("\t***Starting the Game***\n");
	printf("\t  **Guess The Number**\n\n");
	printf("\n\t\t *Player-1 Turn*\n\n");
	do
	{
		printf("Guess the number between 1 to 100 : \n");
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("Lower number please!!!\n");
		}
		else if (guess < num)
		{
			printf("Higher number please!!!\n");
		}
		else
		{
			printf("\n*Player-1 guessed it in %d attempts*\n", nguesses);
		}
		nguesses++;
	} while (guess != num);
	int x = nguesses - 1;

	// Player 2
	int guessx, numx, nguessesx = 1;
	srand(time(0));
	numx = rand() % 100 + 1;
	printf("\n\n\t\t *Player-2 Turn*\n\n");
	do
	{
		printf("Guess the number between 1 to 100 : \n");
		scanf("%d", &guessx);
		if (guessx > numx)
		{
			printf("Lower number please!!!\n");
		}
		else if (guessx < numx)
		{
			printf("Higher number please!!!\n");
		}
		else
		{
			printf("\n*Player-2 guessed it in %d attempts*\n", nguessesx);
		}
		nguessesx++;
	} while (guessx != numx);
	int y = nguessesx - 1;

	// Result
	printf("\n\t\t  ***Result***\n");
	if (nguesses < nguessesx)
	{
		printf("\n\t!!!Player-1 is the WINNER!!!\n");
	}
	else if (nguesses > nguessesx)
	{
		printf("\n\t!!!Player-2 is the WINNER!!!\n");
	}
	else if (nguesses == nguessesx)
	{
		printf("\n\t\t !!!MATCH DRAW!!!\n");
	}
	int quit;
	printf("\n\n\n\n\tEnter '0' to Quit the game.\n\t");
	scanf("%d", &quit);

	return 0;
}