/*
  Hentony Alves Pereira
  Algoritmos e programação de computadores
  Trabalho 1 */

#include <stdio.h>
#include <stdlib.h>

int main () 
{

int a=0,b=0;
int vida_esfinge = 3, energia_esfinge = 1, vida_jogador = 3, energia_jogador = 1;
int *pVida_esfinge = &vida_esfinge, *pEnergia_esfinge = &energia_esfinge, *pVida_jogador = &vida_jogador, *pEnergia_jogador = &energia_jogador;
char escolha1,escolha2,escolha3,escolha4,escolha5,escolha6,escolha7,escolha8,escolha9,escolha10,escolha11,escolha12;
	
	

	system ("clear");
	printf("\n\nA terra está um caos. No ano de 2404 aconteceu um ataque terrorista de uma organização criminosa desconhecida. Tal organização infectou todos\nos robôs auxiliares com um vírus que tinha como objetivo o extermínio da humanidade. Consequentemente, a tecnologia que tinha como finalidade\najudar o ser humano não existe mais, agora, inúmeras máquinas exterminadoras estão rodeando o planeta em busca da extinção da humanidade.\n\nExistem algumas bases militares pelo mundo que realizam pesquisas científicas para reverter o contexto global,no entanto as suas ações são\nmuito limitadas por causa da falta de estrutura. A comunicação entre as bases não é algo fácil, pois os robôs auxiliares possuem tecnologias\nmuito avançadas de localização.Você é um engenheiro de controle e automação, que se localiza no centro de treinamento alfa para o\ndesenvolvimento e seleção de guerreiros.O objetivo é selecionar os melhores guerreiros para uma missão em busca de um chip que pode reverter\no contexto global que se localiza em uma base no Japão.Você passará por desafios intelectuais e físicos,o resultado da seleção depende das \nsuas ações. Pense antes de agir!\n\n");
	printf("Rick:\n\nOlá, eu me chamo Rick. Sou responsável pela seleção de novos guerreiros aqui na central alfa. Antes de começar a seleção, algumas coisas\nnecessitam de serem ditas.Você passará por testes que irão avaliar o raciocínio lógico, existem algumas surpresas nessa seleção que\nirão avaliar outras coisas que não posso comentar.No entanto, é necessário frisar que esta seleção não é simples,você pode estar arriscando a vida.\nPortanto,preciso da sua confirmação,se realmente quer passar por tudo isso.Se sim, assine este termo de compromisso.\nSe não, infelizmente você não será útil para nós e está descartado da seleção.\n\nO que você faz ?\n\na) Assinar o termo de compromisso\nb) Não assinar o termo de compromisso\n\nEscolha:\n");
	scanf (" %c", &escolha1);
	
		
	while ( escolha1 != 'a' && escolha1 !='b'){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha1);
}
	if (escolha1 == 'a'){
		system("clear"); 
		printf("\nRick:\n\nQue ótimo. Gosto de pessoas assim. Decididas. Boa sorte, vamos começar a seleção.\n");}

	if (escolha1 =='b'){
		system("clear"); 
		printf("\nRick:\n\nInfelizmente, é de extrema importância a assinatura desse documento para continuar. Você não é útil para nós. Está descartado.\n\nThe end...\n\n");}

	if (escolha1 == 'a') {
		printf("\nEssse enigma é muito fácil. Não ache que será sempre assim, nós estamos apenas começando hahaha\n\nEnigma 01:\n\nQue animal anda pela manhã sobre quatro patas, a tarde sobre duas e a noite sobre três?\n\na) O Homem\nb) Nenhum\nc) Peixe-boi\n\nEscolha:\n");
		scanf(" %c",&escolha2);

	while ( escolha2 != 'a' && escolha2 !='b' && escolha2 != 'c' ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha2);
}
	if (escolha2 == 'c'){
		system("clear"); 
		printf("\nRick:\n\nPeixe-boi ??? Você está eliminado.bye.\nThe end\n\n");}
	if (escolha2 == 'a'){
		system("clear"); 
		printf("\nRick:\n\nTodo mundo já conhece o famoso enigma da esfinge, de qualquer forma, parabéns ! enfim, vamos para o próximo enigma haha.\n\n");}
	if (escolha2 == 'b'){
		system("clear"); 
		printf("\nRick:\n\nQue resposta peculiar, você pensa como um computador. Sua resposta não está certa, mas também não está errada haha. Humm, vamos continuar.\n");}
}

