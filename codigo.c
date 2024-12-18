#include <stdio.h>
#include <string.h>

void criptografar(char mensagem[], int chave) {
    for (int i = 0; i < strlen(mensagem); i++) {
        mensagem[i] = mensagem[i] + chave;
    }
}

void descriptografar(char mensagem[], int chave) {
    for (int i = 0; i < strlen(mensagem); i++) {
        mensagem[i] = mensagem[i] - chave;
    }
}

int main() {
    char mensagem[10000];
    int chave;
    int acs=1, nt=0, aux=0, k=0;
    char escolha;
    while(aux<1){
    		printf("digite a chave de acesso: \t");
    		scanf("%i",&nt);
    		if(nt==acs){
    			aux++;
			}
			if(aux==3){
				printf("digite * ao inves de (c/d) se quiser parar o codigo\n");
			}
	}
	while(k<1){
    printf("Você deseja criptografar ou descriptografar a mensagem? (c/d): ");
    scanf(" %c", &escolha);
    getchar();
    
    if (escolha == '*') {
        printf("OK! Vamos parar por hoje\n");
        break;
		}

    printf("Digite a mensagem: ");
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = '\0';

    printf("Digite a chave para criptografia: ");
    scanf("%d", &chave);

    if (escolha == 'c') {
        criptografar(mensagem, chave);
        printf("Mensagem criptografada: %s\n", mensagem);
    } else if (escolha == 'd') {
        descriptografar(mensagem, chave);
        printf("Mensagem descriptografada: %s\n", mensagem);
    } else {
        printf("Opção inválida. Por favor, escolha 'c' para criptografar ou 'd' para descriptografar.\n");
    }
}
    return 0;
}