LIVIA
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>










// Vari�veis globais usadas em mais de uma fun��o
int dinheiro = 0;
int presenca = 0;
int upgradeBarco = 0;
char amigo1[20];








// ================= PROT�TIPOS =================
int escolhaPorta();
int escolhaEspada();
void escolhaAmigo1();
int sideQuest1(int dinheiro);   // recebe dinheiro como par�metro
int escolhaBarco(int dinheiro); // idem
int escolhaIlha();
void escolhaDesembarque();
int sideQuest2(int dinheiro);
int escolhaAjudarOlga();








// ================= MAIN =================
int main() {








    setlocale(LC_ALL, "pt_BR.UTF-8");








    int upgradeBarco = 0;








    printf("Seja bem vindo ao nosso rpg \"ELM, uma aventura hist�rica\",\n (TEXTO DE IN�CIO)\n");








    // Chama a fun��o escolhaPorta
    escolhaPorta();








    // Texto de lore
    printf("Velho te chama pra te explicar o mundo... (descri��o do cen�rio)\n");








    // Chama a fun��o escolhaEspada
    escolhaEspada();








    // Texto de progress�o
    printf("Bora l� falar com o chefe da vila rapid�o...\n");
    printf("Chegando ao castelo voc� se encontra com o rei...\n");








    dinheiro = 1000;








    // Chama a fun��o escolhaAmigo1
    escolhaAmigo1();
    printf("\nSeu companheiro ser�: %s!\n", amigo1);
    printf("Nosso her�i e %s se encaminham para a ilha 1\n", amigo1);










    // Chama a fun��o sideQuest1
    dinheiro = sideQuest1(dinheiro);








    // Chama a fun��o escolhaBarco
    dinheiro = escolhaBarco(dinheiro);








    // Chama a fun��o escolhaIlha
    escolhaIlha();








    // Chama a fun��o escolhaDesembarque
    escolhaDesembarque();




    dinheiro = sideQuest2(dinheiro);


    printf("HIST�RIA SOBRE OQUE EST� ACONTECENDO NA ILHA 1: \nAlguns homens est�o encurralando e assediando uma moradora da ilha chamada 'Olga'\n");


    escolhaAjudarOlga();




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








void escolhaAmigo1() {
    int escolha = 0;
    printf("Escolha um companheiro para compor seu grupo:\n");
    printf("(1) Burro\n");
    printf("(2) Engra�ado\n");
    printf("(3) Velho\n");








    do {
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                printf("Voc� vai at� o Burro.\n\n");
                strcpy(amigo1, "Burro");
                break;
            case 2:
                printf("Voc� vai at� o Engra�ado.\n\n");
                strcpy(amigo1, "Engra�ado");
                break;
            case 3:
                printf("Voc� vai at� o Velho.\n\n");
                strcpy(amigo1, "Velho");
                break;
            default:
                printf("Insira uma resposta v�lida: ");
                escolha=0;    
                break;
                
        }
    } while (escolha == 0);
   
}








int sideQuest1(int dinheiro) {
    int escolha;
    printf("SIDE QUEST 1\n");
    printf("O rei brigou com sua esposa, e ele te falou que caso voc� consiga \n apaziguar essa briga ele te daria mais 1000 moedas para a sua aventura\n");
    printf("Deseja realizar essa miss�o especial para ganhar 1000 moedas?\n\n");








    printf("SIM (1)\n");
    printf("N�O (2)\n\n");








    do {
        scanf("%d", &escolha);








        switch (escolha) {
            case 1: {
                printf("Vamos � miss�o!\n");
                int escolhaDoPresente;
                printf("QUAL PRESENTE VOC� ESCOLHE PARA O REI DAR PARA A RAINHA?\n");
                printf("(1) CHOCOLATE FEITO POR MORADORAS LOCAIS\n(2) UMA GALINHA\n(3) FLORES DE TODA A ILHA CATADAS � M�O\n\n");
                scanf("%d", &escolhaDoPresente);








                if (escolhaDoPresente == 1 || escolhaDoPresente == 3) {
                    dinheiro += 1000;
                    printf("PARAB�NS, VOC� GANHOU 1000 MOEDAS! Agora voc� tem %d moedas.\n", dinheiro);
                } else {
                    printf("VOC� FALHOU e n�o ganhou moedas :(\n");
                }
                break;
            }
            case 2:
                printf("Vamos � escolha da ilha e do barco para sua miss�o principal\n");
                break;
            default:
                printf("Insira uma resposta v�lida: ");
                break;
        }
    } while (escolha != 1 && escolha != 2);








    return dinheiro;
}