if (escolha2 == 'b'){
	printf("\nQuestionamento 1:\n\nEssas máquinas imundas que andam por aí atrás de seres humanos, você acha que elas poderiam pensar como nós algum dia ?\n\na) sim.\nb) Claro que não\n\nEscolha:\n");
	scanf(" %c", &escolha3);
	while (escolha3 != 'a' && escolha3 !='b'  ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha3);}
	if (escolha3 == 'a'){
		++a;
		system("clear"); 
		printf("\nRick:\n\nInteressante, geralmente as pessoas respondem não. A verdade é que a humanidade é bem orgulhosa...\n");
	}
	else if (escolha3 =='b'){
		++b;
		system("clear"); 
		printf("\nRick:\n\nHumano, humano. Cheio de certezas...\n");
	
	}
	printf("\nOkay, okay.\n\nQuestionamento 2:\n\nO que é o amor ?\n\na) Sentimento humano causado pela atuação de hormônios no corpo.\nb) Não consigo explicar, para mim é mais que mera química\n\nEscolha:\n");
	scanf (" %c", &escolha3);
	while (escolha3 != 'a' && escolha3 !='b'  ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha3);}
	if (escolha3 == 'a'){
		++a;
		system("clear"); 
		printf("\nRick:\n\nVocê é bem cientificista.Eu também não gosto quando idealizam o amor.\n");
	}
	else if (escolha3 =='b'){
		++b;
		system("clear"); 
		printf("\nRick:\n\nHumm, algumas coisas na vida  não necessitam de explicações. Sentir já é suficiente...");
	}			
	printf ("\n\nQuestionamento 3:\n\nVocê tem medo?\n\na) Não, o medo é uma fraqueza.\nb) Sim, todo ser humano tem medo. É biológico.\n\nEscolha:\n");
	scanf (" %c", &escolha3);
	while (escolha3 != 'a' && escolha3 !='b'  ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha3);}
	if (escolha3 == 'a'){
		++a;
		system("clear"); 
		printf("\nRick:\n\nBom, eu discordo um pouco...De qualquer forma, vamos continuar...\n");
	}
	else if (escolha3 =='b'){
		++b;
		system("clear"); 
		printf("\nRick:\n\nDe fato...\n");
	}		
	printf ("\nQuestionamento 4:\n\nVocê existe por algum motivo ?\n\na) Sim, é como se tudo fosse programado.\nb) Não, acredito que o universo é bem aleatório.\n\nEscolha:\n");
	scanf (" %c", &escolha3);
	while (escolha3 != 'a' && escolha3 !='b'  ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha3);}
	if (escolha3 == 'a'){
		++a;
		system("clear"); 
		printf("\nRick:\n\nIsso é meio assustador\n");		
	}
	else if (escolha3 =='b'){
		++b;
		system("clear"); 
		printf("\nRick:\n\nIsso é meio assustador\n");
	}
	printf ("\n...Bom, talvez esse seja o último questionamento que você irá responder. Sem enrolações, vamos nessa.\n\nQuestionamento 5:\n\nRobôs têm consciência ?\n\na) Seres humanos têm ?\nb) Não.\n\nEscolha:\n");
	scanf (" %c", &escolha3);
	while (escolha3 != 'a' && escolha3 !='b'  ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha3);}
	if (escolha3 == 'a'){
		++a;
		system("clear"); 
		printf("\nRick:\n\nHaha\n");
	}
	else if (escolha3 =='b'){
		++b;
		system("clear"); 
		printf("\nRick:\n\nDireto...\n");
		}	
	if (a>b)
		printf("\nTodos esses questionamentos foram suficientes para descobrir quem de fato você é. Você é um robô auxiliar. Está preso...A sua forma de pensar é conhecida por nós humanos, até porque foram nós que criamos você. Esse é o seu fim.\n\nThe end.\n\n");
	else if (b>a) {
		printf("\nOKay, okay. Você não é um robô. É o seguinte, você não estava participando da seleção, e sim de um  teste para prender robôs auxiliares\nespiões. Parabéns, agora, você pode voltar para a seleção. Boa sorte.\n\n");
		escolha2 = 'a';}
}
if (escolha2 =='a'){
	printf("Bom, dando continuidade à seleção.\n\nEnigma 02:\n\nHá 10 pessoas em uma casa. Todo mundo quer apertar a mão das pessoas mais baixas(de menor estatura) do que elas. Suponha que ninguém tem\na mesma estatura. Quantos apertos de mão serão dados?\n\na) A 10º pessoa mais alta vai dar 9 apertos,a 9º pessoa vai dar 8, e assim sucessivamente.Fazendo as contas (somatória),serão dados 45 apertos\nde mãos.\n\nb) 0\nc) 5\n\nEscolha:\n");
	scanf (" %c",&escolha4);

while (escolha4 != 'a' && escolha4 !='b' && escolha4 != 'c' ){
	printf("Opção inválida, escolha novamente.\n");
	scanf (" %c", &escolha4);}
if (escolha4 == 'a' || escolha4 == 'c'){
	system ("clear");
	printf("Rick:\n\nResposta incorreta!\nVocê foi eliminado.\n\nThe end\n\n");}
}
if (escolha4 == 'b'){
	system("clear");
	printf("Rick:\nSua resposta está correta.Parabéns !\n\nChegamos no último enigma,obviamente é o mais difícil da seleção. Esse enigma foi desenvolvido por uma inteligência artifical chamada Esfinge.\nA esfinge foi desenvolvida para simular o comportamento dos robôs auxiliares. Se você realmente quer passar na seleção, terá que responder corretamente o enigma, no entanto você já mostrou muito do seu valor, até porque você está na última fase da seleção.Portanto, se você errar a\nesfinge irá tentar te devorar, cabe a você destruí-la. A sua vida está nas suas mãos.Para resolver esse enigma, você irá entrar em uma sala de realidade virtual. É nessa sala que você irá interagir com a esfinge, para isso é necessário a utilização do equipamento de imersão.Bom, você não assinou o termo de compromisso no início da seleção por nada, se vocẽ errar o enigma e ser derrotado pela esfinge, o equipamento de imersão irá disparar uma corrente elétrica no seu cérebro. Com isso, você já era.\n\nEnigma 03:\n\nEsfinge: Decifra-me ou devoro-te\n\nUm assassino é condenado à morte. Ele, então, tem que escolher entre três salas: a sala 1 está cheia de focos de incêndio, a sala 2 está cheia de assassinos com armas carregadas, e a sala 3 está cheia de leões que não comem há 3 meses. Qual é a sala mais segura para ele?\n\na) Sala 1\nb) Sala 2\nc) Sala 3\n\nEscolha:\n\n");
	scanf (" %c", &escolha5);
while (escolha5 != 'a' && escolha5 !='b' && escolha5 != 'c' ){
	printf("Opção inválida, escolha novamente.\n");
	scanf (" %c", &escolha5);}

if (escolha5 == 'c'){
	system ("clear");
	printf("Rick:\n\nUau. Você conseguiu resolver o enigma da esfinge !!!\n\nEstá de parabéns.Agora você faz parte da equipe de guerreiros que irão na missão em busca do chip que pode salvar a humanidade.Seja bem vindo e boa sorte na sua jornada.\n\nThe end\n\n");}
else {
	system ("clear");
	printf("Esfinge:\nEsse é o seu fim !!!\n\n\n");
}
}
if (escolha5 == 'a' || escolha5 =='b'){


	printf("Regras do combate em ambiente de realidade virtual:\n\n1ª O combatente morre ao perder todos os seus três pontos de vida.\n2ª O combatente começa a batalha com um ponto de energia e pode ter no máximo três pontos de energia.\n3ª O combatente perde um ponto de energia ao atacar e poderá retirar um ponto de vida do seu oponente.\n4ª O combatente poderá bloquear o ataque do oponente com a defesa.\n5ª O combatente poderá realizar uma recarga de energia, levando em consideração o número máximo de pontos de energia, caso contrário, a sua ação será inútil.\n6ª Uma mesma ação não pode ser realizada duas vezes consecutivas\n\nEntendeu ?\n\na) Sim\nb) Não\nEscolha:\n");
	scanf (" %c", &escolha6);	
while (escolha6 != 'a' && escolha6 !='b'  ){
	printf("Opção inválida, escolha novamente.\n");
	scanf (" %c", &escolha6);}
while ( escolha6 =='b'){
	system ("clear");
	printf("Leia novamente com mais atenção !!!\n\n");
	printf("Regras do combate em ambiente de realidade virtual:\n\n1ª O combatente morre ao perder todos os seus três pontos de vida.\n2ª O combatente começa a batalha com um ponto de energia e pode ter no máximo três pontos de energia.\n3ª O combatente perde um ponto de energia ao atacar e poderá retirar um ponto de vida do seu oponente.\n4ª O combatente poderá bloquear o ataque do oponente com a defesa.\n5ª O combatente poderá realizar uma recarga de energia, levando em consideração o número máximo de pontos de energia, caso contrário, a sua ação será inútil.\n6ª Uma mesma ação não pode ser realizada duas vezes consecutivas\n\nEntendeu ?\n\na) Sim\nb) Não\nEscolha:\n");
	scanf (" %c", &escolha6);
		while (escolha6 != 'a' && escolha6 !='b'  ){
	printf("Opção inválida, escolha novamente.\n");
	scanf (" %c", &escolha6);}
}
}
if (escolha6 == 'a'){
		system ("clear");
		while (vida_jogador !=0 && vida_esfinge !=0){
		system ("clear");
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\n\n\n\n\n\n\n\n\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",vida_esfinge, energia_esfinge, vida_jogador, energia_jogador);
		scanf (" %c", &escolha7);
while (escolha7 != 'a' && escolha7 !='b' && escolha7 != 'c' ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha7);}
while (escolha7 == 'a' && energia_jogador == 0 && escolha7 !='b' && escolha7 != 'c'){
		printf("Você está sem energia, logo, não pode atacar. Escolha novamente.\n");
		scanf (" %c", &escolha7);}		
		system ("clear");
while (escolha7 == 'a' && escolha12 == 'a'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha7);}
while (escolha7 == 'b' && escolha12 == 'b'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha7);}
while (escolha7 == 'c' && escolha12 == 'c'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha7);}	
	void round1 (char x,int *pVida_esfinge, int *pEnergia_esfinge, int *pVida_jogador, int *pEnergia_jogador);
	round1 (escolha7,pVida_esfinge,pEnergia_esfinge,pVida_jogador,pEnergia_jogador);
