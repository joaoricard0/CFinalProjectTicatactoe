//JOGO DO GALO
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

    void jogarJogador() {
    char casas[9] = {'1','2','3','4','5','6','7','8','9'};
	tabJogo(casas);
	char res;
	int vezesJogadas,jogada, vez = 0,i;
	int jog1 = 0, jog2 = 0, emp = 0;
	
	do {
		vezesJogadas = 1;
		for(i=0;i<=8;i++) {
			casas[i] = ' ';
		}
	
	do {
		tabJogo(casas);
		if(jogada==0) {
			printf("\t\t\t\t\tJogada incorreta, tente novamente\n");
			
		}
		printf("\t\t\t\t\tEscolha a sua jogada de [1-9]\n");
		if(vez%2 == 0) {
			printf("\tJogador 1\n");
		}else {
			printf("\tJogador 2\n");
		}
		
		scanf("%i", &jogada);
		if(jogada < 1 || jogada > 9) {
			jogada = 0;
		} else if(casas[jogada-1] != ' ') {
			jogada = 0;
		} else {
			if(vez%2 == 0) {
				casas[jogada-1] = 'X';
			}else {
				casas[jogada-1] = 'O';
			}
			vezesJogadas++;
			vez++;
		}
		if (casas[0] =='X' && casas[1] =='X' && casas[2] =='X') {vezesJogadas = 11;}
		if (casas[3] =='X' && casas[4] =='X' && casas[5] =='X') {vezesJogadas = 11;}
		if (casas[6] =='X' && casas[7] =='X' && casas[8] =='X') {vezesJogadas = 11;}
		if (casas[0] =='X' && casas[3] =='X' && casas[6] =='X') {vezesJogadas = 11;}
		if (casas[1] =='X' && casas[4] =='X' && casas[7] =='X') {vezesJogadas = 11;}
		if (casas[2] =='X' && casas[5] =='X' && casas[8] =='X') {vezesJogadas = 11;}
		if (casas[0] =='X' && casas[4] =='X' && casas[8] =='X') {vezesJogadas = 11;}
		if (casas[2] =='X' && casas[4] =='X' && casas[6] =='X') {vezesJogadas = 11;}
		
		if (casas[0] =='O' && casas[1] =='O' && casas[2] =='O') {vezesJogadas = 12;}
		if (casas[3] =='O' && casas[4] =='O' && casas[5] =='O') {vezesJogadas = 12;}
		if (casas[6] =='O' && casas[7] =='O' && casas[8] =='O') {vezesJogadas = 12;}
		if (casas[0] =='O' && casas[3] =='O' && casas[6] =='O') {vezesJogadas = 12;}
		if (casas[1] =='O' && casas[4] =='O' && casas[7] =='O') {vezesJogadas = 12;}
		if (casas[2] =='O' && casas[5] =='O' && casas[8] =='O') {vezesJogadas = 12;}
		if (casas[0] =='O' && casas[4] =='O' && casas[8] =='O') {vezesJogadas = 12;}
		if (casas[2] =='O' && casas[4] =='O' && casas[6] =='O') {vezesJogadas = 12;}
		
	}while(vezesJogadas <= 9);
	tabJogo(casas);
	if(vezesJogadas==10) {
		printf("\t\t\t\t\t\tEmpate!\n");
		emp++;
	} if(vezesJogadas==11) {
		printf("\t\t\t\t\t   Jogador 1 é o Vencedor!\n");
		jog1++;
	} if(vezesJogadas==12) {
		printf("\t\t\t\t\t   Jogador 2 é o Vencedor!\n");
		jog2++;
	}
		printf("\t\t\t\tpontos jogador 1: %i\n",jog1);
		printf("\t\t\t\tpontos jogador 2: %i\n",jog2);
		printf("\t\t\t\tEmpates: %i\n",emp);
		printf("\t\t\t\t\t\tNovo Jogo? [S-N]\n");
		scanf("%s",&res);
	} while (res=='s');
}

