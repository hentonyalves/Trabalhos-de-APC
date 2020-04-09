/* Hentony Alves Pereira
   Algoritmos e programação de computadores
   Trabalho 3 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>

int aleatorio ( int *ptrvetor) {

	int aux;
	
	srand(time(NULL));
	aux = rand() % 1000;

	while (aux==*ptrvetor) {
		srand(time(NULL));
		aux = rand() % 1000;
	}
	
	*ptrvetor=aux;
	return *ptrvetor;
}

void limparbuffer (void) {
	
	char c;
	
	while ((c=getchar()) != '\n' && c!= EOF);
}

void imprime (char mapa[28][68],int *p1, int *p2, int *pvida) {

	int i,j;

    system("clear");
	printf("Vida: %d\n", *pvida);
	
	for(i=0; i<28; ++i) {
		for(j=0; j<68; ++j) { 
			
			if ((i==0 && j>=0 && j<=67) || (i==27 && j>=0 && j<=67 ) || (j==0 && i>=0 && i<=27) || (j==67 && i>=0 && i<=27))
				printf("%c",mapa[i][j]);
			
				else if ((i>=(*p1-2) && i<=(*p1+2)) && (j>=(*p2-3) && j<=(*p2+3)))
					printf("%c",mapa[i][j]);
			
				else
					putchar(' ');
		}
		
		putchar('\n');
	}
}

int movimenta (char escolha, char mapa[28][68], int *p1, int *p2, int *pvida, int *ptrvetor) {

  	char escolhamenu, escolhadesafio;
  	char escolhaenigma[12];			
  	char respostaenigma[]="calculadora";
  	int resultado, valor, aux=0, escoal;

	if (escolha=='a' || escolha=='A') {
		
		if(mapa[*p1][*p2-1]==' ') {
			mapa[*p1][*p2]=' ';
			--*p2;
			mapa[*p1][*p2]='@';
		}
		
		if (*p1==4 && (*p2-1)==4 && mapa[*p1][*p2-1]=='?') {
			system("clear");
			printf("Durante o verão a Torre Eiffel fica:\n\nA) mais baixa                              B) mais alta\nC) esquenta que solta fumaça               D) sem alterações\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
			
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
		
			if (escolhadesafio!='b' && escolhadesafio!= 'B') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
				
				if (*pvida==0)	{
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
					
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
					
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
					
					else
						return 2;
				}
				getchar();
			}
		
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				--*p2;
				mapa[*p1][*p2]='@';
				mapa[3][3]=' ';
				mapa[3][4]=' ';
				mapa[3][5]=' ';
				getchar();
			}
		}
		
		if (*p1==4 && (*p2-1)==63 && mapa[*p1][*p2-1]=='?')	{
			system("clear");
			printf("Você tem um isqueiro.Numa cabana com uma vela, uma lamparina e uma lareira, qual você acende primeiro?\n\nA) a vela                              B) a lamparina\nC) a lareira                           D) nenhuma das anteriores\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
			
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
		
			if (escolhadesafio!='d' && escolhadesafio!= 'D') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
				
				if (*pvida==0)	{
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
			
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
			
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
					
					else
						return 2;
				}
				getchar();
			}
			
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				--*p2;
				mapa[*p1][*p2]='@';
				mapa[3][62]=' ';
				mapa[3][63]=' ';
				mapa[3][64]=' ';
				getchar();
			}
		}
		
		if (*p1==4 && (*p2-1)==34 && mapa[*p1][*p2-1]=='C') {
			system("clear");
			printf("\t\t\t\t[ENIGMA]\n\n\tQual o nome do dispositivo voltado para fins específicos\n\tque não pode ser qualificado como uma máquina de  Turing\n\te não foi projetado para flexibilizar tarefas e sim ope_\n\trações específicas ? ");
			scanf("%s", escolhaenigma);
			limparbuffer();
			resultado = strcasecmp(escolhaenigma, respostaenigma);

			if (resultado!=0) {
				system ("clear");
				printf("RESPOSTA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
			
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
					
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
			
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
		
			else {
				system ("clear");
				printf("RESPOSTA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				--*p2;
				mapa[*p1][*p2]='@';
				mapa[3][33]=' ';
				mapa[3][34]=' ';
				mapa[3][35]=' ';
				getchar();
			}
		}
		
		if (*p1==23 && (*p2-1)==4 && mapa[*p1][*p2-1]=='?') {
			system("clear");
			printf("Qual desses não foi um imperador romano ?\n\nA) Júlio César                              B) Tiberius\nC) Trajano                                  D) Marco Aurélio\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
				
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
		
			if (escolhadesafio!='a' && escolhadesafio!= 'A') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
			
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
					
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
			
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
		
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				--*p2;
				mapa[*p1][*p2]='@';
				mapa[24][3]=' ';
				mapa[24][4]=' ';
				mapa[24][5]=' ';
				getchar();
			}
		}
		
		if (*p1==23 && (*p2-1)==63 && mapa[*p1][*p2-1]=='?') {
			system("clear");
			printf("Onde o ser humano chegou primeiro ?\n\nA) na lua                                                       B) no ponto mais fundo do oceano\nC) no ponto mais alto da terra                                  D) no Polo Sul\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
		
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
		
			if (escolhadesafio!='d' && escolhadesafio!= 'D') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
			
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
			
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
					
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
		
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				--*p2;
				mapa[*p1][*p2]='@';
				mapa[24][62]=' ';
				mapa[24][63]=' ';
				mapa[24][64]=' ';
				getchar();
			}
		}
		
		if ((*p1)==23 && (*p2-1)==34 && mapa[*p1][*p2-1]=='?') {
			system("clear");
			printf("Você tem no máximo 20 tentativas para acertar um número entre 0 e 1000 gerado de maneira aleatória pelo computador.\n\n");
			valor = aleatorio (ptrvetor);
			
			while(aux!=20) {
				printf("%dº tentativa\n\nDigite a sua resposta:\n",aux+1);
				scanf("%d", &escoal);
				limparbuffer();
				
				if (escoal!=valor) {
					++aux;
					
					if (escoal<=(valor+20) && escoal >=(valor-20)){
						system ("clear");
						printf("QUENTE\n");
					
						if (escoal<=(valor+10) && escoal >=(valor-10)){
							system ("clear");
							printf("MUITO QUENTE\n");
					
							if (escoal<=(valor+5) && escoal >=(valor-5)){
								system ("clear");
								printf("QUENTE QUENTE QUENTE QUENTE\n");
							}
						}
					}	
				
					else {
						system ("clear");
						printf("FRIO\n");
					}
				}
				
				else
					break;
			}
			
			if (aux !=20) {
				system ("clear");
				printf("RESPOSTA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				--*p2;
				mapa[*p1][*p2]='@';
				mapa[24][33]=' ';
				mapa[24][34]=' ';
				mapa[24][35]=' ';
				getchar();
			}
			
			if (aux==20) {
				system ("clear");
				printf("RESPOSTAS ERRADAS, LOGO MENOS UM PONTO DE VIDA.\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
				
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
					
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
			
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
		}
		
		if (*p1==1 && (*p2-1)==4 && mapa[*p1][*p2-1]=='*') {
			system("clear");
			printf("PISTA: RA\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			--*p2;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if (*p1==1 && (*p2-1)==63 && mapa[*p1][*p2-1]=='*') {
			system("clear");
			printf("PISTA: CU\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			--*p2;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if (*p1==26 && (*p2-1)==4 && mapa[*p1][*p2-1]=='*') {
			system("clear");
			printf("PISTA: LA\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			--*p2;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if (*p1==26 && (*p2-1)==34 && mapa[*p1][*p2-1]=='*') {
			system("clear");
			printf("PISTA: DO\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			--*p2;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if (*p1==26 && (*p2-1)==63 && mapa[*p1][*p2-1]=='*') {
			system("clear");
			printf("PISTA: CAl\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			--*p2;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if (*p1==1 && (*p2-1)==34 && mapa[*p1][*p2-1]=='W') {
			system("clear");
			printf("PARABÉNS, VOCÊ CONSEGUIU DESVENDAR O ENIGMA. VOCÊ É DEMAIS\n\n[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
			escolhamenu=getchar();
			limparbuffer();
			
			while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhamenu=getchar();
				limparbuffer();
			}	
			
			if (escolhamenu!='a' && escolhamenu!='A')
				return 1;
			
			else
				return 2;
		}
		
		imprime(mapa, p1, p2, pvida);
	}

	if (escolha=='d' || escolha=='D') {
		
		if(mapa[*p1][*p2+1]==' ') {
			mapa[*p1][*p2]=' ';
			++*p2;
			mapa[*p1][*p2]='@';
		}
		
		if (*p1==4 && (*p2+1)==4 && mapa[*p1][*p2+1]=='?') {
			system("clear");
			printf("Durante o verão a Torre Eiffel fica:\n\nA) mais baixa                              B) mais alta\nC) esquenta que solta fumaça               D) sem alterações\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
		
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
		
			if (escolhadesafio!='b' && escolhadesafio!= 'B') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
			
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
					
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
					
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
					
					else
						return 2;
				}
				getchar();
			}
			
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				++*p2;
				mapa[*p1][*p2]='@';
				mapa[3][3]=' ';
				mapa[3][4]=' ';
				mapa[3][5]=' ';
				getchar();
			}
		}
		
		if (*p1==4 && (*p2+1)==63 && mapa[*p1][*p2+1]=='?') {
			system("clear");
			printf("Você tem um isqueiro.Numa cabana com uma vela, uma lamparina e uma lareira, qual você acende primeiro?\n\nA) a vela                              B) a lamparina\nC) a lareira                           D) nenhuma das anteriores\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
			
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
			
			if (escolhadesafio!='d' && escolhadesafio!= 'D') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
				
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
				
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
			
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
		
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				++*p2;
				mapa[*p1][*p2]='@';
				mapa[3][62]=' ';
				mapa[3][63]=' ';
				mapa[3][64]=' ';
				getchar();
			}
		}
		
		if (*p1==4 && (*p2+1)==34 && mapa[*p1][*p2+1]=='C') {
			system("clear");
			printf("\t\t\t\t[ENIGMA]\n\n\tQual o nome do dispositivo voltado para fins específicos\n\tque não pode ser qualificado como uma máquina de  Turing\n\te não foi projetado para flexibilizar tarefas e sim ope_\n\trações específicas ? ");
			scanf("%s", escolhaenigma);
			limparbuffer();
			resultado = strcasecmp(escolhaenigma, respostaenigma);

			if (resultado!=0) {
				system ("clear");
				printf("RESPOSTA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
			
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
			
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
					
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
			
			else {
				system ("clear");
				printf("RESPOSTA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				++*p2;
				mapa[*p1][*p2]='@';
				mapa[3][33]=' ';
				mapa[3][34]=' ';
				mapa[3][35]=' ';
				getchar();
			}
		}
		
		if (*p1==23 && (*p2+1)==4 && mapa[*p1][*p2+1]=='?') {
			system("clear");
			printf("Qual desses não foi um imperador romano ?\n\nA) Júlio César                              B) Tiberius\nC) Trajano                                  D) Marco Aurélio\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
		
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
		
			if (escolhadesafio!='a' && escolhadesafio!= 'A') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
			
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
			
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
			
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
			
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				++*p2;
				mapa[*p1][*p2]='@';
				mapa[24][3]=' ';
				mapa[24][4]=' ';
				mapa[24][5]=' ';
				getchar();
			}
		}
		
		if (*p1==23 && (*p2+1)==63 && mapa[*p1][*p2+1]=='?') {
			system("clear");
			printf("Onde o ser humano chegou primeiro ?\n\nA) na lua                                                       B) no ponto mais fundo do oceano\nC) no ponto mais alto da terra                                  D) no Polo Sul\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
		
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
		
			if (escolhadesafio!='d' && escolhadesafio!= 'D') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
			
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
					
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
			
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
					
					else
						return 2;
				}
				getchar();
			}
		
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				++*p2;
				mapa[*p1][*p2]='@';
				mapa[24][62]=' ';
				mapa[24][63]=' ';
				mapa[24][64]=' ';
				getchar();
			}
		}
		
		if ((*p1)==23 && (*p2+1)==34 && mapa[*p1][*p2+1]=='?') {
			system("clear");
			printf("Você tem no máximo 20 tentativas para acertar um número entre 0 e 1000 gerado de maneira aleatória pelo computador.\n\n");
			valor = aleatorio (ptrvetor);
			
			while(aux!=20) {
				printf("%dº tentativa\n\nDigite a sua resposta:\n",aux+1);
				scanf("%d", &escoal);
				limparbuffer();
				
				if (escoal!=valor) {
					++aux;
					
					if (escoal<=(valor+20) && escoal >=(valor-20)) {
						system ("clear");
						printf("QUENTE\n");
						
						if (escoal<=(valor+10) && escoal >=(valor-10)) {
							system ("clear");
							printf("MUITO QUENTE\n");
							
							if (escoal<=(valor+5) && escoal >=(valor-5)) {
								system ("clear");
								printf("QUENTE QUENTE QUENTE QUENTE\n");
							}
						}
					}	
				
					else {
						system ("clear");
						printf("FRIO\n");
					}
				}
				
				else
					break;
			}
			
			if (aux !=20) {
				system ("clear");
				printf("RESPOSTA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				++*p2;
				mapa[*p1][*p2]='@';
				mapa[24][33]=' ';
				mapa[24][34]=' ';
				mapa[24][35]=' ';
				getchar();
			}
		
			if (aux==20) {
				system("clear");
				printf("RESPOSTAS ERRADAS, LOGO MENOS UM PONTO DE VIDA.\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
				
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
					
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
					
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
		}

		if (*p1==1 && (*p2+1)==4 && mapa[*p1][*p2+1]=='*') {
			system("clear");
			printf("PISTA: RA\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			++*p2;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if (*p1==1 && (*p2+1)==63 && mapa[*p1][*p2+1]=='*') {
			system("clear");
			printf("PISTA: CU\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			++*p2;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if (*p1==26 && (*p2+1)==4 && mapa[*p1][*p2+1]=='*') {
			system("clear");
			printf("PISTA: LA\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			++*p2;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if (*p1==26 && (*p2+1)==34 && mapa[*p1][*p2+1]=='*') {
			system("clear");
			printf("PISTA: DO\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			++*p2;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if (*p1==26 && (*p2+1)==63 && mapa[*p1][*p2+1]=='*') {
			system("clear");
			printf("PISTA: CAl\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			++*p2;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if (*p1==1 && (*p2+1)==34 && mapa[*p1][*p2+1]=='W') {
			system("clear");
			printf("PARABÉNS, VOCÊ CONSEGUIU DESVENDAR O ENIGMA. VOCÊ É DEMAIS\n\n[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
			escolhamenu=getchar();
			limparbuffer();
			
			while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhamenu=getchar();
				limparbuffer();
			}
			
			if (escolhamenu!='a' && escolhamenu!='A')
				return 1;
			
			else
				return 2;
		}

		imprime(mapa, p1, p2, pvida);
	}

	if (escolha=='w' || escolha=='W') {
		
		if(mapa[*p1-1][*p2]==' ') {
			mapa[*p1][*p2]=' ';
			--*p1;
			mapa[*p1][*p2]='@';
		}
		
		if ((*p1-1)==4 && *p2==4 && mapa[*p1-1][*p2]=='?') {
			system("clear");
			printf("Durante o verão a Torre Eiffel fica:\n\nA) mais baixa                              B) mais alta\nC) esquenta que solta fumaça               D) sem alterações\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
		
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
		
			if (escolhadesafio!='b' && escolhadesafio!= 'B') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
			
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
				
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
			
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
			
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				--*p1;
				mapa[*p1][*p2]='@';
				mapa[3][3]=' ';
				mapa[3][4]=' ';
				mapa[3][5]=' ';
				getchar();
			}
		}
		
		if ((*p1-1)==4 && (*p2)==63 && mapa[*p1-1][*p2]=='?') {
			system("clear");
			printf("Você tem um isqueiro.Numa cabana com uma vela, uma lamparina e uma lareira, qual você acende primeiro?\n\nA) a vela                              B) a lamparina\nC) a lareira                           D) nenhuma das anteriores\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
		
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
			
			if (escolhadesafio!='d' && escolhadesafio!= 'D') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
			
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
					
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
			
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
			
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				--*p1;
				mapa[*p1][*p2]='@';
				mapa[3][62]=' ';
				mapa[3][63]=' ';
				mapa[3][64]=' ';
				getchar();
			}
		}
		
		if ((*p1-1)==4 && (*p2)==34 && mapa[*p1-1][*p2]=='C') {
			system("clear");
			printf("\t\t\t\t[ENIGMA]\n\n\tQual o nome do dispositivo voltado para fins específicos\n\tque não pode ser qualificado como uma máquina de  Turing\n\te não foi projetado para flexibilizar tarefas e sim ope_\n\trações específicas ? ");
			scanf("%s", escolhaenigma);
			limparbuffer();
			resultado = strcasecmp(escolhaenigma, respostaenigma);

			if (resultado!=0) {
				system ("clear");
				printf("RESPOSTA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
			
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
			
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
					
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
			
					else
						return 2;
				}
				getchar();
			}
			
			else {
				system ("clear");
				printf("RESPOSTA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				--*p1;
				mapa[*p1][*p2]='@';
				mapa[3][33]=' ';
				mapa[3][34]=' ';
				mapa[3][35]=' ';
				getchar();
			}
		}
		
		if ((*p1-1)==1 && (*p2)==4 && mapa[*p1-1][*p2]=='*') {
			system("clear");
			printf("PISTA: RA\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			--*p1;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if ((*p1-1)==1 && (*p2)==63 && mapa[*p1-1][*p2]=='*') {
			system("clear");
			printf("PISTA: CU\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			--*p1;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if ((*p1-1)==1 && (*p2)==34 && mapa[*p1-1][*p2]=='W') {
			system("clear");
			printf("PARABÉNS, VOCÊ CONSEGUIU DESVENDAR O ENIGMA. VOCÊ É DEMAIS\n\n[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
			escolhamenu=getchar();
			limparbuffer();
			
				while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
					printf("Ação inválida ! Digite novamente.\n");
					escolhamenu=getchar();
					limparbuffer();
				}
			
				if (escolhamenu!='a' && escolhamenu!='A')
					return 1;
				
				else
					return 2;
		}
		imprime(mapa, p1, p2, pvida);
	}

	if (escolha=='s' || escolha=='S') {
		
		if(mapa[*p1+1][*p2]==' ') {
			mapa[*p1][*p2]=' ';
			++*p1;
			mapa[*p1][*p2]='@';
		}
		
		if ((*p1+1)==23 && *p2==4 && mapa[*p1+1][*p2]=='?') {
			system("clear");
			printf("Qual desses não foi um imperador romano ?\n\nA) Júlio César                              B) Tiberius\nC) Trajano                                  D) Marco Aurélio\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
		
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
		
			if (escolhadesafio!='a' && escolhadesafio!= 'A') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
				
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
				
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
		
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
		
					else
						return 2;
				}
				getchar();
			}
			
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				++*p1;
				mapa[*p1][*p2]='@';
				mapa[24][3]=' ';
				mapa[24][4]=' ';
				mapa[24][5]=' ';
				getchar();
			}
		}
		
		if ((*p1+1)==23 && *p2==63 && mapa[*p1+1][*p2]=='?') {
			system("clear");
			printf("Onde o ser humano chegou primeiro ?\n\nA) na lua                                                       B) no ponto mais fundo do oceano\nC) no ponto mais alto da terra                                  D) no Polo Sul\n\nDigite a alternativa correspondente a sua resposta:\n");
			escolhadesafio=getchar();
			limparbuffer();
			
			while (escolhadesafio!='a' && escolhadesafio!= 'A' && escolhadesafio!='b' && escolhadesafio!='B'  && escolhadesafio!='c' && escolhadesafio!='C'  && escolhadesafio!='d' && escolhadesafio!='D') {
				printf("Ação inválida ! Digite novamente.\n");
				escolhadesafio=getchar();
				limparbuffer();
			}
		
			if (escolhadesafio!='d' && escolhadesafio!= 'D') {
				system ("clear");
				printf("ALTERNATIVA ERRADA, LOGO MENOS UM PONTO DE VIDA.\n\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
				
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
					
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
			
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
					
					else
						return 2;
				}
				getchar();
			}
			
			else {
				system ("clear");
				printf("ALTERNATIVA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				++*p1;
				mapa[*p1][*p2]='@';
				mapa[24][62]=' ';
				mapa[24][63]=' ';
				mapa[24][64]=' ';
				getchar();
			}
		}
		
		if ((*p1+1)==23 && *p2==34 && mapa[*p1+1][*p2]=='?') {
			system("clear");
			printf("Você tem no máximo 20 tentativas para acertar um número entre 0 e 1000 gerado de maneira aleatória pelo computador.\n\n");
			valor = aleatorio (ptrvetor);
			
			while(aux!=20) {
				printf("%dº tentativa\n\nDigite a sua resposta:\n",aux+1);
				scanf("%d", &escoal);
				limparbuffer();
					
				if (escoal!=valor) {
					++aux;
						
					if (escoal<=(valor+20) && escoal >=(valor-20)) {
						system ("clear");
						printf("QUENTE\n");
						
						if (escoal<=(valor+10) && escoal >=(valor-10)) {
							system ("clear");
							printf("MUITO QUENTE\n");
							
							if (escoal<=(valor+5) && escoal >=(valor-5)) {
								system ("clear");
								printf("QUENTE QUENTE QUENTE QUENTE\n");
							}
						}
					}	
				
					else {
						system ("clear");
						printf("FRIO\n");
					}
				}
				
				else
					break;
			}
			
			if (aux !=20) {
				system ("clear");
				printf("RESPOSTA CORRETA,PARABÉNS.\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
				mapa[*p1][*p2]=' ';
				++*p1;
				mapa[*p1][*p2]='@';
				mapa[24][33]=' ';
				mapa[24][34]=' ';
				mapa[24][35]=' ';
				getchar();
			}
		
			if (aux==20) {
				system ("clear");
				printf("RESPOSTAS ERRADAS, LOGO MENOS UM PONTO DE VIDA.\n[PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
				--*pvida;
				
				if (*pvida==0) {
					system ("clear");
					printf("[GAME OVER]\n");
					printf("[PRESSIONE A TECLA A PARA JOGAR NOVAMENTE OU A TECLA B PARA SAIR DO JOGO]\n");
					escolhamenu=getchar();
					limparbuffer();
					
					while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
						printf("Ação inválida ! Digite novamente.\n");
						escolhamenu=getchar();
						limparbuffer();
					}
					
					if (escolhamenu!='a' && escolhamenu!='A')
						return 1;
					
					else
						return 2;
				}
				getchar();
			}
		}
		
		if ((*p1+1)==26 && (*p2)==4 && mapa[*p1+1][*p2]=='*') {
			system("clear");
			printf("PISTA: LA\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			++*p1;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if ((*p1+1)==26 && (*p2)==34 && mapa[*p1+1][*p2]=='*') {
			system("clear");
			printf("PISTA: DO\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			++*p1;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		if ((*p1+1)==26 && (*p2)==63 && mapa[*p1+1][*p2]=='*') {
			system("clear");
			printf("PISTA: CAl\n\n[PRESSIONE A TECLA  ENTER PARA CONTINUAR]\n");
			mapa[*p1][*p2]=' ';
			++*p1;
			mapa[*p1][*p2]='@';
			getchar();
		}
		
		imprime(mapa, p1, p2, pvida);
	}

	if (escolha=='m' || escolha=='M') {
		system("clear");
   		printf("[DIGITE O CARACTERE A PARA RETORNAR AO JOGO OU O CARACTERE B PARA SAIR DO JOGO]\n");
   		escolhamenu=getchar();
   		limparbuffer();
			
		while (escolhamenu!='a' && escolhamenu!= 'A' && escolhamenu!='b' && escolhamenu!='B') {
			printf("Ação inválida ! Digite novamente.\n");
			escolhamenu=getchar();
			limparbuffer();
		}
    
    	if (escolhamenu=='a' || escolhamenu =='A') {
     		imprime(mapa, p1, p2, pvida);
        	return 0;
    	}
   
    	else
        	return 1;
	}

	if ((mapa[1][4]=='@' && mapa[1][63]==' ' && mapa[26][4]==' ' && mapa[26][34]==' ' && mapa[26][63]==' ') ||
	    (mapa[1][4]==' ' && mapa[1][63]=='@' && mapa[26][4]==' ' && mapa[26][34]==' ' && mapa[26][63]==' ') ||
	    (mapa[1][4]==' ' && mapa[1][63]==' ' && mapa[26][4]=='@' && mapa[26][34]==' ' && mapa[26][63]==' ') ||
	    (mapa[1][4]==' ' && mapa[1][63]==' ' && mapa[26][4]==' ' && mapa[26][34]=='@' && mapa[26][63]==' ') ||
	    (mapa[1][4]==' ' && mapa[1][63]==' ' && mapa[26][4]==' ' && mapa[26][34]==' ' && mapa[26][63]=='@')) {

		mapa[*p1][*p2]=' ';
		*p1=5;
		*p2=34;
		mapa[*p1][*p2]='@';
		system("clear");
		printf("[VOCÊ COLETOU TODAS AS PISTAS EXISTENTES NO MAPA, LOGO RESOLVA O ENIGMA PARA ABRIR A TUMBA.PRESSIONE A TECLA ENTER PARA CONTINUAR]\n");
		getchar();
		imprime(mapa, p1, p2, pvida);
	}

	return 0;
}

int main (void) {

	int i, j;
	int aux=0, vida=5, linha=13, coluna=34, *p1=&linha, *p2=&coluna, *pvida=&vida;
	char mapa [28][68], escolha;
	int vetor[1], *ptrvetor=vetor;

	for(i=0; i<28; ++i) {
		for(j=0; j<68; ++j) { 
			mapa[i][j]='#';
			
			if (((i==1) || (i==26)) && ((j>=1 && j<=3) || (j>=5 && j<=7) || (j>=27 && j<=33) || (j>=35 && j<=41) || (j>=60 && j<=62) || (j>=64 && j<=66)))
				mapa[i][j]=' ';
			
			if (((i==2) || (i==25)) && ((j>=1 && j<=7) || (j>=27 && j<=41) || (j>=60 && j<=66)))
				mapa[i][j]=' ';
			
			if (((i==5) || (i==22)) && ((j>=3 && j<=5) || (j>=9 && j<=58) || (j>=62 && j<=64)))
				mapa[i][j]=' ';
			
			if (((i>=6 && i<=12) || (i>=14 && i<=21)) && ((j>=3 && j<=5) || (j>=9 && j<=11) || (j>=33 && j<=35) || (j>=56 && j<=58) || (j>=62 && j<=64)))
				mapa[i][j]=' ';
			
			if ((i==13) && ((j>=3 && j<=33) || (j>=35 && j<=64)))
				mapa[i][j]=' ';
			
			if (((i==1) || (i==26)) && ((j==4) || (j==63) || (j==34)))
				mapa[i][j]='*';
			
			if ((i==1) &&  (j==34))
				mapa[i][j]='W';
			
			if (((i==3) || (i==24)) && ((j>=3 && j<=5) || (j>=33 && j<=35) || (j>=62 && j<=64)))
				mapa[i][j]='!';
			
			if ((i==13) &&  (j==34))
				mapa[i][j]='@';
			
			if (((i==4) || (i==23)) && ((j==3) || (j==5) || (j==33) || (j==35) || (j==62) || (j==64)))
				mapa[i][j]=' ';
			
			if (((i==4) || (i==23)) && ((j==4) || (j==34) || (j==63)))
				mapa[i][j]='?';
			
			if ((i==4) &&  (j==34))
				mapa[i][j]='C';
		}
	}

	imprime(mapa, p1, p2, pvida);

	while (aux==0 || aux ==2) {

		escolha=getchar();
		limparbuffer();

		while (escolha!='a' && escolha!= 'A' && escolha!='s' && escolha!='S' && escolha!='d' && escolha!='D' && escolha!='w' && escolha!='W' && escolha!='m' && escolha!='M') {
		printf("Ação inválida ! Digite novamente.\n");
		escolha=getchar();
		limparbuffer();
		}

		aux = movimenta(escolha, mapa, p1, p2, pvida, ptrvetor);

		if (aux==2)	{

			for(i=0; i<28; ++i) {
				for(j=0; j<68; ++j) { 
					mapa[i][j]='#';
					
					if (((i==1) || (i==26)) && ((j>=1 && j<=3) || (j>=5 && j<=7) || (j>=27 && j<=33) || (j>=35 && j<=41) || (j>=60 && j<=62) || (j>=64 && j<=66)))
						mapa[i][j]=' ';
					
					if (((i==2) || (i==25)) && ((j>=1 && j<=7) || (j>=27 && j<=41) || (j>=60 && j<=66)))
						mapa[i][j]=' ';
					
					if (((i==5) || (i==22)) && ((j>=3 && j<=5) || (j>=9 && j<=58) || (j>=62 && j<=64)))
						mapa[i][j]=' ';
					
					if (((i>=6 && i<=12) || (i>=14 && i<=21)) && ((j>=3 && j<=5) || (j>=9 && j<=11) || (j>=33 && j<=35) || (j>=56 && j<=58) || (j>=62 && j<=64)))
						mapa[i][j]=' ';
					
					if ((i==13) && ((j>=3 && j<=33) || (j>=35 && j<=64)))
						mapa[i][j]=' ';
					
					if (((i==1) || (i==26)) && ((j==4) || (j==63) || (j==34)))
						mapa[i][j]='*';
					
					if ((i==1) &&  (j==34))
						mapa[i][j]='W';
					
					if (((i==3) || (i==24)) && ((j>=3 && j<=5) || (j>=33 && j<=35) || (j>=62 && j<=64)))
						mapa[i][j]='!';
					
					if ((i==13) &&  (j==34))
						mapa[i][j]='@';
					
					if (((i==4) || (i==23)) && ((j==3) || (j==5) || (j==33) || (j==35) || (j==62) || (j==64)))
						mapa[i][j]=' ';
					
					if (((i==4) || (i==23)) && ((j==4) || (j==34) || (j==63)))
						mapa[i][j]='?';
					
					if ((i==4) &&  (j==34))
						mapa[i][j]='C';
				}
			}

			*pvida=5;
			*p1=13;
			*p2=34;
	
			imprime(mapa, p1, p2, pvida);
		}
	}

	return 0;
}
