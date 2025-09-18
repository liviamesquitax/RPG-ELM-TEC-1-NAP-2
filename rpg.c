LIVIA
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>










// Variáveis globais usadas em mais de uma função
int dinheiro = 0;
int presenca = 0;
int upgradeBarco = 0;
char amigo1[20];








// ================= PROTÓTIPOS =================
int escolhaPorta();
int escolhaEspada();
void escolhaAmigo1();
int sideQuest1(int dinheiro);   // recebe dinheiro como parâmetro
int escolhaBarco(int dinheiro); // idem
int escolhaIlha();
void escolhaDesembarque();
int sideQuest2(int dinheiro);
int escolhaAjudarOlga();








// ================= MAIN =================
int main() {








    setlocale(LC_ALL, "pt_BR.UTF-8");








    int upgradeBarco = 0;








    printf("Seja bem vindo ao nosso rpg \"ELM, uma aventura histórica\",\n (TEXTO DE INÍCIO)\n");








    // Chama a função escolhaPorta
    escolhaPorta();








    // Texto de lore
    printf("Velho te chama pra te explicar o mundo... (descrição do cenário)\n");








    // Chama a função escolhaEspada
    escolhaEspada();








    // Texto de progressão
    printf("Bora lá falar com o chefe da vila rapidão...\n");
    printf("Chegando ao castelo você se encontra com o rei...\n");








    dinheiro = 1000;








    // Chama a função escolhaAmigo1
    escolhaAmigo1();
    printf("\nSeu companheiro será: %s!\n", amigo1);
    printf("Nosso herói e %s se encaminham para a ilha 1\n", amigo1);










    // Chama a função sideQuest1
    dinheiro = sideQuest1(dinheiro);








    // Chama a função escolhaBarco
    dinheiro = escolhaBarco(dinheiro);








    // Chama a função escolhaIlha
    escolhaIlha();








    // Chama a função escolhaDesembarque
    escolhaDesembarque();




    dinheiro = sideQuest2(dinheiro);


    printf("HISTÓRIA SOBRE OQUE ESTÁ ACONTECENDO NA ILHA 1: \nAlguns homens estão encurralando e assediando uma moradora da ilha chamada 'Olga'\n");


    escolhaAjudarOlga();




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








void escolhaAmigo1() {
    int escolha = 0;
    printf("Escolha um companheiro para compor seu grupo:\n");
    printf("(1) Burro\n");
    printf("(2) Engraçado\n");
    printf("(3) Velho\n");








    do {
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("Você vai até o Burro.\n\n");
                strcpy(amigo1, "Burro");
                break;
            case 2:
                printf("Você vai até o Engraçado.\n\n");
                strcpy(amigo1, "Engraçado");
                break;
            case 3:
                printf("Você vai até o Velho.\n\n");
                strcpy(amigo1, "Velho");
                break;
            default:
                printf("Insira uma resposta válida: ");
                escolha=0;    
                break;
                
        }
    } while (escolha == 0);
   
}








int sideQuest1(int dinheiro) {
    int escolha;
    printf("SIDE QUEST 1\n");
    printf("O rei brigou com sua esposa, e ele te falou que caso você consiga \n apaziguar essa briga ele te daria mais 1000 moedas para a sua aventura\n");
    printf("Deseja realizar essa missão especial para ganhar 1000 moedas?\n\n");








    printf("SIM (1)\n");
    printf("NÃO (2)\n\n");








    do {
        scanf("%d", &escolha);








        switch (escolha) {
            case 1: {
                printf("Vamos à missão!\n");
                int escolhaDoPresente;
                printf("QUAL PRESENTE VOCÊ ESCOLHE PARA O REI DAR PARA A RAINHA?\n");
                printf("(1) CHOCOLATE FEITO POR MORADORAS LOCAIS\n(2) UMA GALINHA\n(3) FLORES DE TODA A ILHA CATADAS À MÃO\n\n");
                scanf("%d", &escolhaDoPresente);








                if (escolhaDoPresente == 1 || escolhaDoPresente == 3) {
                    dinheiro += 1000;
                    printf("PARABÉNS, VOCÊ GANHOU 1000 MOEDAS! Agora você tem %d moedas.\n", dinheiro);
                } else {
                    printf("VOCÊ FALHOU e não ganhou moedas :(\n");
                }
                break;
            }
            case 2:
                printf("Vamos à escolha da ilha e do barco para sua missão principal\n");
                break;
            default:
                printf("Insira uma resposta válida: ");
                break;
        }
    } while (escolha != 1 && escolha != 2);








    return dinheiro;
}








