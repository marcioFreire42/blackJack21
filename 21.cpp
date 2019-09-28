#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime> 
#include <locale.h>
#include <string>

using namespace std;

void imprimecartas();
int sorteiacarta();
int quemcomeca();
void criabaralho();
int minhavez();
void imprimeCarta(int i);
void nomedacarta(int i);

struct baralho
{
    int valor;
    int numero;
    string naipe;
};

struct baralho carta[52];

int main (){

    setlocale(LC_ALL, "Portuguese");
   
    criabaralho();

    //imprimecartas();

    //int comeca;
    //comeca = quemcomeca();

    minhavez();

    return 0;
}

void criabaralho(){
    // Gerando as cartas do naipe de espadas;
    for (int i = 0; i < 13; i++){
        carta[i].numero = i + 1;
        carta[i].naipe = ("espadas");
        if (carta[i].numero >= 11){
            carta[i].valor = 10;
        } else {
            carta[i].valor = carta[i].numero;
        }
    }

    //Gerando as cartas do naipe de copas;
    for (int i = 0; i < 13; i++){
        carta[i + 13].numero = i + 1;
        carta[i + 13].naipe = ("copas  ");
        if (carta[i + 13].numero >= 11){
            carta[i + 13].valor = 10;
        } else {
            carta[i + 13].valor = carta[i].numero;
        }
    }

    // Gerando as cartas do naipe de ouro;
    for (int i = 0; i < 13; i++){
        carta[i + 26].numero = i + 1;
        carta[i + 26].naipe = ("ouro   ");
        if (carta[i + 26].numero >= 11){
            carta[i + 26].valor = 10;
        } else {
            carta[i + 26].valor = carta[i].numero;
        }
    }

    // Gerando as cartas do naipe de paus;
    for (int i = 0; i < 13; i++){
        carta[i + 39].numero = i + 1;
        carta[i + 39].naipe = ("paus   ");
        if (carta[i + 39].numero >= 11){
            carta[i + 39].valor = 10;
        } else {
            carta[i + 39].valor = carta[i].numero;
        }
    }
}

void imprimecartas(){
    for (int i= 0; i < 52; i++){
        cout << "carta " << i << " é o: " << carta[i].numero << " de " << carta[i].naipe << " Vale " << carta[i].valor << " pontos." << endl;
    }
}

int sorteiacarta(){
    srand(time(NULL));
    int num = rand() % 52;
    return num;
}

int quemcomeca(){
    system("clear");
    cout << endl << "         BEM VINDO ao 21 MASTER" << endl << endl;
    cout << "Vamos começar o jogo !!! Boa sorte !!! " << endl << endl;
    cout << endl << "   Vamos lá !!! você que comecar ou quer que eu comece?" << endl;
    cout << " Escolha 1 para você começar;" << endl;
    cout << " Ou escolha 2 para o Computador começar;" << endl;
    int quemComeca;
    cin >> quemComeca;
    cin.ignore(80,'\n');
    if (quemComeca == 1){
        cout << endl << "Ok! você começa então, boa sorte e bom jogo;" << endl ;
    } else if (quemComeca == 2){
        cout << endl << "Certo! agradeço sua gentileza, boa sorte para você" << endl;
    } else {
        cout << endl << "Como você não escolheu nenhuma das minhas opções eu vou começar então, bom jogo." << endl;
    }
    return quemComeca;
}

