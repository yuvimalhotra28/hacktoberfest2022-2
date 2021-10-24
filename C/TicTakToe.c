#include<stdio.h>


char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int win();
int bord();

main()
{
	int player=1,i,c;
	
	do
	{
		char mark;
		bord();
		
		player = (player%2) ? 1 : 2;
		
		printf("Player %d, enter a number:  ", player);
        scanf("%d", &c);
        
        mark = (player == 1) ? 'X' : 'O';
        
        if(c == 1 && square[1] == '1')
        {
        	square[1] = mark;
		}
		else if(c == 2 && square[2] == '2')
		{
			square[2] = mark;
		}
		else if(c == 3 && square[3] == '3')
		{
			square[3] = mark;
		}
		else if(c == 4 && square[4] == '4')
		{
			square[4] = mark;
		}
		else if(c == 5 && square[5] == '5')
		{
			square[5] = mark;
		}
		else if(c == 6 && square[6] == '6')
		{
			square[6] = mark;
		}
		else if(c == 7 && square[7] == '7')
		{
			square[7] = mark;
		}
		else if(c == 8 && square[8] == '8')
		{
			square[8] = mark;
		}
		else if(c == 9 && square[9] == '9')
		{
			square[9] = mark;
		}
		else
		{
			printf("\n\nEnter Valid Position.....");
			player--;
		}
	
		i = win();

        player++;
    
	}while(i == -1);
	
	bord();
	
	if(i==1)
    {
       	printf("==>\aPlayer %d win ", --player);
	}
	else
	{
		printf("==>\aGame Draw ");
	}
	
	
}

int bord()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
   printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
   printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
   printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
    printf("     |     |     \n\n");
}

int win()
{
	if(square[1] == square[2] && square[2] == square[3])
	{
		return 1;
	}
	else if(square[4] == square[5] && square[5] == square[6])
	{
		return 1;
	}
	else if(square[7] == square[8] && square[8] == square[9])
	{
		return 1;
	}
	else if(square[1] == square[4] && square[4] == square[7])
	{
		return 1;
	}
	else if(square[2] == square[5] && square[5] == square[8])
	{
		return 1;
	}
	else if(square[3] == square[6] && square[6] == square[9])
	{
		return 1;
	}
	else if(square[1] == square[5] && square[5] == square[9])
	{
		return 1;
	}
	else if(square[3] == square[5] && square[5] == square[7])
	{
		return 1;
	}
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5'&&
	square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
	{
		return 0;
	}
	else
	{
		return  - 1;
	}
        
}