if (vida_jogador == 0){
		system ("clear");
		printf("Você morreu\n\nThe end\n\n");
		break;	}
if (vida_esfinge == 0){
		system ("clear");
		printf("TEMOS UM VENCEDOR\n\nThe end\n\n");
		break;	}
else if (vida_jogador !=0 && vida_esfinge !=0){
		scanf (" %c", &escolha8);
while (escolha8 != 'a' && escolha8 !='b' && escolha8 != 'c' ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha8);}
while (escolha8 == 'a' && energia_jogador == 0 && escolha8 !='b' && escolha8 != 'c'){
		printf("Você está sem energia, logo, não pode atacar. Escolha novamente.\n");
		scanf (" %c", &escolha8);}
while (escolha8 == 'a' && escolha7 == 'a'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha8);}
while (escolha8 == 'b' && escolha7 == 'b'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha8);}
while (escolha8 == 'c' && escolha7 == 'c'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha8);}
		system ("clear");
	void round2 (char x,int *pVida_esfinge, int *pEnergia_esfinge, int *pVida_jogador, int *pEnergia_jogador);
	round2 (escolha8,pVida_esfinge,pEnergia_esfinge,pVida_jogador,pEnergia_jogador);
if (vida_jogador == 0){
		system ("clear");
		printf("Você morreu\n\nThe end\n\n");
		break;	}