void imprimeCarta(int i){
    switch (carta[i].numero)
    {
    case 1:
            cout << " ___________" << endl;
            cout << "|    AS     |" << endl;
            cout << "|           |" << endl;
            cout << "|     11    |" << endl;
            cout << "|    111    |" << endl;
            cout << "|  11111    |" << endl;
            cout << "|    111    |" << endl;
            cout << "|    111    |" << endl;
            cout << "|    111    |" << endl;
            cout << "|  1111111  |" << endl;
            cout << "|  1111111  |" << endl;
            cout << "|  " << carta[i].naipe << "  |" << endl;
            cout << "|___________|" << endl;
        break;
    case 2:
            cout << " ___________" << endl;
            cout << "|   DOIS    |" << endl;
            cout << "|           |" << endl;
            cout << "|    2222   |" << endl;
            cout << "|  22   22  |" << endl;
            cout << "| 22    22  |" << endl;
            cout << "|      22   |" << endl;
            cout << "|     22    |" << endl;
            cout << "|   22      |" << endl;
            cout << "|  2222222  |" << endl;
            cout << "|  2222222  |" << endl;
            cout << "|  " << carta[i].naipe << "  |" << endl;
            cout << "|___________|" << endl;
        break;
    case 3:
            cout << " ___________" << endl;
            cout << "|   TRES    |" << endl;
            cout << "|           |" << endl;
            cout << "|  333333   |" << endl;
            cout << "|        33 |" << endl;
            cout << "|        33 |" << endl;
            cout << "|   33333   |" << endl;
            cout << "|       333 |" << endl;
            cout << "|        33 |" << endl;
            cout << "|       333 |" << endl;
            cout << "|  333333   |" << endl;
            cout << "|  " << carta[i].naipe << "  |" << endl;
            cout << "|___________|" << endl;
        break;
    case 4:
            cout << " ___________" << endl;
            cout << "|  QUATRO   |" << endl;
            cout << "|           |" << endl;
            cout << "| 44     44 |" << endl;
            cout << "| 44     44 |" << endl;
            cout << "| 44     44 |" << endl;
            cout << "| 444444444 |" << endl;
            cout << "|        44 |" << endl;
            cout << "|        44 |" << endl;
            cout << "|        44 |" << endl;
            cout << "|        44 |" << endl;
            cout << "|  " << carta[i].naipe << "  |" << endl;
            cout << "|___________|" << endl;
        break;
    case 5:
        cout << " ___________" << endl;
        cout << "|  CINCO   |" << endl;
        cout << "|           |" << endl;
        cout << "| 555555555 |" << endl;
        cout << "| 55        |" << endl;
        cout << "| 55        |" << endl;
        cout << "| 55555555  |" << endl;
        cout << "|       55  |" << endl;
        cout << "|        55 |" << endl;
        cout << "|       55  |" << endl;
        cout << "| 5555555   |" << endl;
        cout << "|  " << carta[i].naipe << "  |" << endl;
        cout << "|___________|" << endl;
        break;
    case 6:
        cout << " ___________" << endl;
        cout << "|   SEIS    |" << endl;
        cout << "|           |" << endl;
        cout << "|    6666   |" << endl;
        cout << "|   66      |" << endl;
        cout << "| 66        |" << endl;
        cout << "| 66666666  |" << endl;
        cout << "| 66    66  |" << endl;
        cout << "| 66     66 |" << endl;
        cout << "|  66   66  |" << endl;
        cout << "|   66666   |" << endl;
        cout << "|  " << carta[i].naipe << "  |" << endl;
        cout << "|___________|" << endl;
        break;
    case 7:
        cout << " ___________" << endl;
        cout << "|   SETE    |" << endl;
        cout << "|           |" << endl;
        cout << "|  77777777 |" << endl;
        cout << "|       77  |" << endl;
        cout << "|      77   |" << endl;
        cout << "|     77    |" << endl;
        cout << "|    77     |" << endl;
        cout << "|   77      |" << endl;
        cout << "|  77       |" << endl;
        cout << "| 77        |" << endl;
        cout << "|  " << carta[i].naipe << "  |" << endl;
        cout << "|___________|" << endl;
        break;
    case 8:
        cout << " ___________" << endl;
        cout << "|   OITO    |" << endl;
        cout << "|           |" << endl;
        cout << "|  8888888  |" << endl;
        cout << "| 88     88 |" << endl;
        cout << "| 88     88 |" << endl;
        cout << "|  8888888  |" << endl;
        cout << "| 888   888 |" << endl;
        cout << "| 888   888 |" << endl;
        cout << "| 888   888 |" << endl;
        cout << "|  8888888  |" << endl;
        cout << "|  " << carta[i].naipe << "  |" << endl;
        cout << "|___________|" << endl;
        break;
    case 9:
        cout << " ___________" << endl;
        cout << "|   NOVE    |" << endl;
        cout << "|           |" << endl;
        cout << "|  9999999  |" << endl;
        cout << "| 99     99 |" << endl;
        cout << "| 99     99 |" << endl;
        cout << "|  9999999  |" << endl;
        cout << "|        99 |" << endl;
        cout << "|        99 |" << endl;
        cout << "|        99 |" << endl;
        cout << "|  9999999  |" << endl;
        cout << "|  " << carta[i].naipe << "  |" << endl;
        cout << "|___________|" << endl;
        break;
    case 10:
        cout << " ___________" << endl;
        cout << "|    DEZ    |" << endl;
        cout << "|           |" << endl;
        cout << "| 11  0000  |" << endl;
        cout << "| 11 00  00 |" << endl;
        cout << "| 11 00  00 |" << endl;
        cout << "| 11 00  00 |" << endl;
        cout << "| 11 00  00 |" << endl;
        cout << "| 11 00  00 |" << endl;
        cout << "| 11 00  00 |" << endl;
        cout << "| 11  0000  |" << endl;
        cout << "|  " << carta[i].naipe << "  |" << endl;
        cout << "|___________|" << endl;
        break;
    case 11:
        cout << " ___________" << endl;
        cout << "|  VALETE   |" << endl;
        cout << "|           |" << endl;
        cout << "|   JJJJJJJ |" << endl;
        cout << "|       JJ  |" << endl;
        cout << "|       JJ  |" << endl;
        cout << "|       JJ  |" << endl;
        cout << "|       JJ  |" << endl;
        cout << "| JJ    JJ  |" << endl;
        cout << "| JJ    JJ  |" << endl;
        cout << "|  JJJJJJ   |" << endl;
        cout << "|  " << carta[i].naipe << "  |" << endl;
        cout << "|___________|" << endl;
        break;
    case 12:
        cout << " ___________" << endl;
        cout << "|  RAINHA   |" << endl;
        cout << "|           |" << endl;
        cout << "|  QQQQQQ   |" << endl;
        cout << "| QQ    QQ  |" << endl;
        cout << "| QQ    QQ  |" << endl;
        cout << "| QQ    QQ  | " << endl;
        cout << "| QQ  QQQQ  |" << endl;
        cout << "| QQ   QQQ  |" << endl;
        cout << "| QQ    QQQ |" << endl;
        cout << "|  QQQQQQ   |" << endl;
        cout << "|  " << carta[i].naipe << "  |" << endl;
        cout << "|___________|" << endl;
        break;
    case 13:
        cout << " ___________" << endl;
        cout << "|    REI    |" << endl;
        cout << "|           |" << endl;
        cout << "| KK   KK   |" << endl;
        cout << "| KK  KK    |" << endl;
        cout << "| KK KK     |" << endl;
        cout << "| KKKK      |" << endl;
        cout << "| KK KK     |" << endl;
        cout << "| KK  KK    |" << endl;
        cout << "| KK   KK   |" << endl;
        cout << "| KK    KK  |" << endl;
        cout << "|  " << carta[i].naipe << "  |" << endl;
        cout << "|___________|" << endl;
        break;
    default:
        break;
    } 
}