void jogarCPU() {
    char casas[9] = {'1','2','3','4','5','6','7','8','9'};
	tabJogo(casas);
	char res;
	int vezesJogadas,jogada, vez = 0,i;
	int jog = 0, cpu = 0, emp = 0;
	
	do {
		vezesJogadas = 1;
		for(i=0;i<=8;i++) {
			casas[i] = ' ';
		}
	
	do {
		tabJogo(casas);
		if(jogada==0) {
			printf("\t\t\t\t\tJogada incorreta, tente novamente\n");
			
		}
		printf("\t\t\t\t\tEscolha a sua jogada de [1-9]\n");
		if(vez%2 == 0) {
			printf("\tJogador\n");
			scanf("%i", &jogada);
		}else {
			if (casas[0] =='O' && casas[1] =='O' && casas[2] ==' ') {jogada = 3;}
			else if (casas[3] =='O' && casas[4] =='O' && casas[5] ==' ') {jogada = 6;}
			else if (casas[6] =='O' && casas[7] =='O' && casas[8] ==' ') {jogada = 9;}
			else if (casas[0] =='O' && casas[1] ==' ' && casas[2] =='O') {jogada = 2;}
			else if (casas[3] =='O' && casas[4] ==' ' && casas[5] =='O') {jogada = 5;}
			else if (casas[6] =='O' && casas[7] ==' ' && casas[8] =='O') {jogada = 8;}
			else if (casas[0] ==' ' && casas[1] =='O' && casas[2] =='O') {jogada = 1;}
			else if (casas[3] ==' ' && casas[4] =='O' && casas[5] =='O') {jogada = 4;}
			else if (casas[6] ==' ' && casas[7] =='O' && casas[8] =='O') {jogada = 7;}
			
			else if (casas[0] =='O' && casas[3] =='O' && casas[6] ==' ') {jogada = 7;}
			else if (casas[1] =='O' && casas[4] =='O' && casas[7] ==' ') {jogada = 8;}
			else if (casas[2] =='O' && casas[5] =='O' && casas[8] ==' ') {jogada = 9;}
			else if (casas[0] =='O' && casas[3] ==' ' && casas[6] =='O') {jogada = 4;}
			else if (casas[1] =='O' && casas[4] ==' ' && casas[7] =='O') {jogada = 5;}
			else if (casas[2] =='O' && casas[5] ==' ' && casas[8] =='O') {jogada = 6;}
			else if (casas[0] ==' ' && casas[3] =='O' && casas[6] =='O') {jogada = 1;}
			else if (casas[1] ==' ' && casas[4] =='O' && casas[7] =='O') {jogada = 2;}
			else if (casas[2] ==' ' && casas[5] =='O' && casas[8] =='O') {jogada = 3;}
			
			else if (casas[0] =='O' && casas[4] =='O' && casas[8] ==' ') {jogada = 9;}
			else if (casas[2] =='O' && casas[4] =='O' && casas[6] ==' ') {jogada = 7;}
			else if (casas[0] =='O' && casas[4] ==' ' && casas[8] =='O') {jogada = 5;}
			else if (casas[2] =='O' && casas[4] ==' ' && casas[6] =='O') {jogada = 5;}
			else if (casas[0] ==' ' && casas[4] =='O' && casas[8] =='O') {jogada = 1;}
			else if (casas[2] ==' ' && casas[4] =='O' && casas[6] =='O') {jogada = 3;}
			
			else if (casas[0] =='X' && casas[1] =='X' && casas[2] ==' ') {jogada = 3;}
			else if (casas[3] =='X' && casas[4] =='X' && casas[5] ==' ') {jogada = 6;}
			else if (casas[6] =='X' && casas[7] =='X' && casas[8] ==' ') {jogada = 9;}
			else if (casas[0] =='X' && casas[1] ==' ' && casas[2] =='X') {jogada = 2;}
			else if (casas[3] =='X' && casas[4] ==' ' && casas[5] =='X') {jogada = 5;}
			else if (casas[6] =='X' && casas[7] ==' ' && casas[8] =='X') {jogada = 8;}
			else if (casas[0] ==' ' && casas[1] =='X' && casas[2] =='X') {jogada = 1;}
			else if (casas[3] ==' ' && casas[4] =='X' && casas[5] =='X') {jogada = 4;}
			else if (casas[6] ==' ' && casas[7] =='X' && casas[8] =='X') {jogada = 7;}
			
			else if (casas[0] =='X' && casas[3] =='X' && casas[6] ==' ') {jogada = 7;}
			else if (casas[1] =='X' && casas[4] =='X' && casas[7] ==' ') {jogada = 8;}
			else if (casas[2] =='X' && casas[5] =='X' && casas[8] ==' ') {jogada = 9;}
			else if (casas[0] =='X' && casas[3] ==' ' && casas[6] =='X') {jogada = 4;}
			else if (casas[1] =='X' && casas[4] ==' ' && casas[7] =='X') {jogada = 5;}
			else if (casas[2] =='X' && casas[5] ==' ' && casas[8] =='X') {jogada = 6;}
			else if (casas[0] ==' ' && casas[3] =='X' && casas[6] =='X') {jogada = 1;}
			else if (casas[1] ==' ' && casas[4] =='X' && casas[7] =='X') {jogada = 2;}
			else if (casas[2] ==' ' && casas[5] =='X' && casas[8] =='X') {jogada = 3;}
			
			else if (casas[0] =='X' && casas[4] =='X' && casas[8] ==' ') {jogada = 9;}
			else if (casas[2] =='X' && casas[4] =='X' && casas[6] ==' ') {jogada = 7;}
			else if (casas[0] =='X' && casas[4] ==' ' && casas[8] =='X') {jogada = 5;}
			else if (casas[2] =='X' && casas[4] ==' ' && casas[6] =='X') {jogada = 5;}
			else if (casas[0] ==' ' && casas[4] =='X' && casas[8] =='X') {jogada = 1;}
			else if (casas[2] ==' ' && casas[4] =='X' && casas[6] =='X') {jogada = 3;}
			else {
				do{
					srand((unsigned)time(NULL));
					jogada = 1 + rand() % 9;
				} while(casas[jogada-1] != ' ');
			}
		}
		
		if(jogada < 1 || jogada > 9) {
			jogada = 0;
		} else if(casas[jogada-1] != ' ') {
			jogada = 0;
		} else {
			if(vez%2 == 0) {
				casas[jogada-1] = 'X';
			}else {
				casas[jogada-1] = 'O';
			}
			vezesJogadas++;
			vez++;
		}
		if (casas[0] =='X' && casas[1] =='X' && casas[2] =='X') {vezesJogadas = 11;}
		if (casas[3] =='X' && casas[4] =='X' && casas[5] =='X') {vezesJogadas = 11;}
		if (casas[6] =='X' && casas[7] =='X' && casas[8] =='X') {vezesJogadas = 11;}
		if (casas[0] =='X' && casas[3] =='X' && casas[6] =='X') {vezesJogadas = 11;}
		if (casas[1] =='X' && casas[4] =='X' && casas[7] =='X') {vezesJogadas = 11;}
		if (casas[2] =='X' && casas[5] =='X' && casas[8] =='X') {vezesJogadas = 11;}
		if (casas[0] =='X' && casas[4] =='X' && casas[8] =='X') {vezesJogadas = 11;}
		if (casas[2] =='X' && casas[4] =='X' && casas[6] =='X') {vezesJogadas = 11;}
		
		if (casas[0] =='O' && casas[1] =='O' && casas[2] =='O') {vezesJogadas = 12;}
		if (casas[3] =='O' && casas[4] =='O' && casas[5] =='O') {vezesJogadas = 12;}
		if (casas[6] =='O' && casas[7] =='O' && casas[8] =='O') {vezesJogadas = 12;}
		if (casas[0] =='O' && casas[3] =='O' && casas[6] =='O') {vezesJogadas = 12;}
		if (casas[1] =='O' && casas[4] =='O' && casas[7] =='O') {vezesJogadas = 12;}
		if (casas[2] =='O' && casas[5] =='O' && casas[8] =='O') {vezesJogadas = 12;}
		if (casas[0] =='O' && casas[4] =='O' && casas[8] =='O') {vezesJogadas = 12;}
		if (casas[2] =='O' && casas[4] =='O' && casas[6] =='O') {vezesJogadas = 12;}
		
	}while(vezesJogadas <= 9);
	tabJogo(casas);
	if(vezesJogadas==10) {
		printf("\t\t\t\t\t\tEmpate!\n");
		emp++;
	} if(vezesJogadas==11) {
		printf("\t\t\t\t\t   Jogador é o Vencedor!\n");
		jog++;
	} if(vezesJogadas==12) {
		printf("\t\t\t\t\t   Computador é o Vencedor!\n");
		cpu++;
	}
		printf("\t\t\t\tpontos Jogador: %i\n",jog);
		printf("\t\t\t\tpontos Computador: %i\n",cpu);
		printf("\t\t\t\tEmpates: %i\n",emp);
		printf("\t\t\t\t\t\tNovo Jogo? [S-N]\n");
		scanf("%s",&res);
	} while (res=='s');
}