if (vida_esfinge == 0){
		system ("clear");
		printf("TEMOS UM VENCEDOR\n\nThe end\n\n");
		break;	}
else if (vida_jogador !=0 && vida_esfinge !=0){
		scanf (" %c", &escolha9);
while (escolha9 != 'a' && escolha9 !='b' && escolha9 != 'c' ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha9);}
while (escolha9 == 'a' && energia_jogador == 0 && escolha9 !='b' && escolha9 != 'c'){
		printf("Você está sem energia, logo, não pode atacar. Escolha novamente.\n");
		scanf (" %c", &escolha9);}
while (escolha9 == 'a' && escolha8 == 'a'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha9);}
while (escolha9 == 'b' && escolha8 == 'b'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha9);}
while (escolha9 == 'c' && escolha8 == 'c'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha9);}
		system ("clear");
	round1 (escolha9,pVida_esfinge,pEnergia_esfinge,pVida_jogador,pEnergia_jogador);
if (vida_jogador == 0){
		system ("clear");
		printf("Você morreu\n\nThe end\n\n");
		break;	}
if (vida_esfinge == 0){
		system ("clear");
		printf("TEMOS UM VENCEDOR\n\nThe end\n\n");
		break;	}
else if (vida_jogador !=0 && vida_esfinge !=0){
		scanf (" %c", &escolha10);
while (escolha10 != 'a' && escolha10 !='b' && escolha10 != 'c' ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha10);}
while (escolha10 == 'a' && energia_jogador == 0 && escolha10 !='b' && escolha10 != 'c'){
		printf("Você está sem energia, logo, não pode atacar. Escolha novamente.\n");
		scanf (" %c", &escolha10);}