int minhavez(){ // A vez do jogador humano
    int parar = 1; // Variante para decidir se para ou continua
    int somacartas = 0; // Soma os pontos feitos nesse turno;
    cout << endl << "   Tecle enter para pegar sua primeira carta: " << endl;
    getchar();
        cin.ignore(80,'\n');
    do
    {
        int cartasorteada;
        cartasorteada = sorteiacarta();
        somacartas = somacartas + carta[cartasorteada].valor;
        
        // Se marcar 21 pontos;
        if (somacartas == 21){
            cout << "   UAAAUUUUU!!! 21 PONTOS !?!?!?!?!?" << endl;
            cout << "   Você tirou a carta: ";
            nomedacarta(cartasorteada);
            cout << " de " << carta[cartasorteada].naipe << endl;
            imprimeCarta(cartasorteada);
            cout << "     Você foi muito bem!!!" << endl;
            cout << "   Agora é minha vez, vamos ver como eu me saio;" << endl << endl;
            return somacartas;
        } else if (somacartas < 21){ // Decida se para ou continua;
            cout << endl << "   Você tirou a carta: ";
            nomedacarta(cartasorteada);
            cout << " de " << carta[cartasorteada].naipe << endl;
            imprimeCarta(cartasorteada);
            cout << endl << "   Suas cartas somam " << somacartas << " pontos!" << endl;
            cout << "   Você quer parar ou quer tirar mais uma carta?" << endl; 
            cout << " Escolha 0 para Parar ou 1 para continuar: " << endl;
            cin >> parar;
        } else if (somacartas > 21){ //Se Estourar e marcar mais do que 21;
            cout << endl << "   Você tirou a carta: ";
            nomedacarta(cartasorteada);
            cout << " de " << carta[cartasorteada].naipe << endl;
            imprimeCarta(cartasorteada);
            cout << endl << "   kkkkkkkk, você Perdeu;" << endl;
            cout << "   Marcou ZERO pontos, pois estourou as cartas, é minha vez agora." << endl;
            return 0;
        }
        
       
    } while ( parar == 1);
    cout << endl << "   OK!! você pontuou " << somacartas << " nessa rodada;" << endl;
    cout << "   Vamos ver como me saio;" << endl;
    return somacartas;
    
}

void nomedacarta(int i){
    if (carta[i].numero == 1){
        cout << "As";
    } else if (carta[i].numero == 11){
        cout << "Valete";
    } else if (carta[i].numero == 12){
        cout << "Rainha";
    } else if (carta[i].numero == 13){
        cout << "Reis";
    } else {
        cout << carta[i].valor;
    }
}