void instrucoes()
{
	printf("\n\n\n\n");
    printf( "\t\t\t\t\tINSTRUÇÕES DO JOGO DO GALO\n" );
    printf( "\t\t\t\t\t===========================\n" );
    printf( "\t\t\tJogador 1 (X) introduz número de 1 a 9 de cada jogada que fizer.\n");
    printf( "\t\t\tJogador 2/Computador (O) joga depois do Jogador 1 da mesma forma.\n");
    printf( "\t\t\tOs jogadores continuam a jogar até haver um vencedor ou um empate.\n");
    printf( "\n" );
} 

void menu()
{
	printf("\n\n\n\n");
	printf("\t\t\tJOGO DO GALO - JOÃO LEIGO - UFCD 810 - PROGRAMAÇÃO C E C++ AVANÇADA");
	printf("\n\n\n\n");
    printf( "\t\t\t\t\t\t JOGO DO GALO\n" );
    printf( "\t\t\t\t\t\t==============\n" );
    printf( "\t\t\t\t\t\t 1-Instruções\n" );
    printf( "\t\t\t\t\t\t 2-Jogar vs Jogador\n" );
    printf( "\t\t\t\t\t\t 3-Jogar vs CPU\n" );
    printf( "\t\t\t\t\t\t 4-Sair\n" );
    printf( "\n" );
} 

void tabJogo(char casas2[9]) {
	system("cls");
	printf("\n\n\n\n");
	printf("\t\t\t\t\t\t %c || %c || %c \n",casas2[0],casas2[1],casas2[2]);
	printf("\t\t\t\t\t\t=============\n");
	printf("\t\t\t\t\t\t %c || %c || %c \n",casas2[3],casas2[4],casas2[5]);
	printf("\t\t\t\t\t\t=============\n");
	printf("\t\t\t\t\t\t %c || %c || %c \n",casas2[6],casas2[7],casas2[8]);
}





int main() {
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	while( 1 )
    {
        menu();
        printf( "\t\t\t\t\t\tOpção: " );
        scanf( "%d", &n );
        switch( n )
        {
            case 1:
                instrucoes();
                break;
            case 2:
                jogarJogador();
                break;
                case 3:
                jogarCPU();
                break;
            case 4:
                return( 0 );
            default:
                printf( "\tOpção errada.\n" );
        }
    }

	
	
	return 0;
}
