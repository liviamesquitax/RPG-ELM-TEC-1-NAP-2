#include <stdio.h> // tem que baixar o mingw pra add a biblio

int main() 
{

    int  dinheiro=0, presença=0, upgradeBarco=0;

    printf("Seja bem vindo ao nosso rpg \"ELM, uma aventura histórica\",\n (TEXTO DE INÍCIO)");

//Função escolha de abrir ou não a porta     
    int escolhaPorta() {
        int escolha;
        printf("Você acabou de acordar ............ dito isso, você abrirá a porta?:\n");
        printf("Sim (1)\nNão (2)\n");
        do {
            scanf("%d", &escolha);

            switch (escolha) {
                case 1:
                    printf("Você vai até o velho\n");
                    break;

                case 2:
                    printf("O velho vai até você\n");
                    break;

                default:
                    printf("Insira uma resposta válida: ");
                    break;
            }
        } while (escolha != 1 && escolha != 2);
    }

//Explicação completa do velho sobre o mundo
    printf("velho te chama pra te explicar o mundo, ou ele entrou no quarto pq ouviu que tu acordou ou ele te chamou quando tu saiu do quarto, VELHO EXPLICA O MUNDO, nome da ilha que estou e detalhes do arquipélago, pobreza, fome, falta de segurança, cobrança abusiva de impostos, situação geral e como tudo isso é culpa de um único líder.\n");        
    printf("Vê uma confusão por conta de uma invasão guardas preocupam-se mais em se proteger do que ajudar a população. Protagonista não pensa duas vzs e vai ajudar população. janela de status? tirar espada do inventário?\n");

//Função primeiro combate/espada
    int escolhaEspada() {
            int escolha;
            printf("Uma janela de notificação aparece com a seguinte mensagem: \"Missão de urgência detectada: Salve os moradores da Vila Melão!!!\".\n");
            printf("Outra janela de notificação aparece com a seguinte mensagem: \"Combate detectado, deseja retirar sua espada do inventário?\".\n");
            printf("Sim (1)\nNão, vou na mão mesmo, eu sou o bichão! (2)\n");
            do {
                    scanf("%d", &escolha);

                    switch (escolha) {
                        case 1:
                            printf("texto descrevendo a batalha com espada\n");
                            break;

                        case 2:
                            printf("texto descrevendo a batalha na mão\n");
                            break;

                        default:
                            printf("Insira uma resposta válida: ");
                            break;
                    }
                } while (escolha != 1 && escolha != 2);
    }            
    
//Velho percebe que o protagonista é um "Jogador" e leva ele pra falar com o rei
    printf("Bora la falar com o chefe da vila rapidão");
    printf("Chegando ao castelo (rodeado por pastores de ovelha) voce se encontra com o rei, o velho conta ao rei o ocorrido e revela saber que voce é um jogador, o rei ao saber de tudo isso lhe pede ajuda para livrar a região do controle da Marinha.");
    printf("O rei te oferece 1000 e posteriormente, manda um mensageiro lhe dizer que 3 pessoas foram inspiradas pelo seu ato de bravura e desejam se juntar ao seu grupo para derrotar a marinha.");
        dinheiro = 1000;

//Escolha do amigo
    int escolhaAmigo1() {
        int escolha;
        char amigo1[];
        printf("Escolha um companheiro para compor seu grupo:\n");
        printf("(1)\n");
        printf("(2)\n");
        printf("(3)\n");
        do {
            scanf("%d", &escolha);

            switch (escolha) {
                case 1:
                    printf("Você vai até o burro\n");
                    amigo1[] = "Burro";
                    break;
                case 2:
                    printf("Voce vai ate o engraçado\n");
                    amigo1[] = "Engraçado";
                    break;
                caso 3:
                    printf("Voce vai ate o velho\n");
                    amigo1[] = "Velho";
                    break;
                default:
                    printf("Insira uma resposta válida: ");
                    break;
            }
        } while (escolha != 1 && escolha != 2);
        return amigo1[];
    }














return 0;
}  