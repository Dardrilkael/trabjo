

#include <stdio.h>


#pragma warning(disable : 4996);
int main()
{

	int tempo;
	int i;

	printf("A quanto tempo voce instalou seu marcapasso: ");
	setbuf(stdin, NULL);
	scanf("%d", &tempo);

	printf("Qual o tipo do seu marcapasso:\n\t (0)convencional\t(1)ressincronização cardiaca ");
	setbuf(stdin, NULL);
	scanf("%d", &i);

	int t_restante = -tempo;
	if (i)
		t_restante += 15;
	else
		t_restante += 10 ;

	
	if (!t_restante) printf("Voce deve trocar seu marcapasso urgentemente\n");
	else if (t_restante<0) printf("Voce esta morto\n");
	else
		printf("Seu Macapasso vai durar %d anos", t_restante);

	
	

	return 0;
}