while (escolha10 == 'a' && escolha9 == 'a'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha10);}
while (escolha10 == 'b' && escolha9 == 'b'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha10);}
while (escolha10 == 'c' && escolha9 == 'c'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha10);}
		system ("clear");
	void round3 (char x,int *pVida_esfinge, int *pEnergia_esfinge, int *pVida_jogador, int *pEnergia_jogador);
	round3 (escolha10,pVida_esfinge,pEnergia_esfinge,pVida_jogador,pEnergia_jogador);
if (vida_jogador == 0){
		system ("clear");
		printf("Você morreu\n\nThe end\n\n");
		break;	}
if (vida_esfinge == 0){
		system ("clear");
		printf("TEMOS UM VENCEDOR\n\nThe end\n\n");
		break;	}
else if (vida_jogador !=0 && vida_esfinge !=0){
		scanf (" %c", &escolha11);
while (escolha11 != 'a' && escolha11 !='b' && escolha11 != 'c' ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha11);}
while (escolha11 == 'a' && energia_jogador == 0 && escolha11 !='b' && escolha11 != 'c'){
		printf("Você está sem energia, logo, não pode atacar. Escolha novamente.\n");
		scanf (" %c", &escolha11);}
while (escolha11 == 'a' && escolha10 == 'a'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha11);}
while (escolha11 == 'b' && escolha10 == 'b'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha11);}
while (escolha11 == 'c' && escolha10 == 'c'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha11);}
		system ("clear");
	void round2 (char x,int *pVida_esfinge, int *pEnergia_esfinge, int *pVida_jogador, int *pEnergia_jogador);
	round2 (escolha11,pVida_esfinge,pEnergia_esfinge,pVida_jogador,pEnergia_jogador);
if (vida_jogador == 0){
		system ("clear");
		printf("Você morreu\n\nThe end\n\n");
		break;	}
if (vida_esfinge == 0){
		system ("clear");
		printf("TEMOS UM VENCEDOR\n\nThe end\n\n");
		break;	}
else if (vida_jogador !=0 && vida_esfinge !=0){
		scanf (" %c", &escolha12);
while (escolha12 != 'a' && escolha12 !='b' && escolha12 != 'c' ){
		printf("Opção inválida, escolha novamente.\n");
		scanf (" %c", &escolha12);}
while (escolha12 == 'a' && energia_jogador == 0 && escolha12 !='b' && escolha12 != 'c'){
		printf("Você está sem energia, logo, não pode atacar. Escolha novamente.\n");
		scanf (" %c", &escolha12);}
while (escolha12 == 'a' && escolha11 == 'a'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha12);}
while (escolha12 == 'b' && escolha11 == 'b'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha12);}
while (escolha12 == 'c' && escolha11 == 'c'){
		printf("Opção inválida, pois você já escolheu essa ação antes. Escolha novamente.\n");
		scanf (" %c", &escolha12);}
		system ("clear");
	void round3 (char x,int *pVida_esfinge, int *pEnergia_esfinge, int *pVida_jogador, int *pEnergia_jogador);
	round3 (escolha12,pVida_esfinge,pEnergia_esfinge,pVida_jogador,pEnergia_jogador);