int escolhaBarco(int dinheiro) {
    int escolha;
    int escolhaUpgradeBarco = 0; // Vari�vel para armazenar a escolha de upgrade do barco
    printf("Qual barco voc� escolhe para sair da ilha?\n");
    printf("Barco Simples (1)\nTeco Teco Furado (2)\n\n");








    do {
        scanf("%d", &escolha);








        switch (escolha) {
            case 1: {
                printf("Voc� deseja fazer um upgrade no barco por 500 moedas?\n");
                printf("(1) SIM\n(2) N�O\n\n");
                scanf("%d", &escolhaUpgradeBarco);








                if (escolhaUpgradeBarco == 1 && dinheiro >= 500) {
                    dinheiro -= 500;
                    printf("Voc� melhorou seu barco e agora tem %d moedas.\n\n", dinheiro);
                } else if (escolhaUpgradeBarco == 1 && dinheiro < 500) {
                    printf("Voc� n�o tem moedas suficientes para o upgrade!\n");
                } else {
                    printf("Voc� seguiu com o barco simples.\n");
                }
                break;
            }
            case 2:
                printf("Voc� deseja fazer um upgrade no barco por 500 moedas?\n");
                printf("(1) SIM\n(2) N�O\n\n");
                scanf("%d", &escolhaUpgradeBarco);








                if (escolhaUpgradeBarco == 1 && dinheiro >= 500) {
                    dinheiro -= 500;
                    printf("Voc� melhorou seu barco e agora tem %d moedas.\n\n", dinheiro);
                } else if (escolhaUpgradeBarco == 1 && dinheiro < 500) {
                    printf("Voc� n�o tem moedas suficientes para o upgrade!\n");
                } else {
                    printf("Voc� seguiu com o teco teco furado.\n");
                }
                break;
            default:
                printf("Insira uma resposta v�lida: ");
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
    printf("(3) Ilha do CHEF�O\n");








    do {
        scanf("%d", &escolha);








        switch (escolha) {
            case 1:
                printf("Voc� chegou � ilha perto, bem perto � salvo.\n");
                break;
            case 2:
                printf("Voc� n�o conseguiu chegar � ilha muito muito longe, e seu barco afundou.\n");
                printf("FIM DE JOGO\n");
                exit(0); //fun��o nova pesquisada para finalizar o jogo caso seja feita determinada escolha
            case 3:
                printf("Voc� encontrou o CHEF�O e foi derrotado.\n");
                printf("FIM DE JOGO\n");
                exit(0);
            default:
                printf("Insira uma resposta v�lida: ");
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
                    printf("Voc� entrou e gastou 500 moedas,\n");
                    printf("Agora voc� tem %d moedas\n", dinheiro);
                    printf("VOC� N�O SER� PERSEGUIDO E O VIL�O N�O NOTOU SUA PRESEN�A!\n");
                } else {
                    printf("Voc� n�o tem moedas suficientes para o desembarque oficial!\n");
                }
                break;
            case 2:
                printf("Voc� entrou sem moedas, mas em compensa��o, o vil�o notou sua presen�a na ilha.\n");
                presenca += 1;
                printf("VOC� TEM AGORA %d PRESEN�A\n", presenca);
                break;
            default:
                printf("Insira uma resposta v�lida: ");
                escolha = 0;
                break;
        }
    } while (escolha != 1 && escolha != 2);
}






int sideQuest2(int dinheiro) {
    int escolha;
    printf("SIDE QUEST 2\n");
    printf("Um drag�o est� devorando as ovelhas de um pastor na ilha\n");
    printf("Deseja empunhar sua espada e ajudar o pastor a derrotar o drag�o?\n\n");
    printf("(1) SIM\n(2) N�O\n");


    do {
        scanf("%d", &escolha);


        switch (escolha) {
            case 1:
                printf("Voc� ajudou e acaba de ganhar 500 moedas\n");
                dinheiro+=500;
                printf("Agora voc� tem %d moedas\n", dinheiro);
                break;
            case 2:
                printf("Voc� n�o ajudou e n�o ganhou moedas :( \n");
            default:
                printf("Insira uma resposta v�lida: \n");
                break;
        }
    } while (escolha != 1 && escolha != 2 && escolha != 3);


    return escolha;
}


int escolhaAjudarOlga() {
    int escolha;
    printf("Voc� v� Olga sendo assediada por alguns homens. O que voc� faz?\n");
    printf("(1) Intervir e ajudar Olga\n");
    printf("(2) Ignorar a situa��o e seguir seu caminho\n");


    do {
        scanf("%d", &escolha);


        switch (escolha, presenca, dinheiro) {
            case 1:
                printf("Voc� corajosamente interveio e ajudou Olga!\n");
                printf("Olga agradece e lhe d� 500 moedas como recompensa.\n");
                dinheiro+=500;
                printf("Agora voc� tem %d moedas\n", dinheiro);
                presenca += 1;
                printf("ENTRETANTO, VOC� TEM AGORA %d PRESEN�A\n", presenca);
                printf("Ap�s a ajuda, o dono do bar oferece pagar (500 dinheiros) e pagar a bebida por eles terem mandado os meliantes para fora do bar e a Olga sai e depois volta com seus equipamentos, assim descobrindo que ela � uma aventureira  e atiradora nata\n");
                break;
            case 2:
                printf("Voc� n�o ajudou Olga e n�o ganhou moedas :( \n");
                break;
            default:
                printf("Insira uma resposta v�lida: \n");
                break;
        }
    } while (escolha != 1 && escolha != 2 && escolha != 3);


    return escolha;
}





















