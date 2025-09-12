#include <stdio.h>
#include <string.h>
#include <locale.h>


// ================= PROT�TIPOS =================
int escolhaPorta();
int escolhaEspada();
char* escolhaAmigo1();

// ================= MAIN =================
int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int dinheiro = 0, presenca = 0, upgradeBarco = 0;

    printf("Seja bem vindo ao nosso rpg \"ELM, uma aventura hist�rica\",\n (TEXTO DE IN�CIO)\n");

    // Chama a fun��o escolhaPorta
    escolhaPorta();

    // Texto de lore
    printf("Velho te chama pra te explicar o mundo... (descri��o do cen�rio)\n");

    // Chama a fun��o escolhaEspada
    escolhaEspada();

    // Texto de progress�o
    printf("Bora la falar com o chefe da vila rapid�o...\n");
    printf("Chegando ao castelo voc� se encontra com o rei...\n");
    dinheiro = 1000;

    // Chama a fun��o escolhaAmigo1
    char *amigo1 = escolhaAmigo1();
    printf("\nSeu companheiro ser�: %s!\n", amigo1);

    return 0;
}

// ================= IMPLEMENTA��ES =================
int escolhaPorta() {
    int escolha;
    printf("Voc� acabou de acordar... abrir� a porta?\n");
    printf("Sim (1)\nN�o (2)\n");

    do {
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Voc� vai at� o velho.\n");
                break;

            case 2:
                printf("O velho vai at� voc�.\n");
                break;

            default:
                printf("Insira uma resposta v�lida: ");
                break;
        }
    } while (escolha != 1 && escolha != 2);

    return escolha;
}

int escolhaEspada() {
    int escolha;
    printf("Uma janela de notifica��o aparece: \"Miss�o de urg�ncia detectada: Salve os moradores da Vila Mel�o!!!\"\n");
    printf("Combate detectado! Deseja retirar sua espada do invent�rio?\n");
    printf("Sim (1)\nN�o, vou na m�o mesmo, eu sou o bich�o! (2)\n");

    do {
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Texto descrevendo a batalha com espada.\n");
                break;

            case 2:
                printf("Texto descrevendo a batalha na m�o.\n");
                break;

            default:
                printf("Insira uma resposta v�lida: ");
                break;
        }
    } while (escolha != 1 && escolha != 2);

    return escolha;
}

char* escolhaAmigo1() {
    int escolha;
    printf("Escolha um companheiro para compor seu grupo:\n");
    printf("(1) Burro\n");
    printf("(2) Engra�ado\n");
    printf("(3) Velho\n");

    do {
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("Voc� vai at� o Burro.\n");
                return "Burro";
            case 2:
                printf("Voc� vai at� o Engra�ado.\n");
                return "Engra�ado";
            case 3:
                printf("Voc� vai at� o Velho.\n");
                return "Velho";
            default:
                printf("Insira uma resposta v�lida: ");
                break;
        }
    } while (1);
}