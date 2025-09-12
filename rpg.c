#include <stdio.h>
#include <string.h>
#include <locale.h>


// ================= PROTÓTIPOS =================
int escolhaPorta();
int escolhaEspada();
char* escolhaAmigo1();

// ================= MAIN =================
int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    
    int dinheiro = 0, presenca = 0, upgradeBarco = 0;

    printf("Seja bem vindo ao nosso rpg \"ELM, uma aventura histórica\",\n (TEXTO DE INÍCIO)\n");

    // Chama a função escolhaPorta
    escolhaPorta();

    // Texto de lore
    printf("Velho te chama pra te explicar o mundo... (descrição do cenário)\n");

    // Chama a função escolhaEspada
    escolhaEspada();

    // Texto de progressão
    printf("Bora la falar com o chefe da vila rapidão...\n");
    printf("Chegando ao castelo você se encontra com o rei...\n");
    dinheiro = 1000;

    // Chama a função escolhaAmigo1
    char *amigo1 = escolhaAmigo1();
    printf("\nSeu companheiro será: %s!\n", amigo1);

    return 0;
}

// ================= IMPLEMENTAÇÕES =================
int escolhaPorta() {
    int escolha;
    printf("Você acabou de acordar... abrirá a porta?\n");
    printf("Sim (1)\nNão (2)\n");

    do {
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Você vai até o velho.\n");
                break;

            case 2:
                printf("O velho vai até você.\n");
                break;

            default:
                printf("Insira uma resposta válida: ");
                break;
        }
    } while (escolha != 1 && escolha != 2);

    return escolha;
}

int escolhaEspada() {
    int escolha;
    printf("Uma janela de notificação aparece: \"Missão de urgência detectada: Salve os moradores da Vila Melão!!!\"\n");
    printf("Combate detectado! Deseja retirar sua espada do inventário?\n");
    printf("Sim (1)\nNão, vou na mão mesmo, eu sou o bichão! (2)\n");

    do {
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Texto descrevendo a batalha com espada.\n");
                break;

            case 2:
                printf("Texto descrevendo a batalha na mão.\n");
                break;

            default:
                printf("Insira uma resposta válida: ");
                break;
        }
    } while (escolha != 1 && escolha != 2);

    return escolha;
}

char* escolhaAmigo1() {
    int escolha;
    printf("Escolha um companheiro para compor seu grupo:\n");
    printf("(1) Burro\n");
    printf("(2) Engraçado\n");
    printf("(3) Velho\n");

    do {
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("Você vai até o Burro.\n");
                return "Burro";
            case 2:
                printf("Você vai até o Engraçado.\n");
                return "Engraçado";
            case 3:
                printf("Você vai até o Velho.\n");
                return "Velho";
            default:
                printf("Insira uma resposta válida: ");
                break;
        }
    } while (1);
}