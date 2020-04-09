/*
  Hentony Alves Pereira
  Algoritmos e programação de computadores
  Trabalho 2 */

#include <stdio.h>
#include <math.h>


int  modulo(int f) {
    return (f < 0 ? -f : f);
}


float fatorialsupremo (float x) {
	if (x==0)
    	return 1;
	else
    	return x*fatorialsupremo (x-1);
}


int fatorial (int x) {
	if (x==0)
    	return 1;
	else
    	return x*fatorial (x-1);
}


int potencia (int base, int expoente) {
	int resultado;

	if (expoente ==0)
    	return 1;
	else {
    	do {
       		resultado = base*base;
       		 --expoente;
		}
    	while (expoente>=1);

return resultado;
	}
}


int calcula_vida (int n,int pc,int a,int ne) {
	int hp = (fatorial(a+1)*potencia (n,pc))/(ne+1);

return hp;
}


void atualiza_iluminacao (int h,int l, int*x) {
	*x = (26/(modulo(h-12)+1))-(l*h)/12;
}


float num_euler(int x) {
	float i;
	
	if (x>=0 )
    	i = (1/fatorialsupremo(x))+num_euler(x-1);

return i;
}


char entrada_valida() {
	char x;

	x=getchar ();
	while (x!='w' && x!= 'W' && x!= 'a' && x!= 'A' && x!= 'd' && x!= 'D' && x!= 'm' && x!= 'M' && x!= 's' && x!= 'S')
    	x=getchar ();
return x;
}

	
void int_para_hex (int n) {
	int i =0;	
	int vetor[10];
	
	while (n/16>=0) {
		int x = n % 16;
		i++;
		vetor[i]=x;
		n=n/16;
		if (n==0)
			break;
	}
	for (; i>0;--i) {
		if (vetor[i]==10)
			printf("A");
		if (vetor[i]==11)
			printf("B");
		if (vetor[i]==12)
			printf("C");
		if (vetor[i]==13)
			printf("D");
		if (vetor[i]==14)
			printf("E");
		if (vetor[i]==15)
			printf("F");
		else if (vetor[i]== 0 || vetor[i]==1 || vetor[i]== 2 || vetor[i]== 3 || vetor[i]== 4 || vetor[i]==5 || vetor[i]== 6 || vetor[i]==7 || vetor[i]==8 || vetor[i]==9)
			printf("%d", vetor[i]);
	}

	printf("\n");
}
	

int opera_ponteiro (int **ppj,int *pi,int op) {
		if (op==1)
			return (*pi)+(**ppj);
		if (op==2)
			return (**ppj)-(*pi);
		if (op==3)
			return (*pi)*(**ppj);
		return 0;
}


float dif_dist (int xi, int yi, int xf, int yf) {
	float dm = modulo(xf-xi) + modulo(yf-yi);
	float de = sqrt(potencia((xf-xi),2) + potencia ((yf-yi), 2));

return dm-de;
}


void tempo_de_jogo (void) {
    float hora_inicial, hora_final,minuto_inicial,minuto_final,segundo_inicial,segundo_final;
    int hora,minuto,segundo;
    char aux;

    scanf("%f %c %f %c %f", &hora_inicial, &aux, &minuto_inicial, &aux, &segundo_inicial);
    scanf("%f %c %f %c %f", &hora_final, &aux, &minuto_final, &aux, &segundo_final);

            hora=((((segundo_final/60)+minuto_final)/60)+hora_final)-((((segundo_inicial/60)+minuto_inicial)/60)+hora_inicial);
            minuto=((((((segundo_final/60)+minuto_final)/60)+hora_final)-((((segundo_inicial/60)+minuto_inicial)/60)+hora_inicial)-hora)*60);
            segundo=((((((((segundo_final/60)+minuto_final)/60)+hora_final)-((((segundo_inicial/60)+minuto_inicial)/60)+hora_inicial)-hora)*60)-minuto)*60);

    if(hora<10)
        printf("0%d",hora);
    else
        printf("%d", hora);
    if (minuto<10)
        printf("%c0%d%c",aux,minuto,aux);
    else
        printf("%c%d%c",aux, minuto,aux);
    if (segundo<10)
        printf("0%d\n", segundo);
    else
        printf("%d\n", segundo);

}



_Bool esta_ordenado (void) {
	int i=0;
	char nome[6];
	char nome2[6];
	
	scanf("%s%s", nome,nome2);	
	
	if (nome[i]>='A' && nome[i]<='Z')
		nome[i]+=32;
	if (nome2[i]>='A' && nome2[i]<='Z')
		nome2[i]+=32;

	while (nome[i]==nome2[i])
		++i;
	
	if (nome[i]<nome2[i])
		return 1;
	else 
		return 0;
}


int busca_item(int vetor[10], int N) {
	int i=0, w=0;

	for(i=0; i<10; ++i) {
		if(vetor[i]==N)
			++w;
	}
	if(w>0)
		printf("O item %d foi encontrado no inventário.\n",N);
	else 
		printf("O item %d não foi encontrado no inventário.\n",N);

return w;
}