int escolhaBarco(int dinheiro) {
    int escolha;
    int escolhaUpgradeBarco = 0; // Variável para armazenar a escolha de upgrade do barco
    printf("Qual barco você escolhe para sair da ilha?\n");
    printf("Barco Simples (1)\nTeco Teco Furado (2)\n\n");








    do {
        scanf("%d", &escolha);








        switch (escolha) {
            case 1: {
                printf("Você deseja fazer um upgrade no barco por 500 moedas?\n");
                printf("(1) SIM\n(2) NÃO\n\n");
                scanf("%d", &escolhaUpgradeBarco);








                if (escolhaUpgradeBarco == 1 && dinheiro >= 500) {
                    dinheiro -= 500;
                    printf("Você melhorou seu barco e agora tem %d moedas.\n\n", dinheiro);
                } else if (escolhaUpgradeBarco == 1 && dinheiro < 500) {
                    printf("Você não tem moedas suficientes para o upgrade!\n");
                } else {
                    printf("Você seguiu com o barco simples.\n");
                }
                break;
            }
            case 2:
                printf("Você deseja fazer um upgrade no barco por 500 moedas?\n");
                printf("(1) SIM\n(2) NÃO\n\n");
                scanf("%d", &escolhaUpgradeBarco);








                if (escolhaUpgradeBarco == 1 && dinheiro >= 500) {
                    dinheiro -= 500;
                    printf("Você melhorou seu barco e agora tem %d moedas.\n\n", dinheiro);
                } else if (escolhaUpgradeBarco == 1 && dinheiro < 500) {
                    printf("Você não tem moedas suficientes para o upgrade!\n");
                } else {
                    printf("Você seguiu com o teco teco furado.\n");
                }
                break;
            default:
                printf("Insira uma resposta válida: ");
                break;
        }
    } while (escolha != 1 && escolha != 2);








    return dinheiro;
}








int escolhaIlha() {
    int escolha;
    printf("Escolha uma ilha para ir:\n");
    printf("(1) Ilha perto, bem perto\n");
    printf("(2) Ilha muito muito longe\n");
    printf("(3) Ilha do CHEFÃO\n");








    do {
        scanf("%d", &escolha);








        switch (escolha) {
            case 1:
                printf("Você chegou à ilha perto, bem perto à salvo.\n");
                break;
            case 2:
                printf("Você não conseguiu chegar à ilha muito muito longe, e seu barco afundou.\n");
                printf("FIM DE JOGO\n");
                exit(0); //função nova pesquisada para finalizar o jogo caso seja feita determinada escolha
            case 3:
                printf("Você encontrou o CHEFÃO e foi derrotado.\n");
                printf("FIM DE JOGO\n");
                exit(0);
            default:
                printf("Insira uma resposta válida: ");
                break;
        }
    } while (escolha != 1 && escolha != 2 && escolha != 3);








    return escolha;
}


void escolhaDesembarque() {
    int escolha;








    printf("Escolha uma maneira de desembarque na Ilha 1:\n");
    printf("(1) Maneira oficial, que custa 500 moedas.\n");
    printf("(2) Maneira clandestina\n");








    do {
        scanf("%d", &escolha);








        switch (escolha) {
            case 1:
                if (dinheiro >= 500) {
                    dinheiro -= 500;
                    printf("Você entrou e gastou 500 moedas,\n");
                    printf("Agora você tem %d moedas\n", dinheiro);
                    printf("VOCÊ NÃO SERÁ PERSEGUIDO E O VILÃO NÃO NOTOU SUA PRESENÇA!\n");
                } else {
                    printf("Você não tem moedas suficientes para o desembarque oficial!\n");
                }
                break;
            case 2:
                printf("Você entrou sem moedas, mas em compensação, o vilão notou sua presença na ilha.\n");
                presenca += 1;
                printf("VOCÊ TEM AGORA %d PRESENÇA\n", presenca);
                break;
            default:
                printf("Insira uma resposta válida: ");
                escolha = 0;
                break;
        }
    } while (escolha != 1 && escolha != 2);
}






int sideQuest2(int dinheiro) {
    int escolha;
    printf("SIDE QUEST 2\n");
    printf("Um dragão está devorando as ovelhas de um pastor na ilha\n");
    printf("Deseja empunhar sua espada e ajudar o pastor a derrotar o dragão?\n\n");
    printf("(1) SIM\n(2) NÃO\n");


    do {
        scanf("%d", &escolha);


        switch (escolha) {
            case 1:
                printf("Você ajudou e acaba de ganhar 500 moedas\n");
                dinheiro+=500;
                printf("Agora você tem %d moedas\n", dinheiro);
                break;
            case 2:
                printf("Você não ajudou e não ganhou moedas :( \n");
            default:
                printf("Insira uma resposta válida: \n");
                break;
        }
    } while (escolha != 1 && escolha != 2 && escolha != 3);


    return escolha;
}


int escolhaAjudarOlga() {
    int escolha;
    printf("Você vê Olga sendo assediada por alguns homens. O que você faz?\n");
    printf("(1) Intervir e ajudar Olga\n");
    printf("(2) Ignorar a situação e seguir seu caminho\n");


    do {
        scanf("%d", &escolha);


        switch (escolha, presenca, dinheiro) {
            case 1:
                printf("Você corajosamente interveio e ajudou Olga!\n");
                printf("Olga agradece e lhe dá 500 moedas como recompensa.\n");
                dinheiro+=500;
                printf("Agora você tem %d moedas\n", dinheiro);
                presenca += 1;
                printf("ENTRETANTO, VOCÊ TEM AGORA %d PRESENÇA\n", presenca);
                printf("Após a ajuda, o dono do bar oferece pagar (500 dinheiros) e pagar a bebida por eles terem mandado os meliantes para fora do bar e a Olga sai e depois volta com seus equipamentos, assim descobrindo que ela é uma aventureira  e atiradora nata\n");
                break;
            case 2:
                printf("Você não ajudou Olga e não ganhou moedas :( \n");
                break;
            default:
                printf("Insira uma resposta válida: \n");
                break;
        }
    } while (escolha != 1 && escolha != 2 && escolha != 3);


    return escolha;
}





