if (vida_jogador == 0){
		system ("clear");
		printf("Você morreu\n\nThe end\n\n");
		break;	}
if (vida_esfinge == 0){
		system ("clear");
		printf("TEMOS UM VENCEDOR\n\nThe end\n\n");
		break;	}
}
}
}
}
}
}
}
return 0;
}		

void round1 (char x,int *pVida_esfinge, int *pEnergia_esfinge, int *pVida_jogador, int *pEnergia_jogador){
if (x=='a'){
		--*pVida_esfinge;
		++*pEnergia_esfinge;
		--*pEnergia_jogador;
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge recarregou!\n\n\n\n\n\n\n\n                  Você atacou!\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
}
if (x=='b'){
		++*pEnergia_esfinge;
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge recarregou!\n\n\n\n\n\n\n\n                 Você defendeu!\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
}
if (x=='c' && *pEnergia_jogador <=2){
		++*pEnergia_esfinge;
		++*pEnergia_jogador; 
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge recarregou!\n\n\n\n\n\n\n\n                 Você recarregou!\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
}
else if (x=='c' && *pEnergia_jogador == 3){
		++*pEnergia_esfinge;
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge recarregou!\n\n\n\n\n\n\n\n                 A sua ação foi inútil, pois já atingiu o limite de energias\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);

}
}
void round2 (char x,int *pVida_esfinge, int *pEnergia_esfinge, int *pVida_jogador, int *pEnergia_jogador){
if (x=='a'){
		--*pEnergia_jogador;
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge defendeu!\n\n\n\n\n\n\n\n                Você atacou!\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
}
if (x=='b')
	printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge defendeu!\n\n\n\n\n\n\n\n                Você defendeu!\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
if (x=='c' && *pEnergia_jogador <=2){
		++*pEnergia_jogador;
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge defendeu!\n\n\n\n\n\n\n\n                Você recarregou!\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
}
else if (x=='c' && *pEnergia_jogador == 3)
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge defendeu!\n\n\n\n\n\n\n\n                 A sua ação foi inútil, pois já atingiu o limite de energias\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
}
void round3 (char x,int *pVida_esfinge, int *pEnergia_esfinge, int *pVida_jogador, int *pEnergia_jogador){
if (x=='a'){
		--*pVida_esfinge;
		--*pEnergia_jogador;
		--*pVida_jogador;
		--*pEnergia_esfinge;
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge atacou!\n\n\n\n\n\n\n\n                Você atacou!\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
}
if (x=='b'){
		--*pEnergia_esfinge;
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge atacou!\n\n\n\n\n\n\n\n                Você defendeu!\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
}
if (x=='c' && *pEnergia_jogador <=2){
		--*pVida_jogador;
		--*pEnergia_esfinge;
		++*pEnergia_jogador;
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge atacou!\n\n\n\n\n\n\n\n                Você recarregou!\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
}
else if (x=='c' && *pEnergia_jogador == 3){
		--*pVida_jogador;
		--*pEnergia_esfinge;
		printf("                     COMBATE:\n\n\nESFINGE>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n               A esfinge atacou!\n\n\n\n\n\n\n\n                 A sua ação foi inútil, pois já atingiu o limite de energias\n\n\nVOCÊ>>>>>>>>>>>>>>>VIDAS: %i>>>>>>>>>>>>ENERGIAS: %i\n\n\n\na) ATACAR\nb) DEFENDER\nc) RECARREGAR\n\nEscolha a sua ação:\n",*pVida_esfinge, *pEnergia_esfinge, *pVida_jogador, *pEnergia_jogador);
}
}

