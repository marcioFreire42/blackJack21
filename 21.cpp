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

struct baralho
{
    int valor;
    string naipe;
};

struct baralho carta[52],

int main (){

    setlocale(LC_ALL, "Portuguese");
   
    criabaralho();

    //imprimecartas();

    int comeca;
    comeca = quemcomeca();

    minhavez();

    sorteiacarta();

    return 0;
}

void criabaralho(){
    // Gerando as cartas do naipe de espadas;
    for (int i = 0; i < 13; i++){
        carta[i].valor = i + 1;
        carta[i].naipe = ("espadas");
    }

    //Gerando as cartas do naipe de copas;
    for (int i = 0; i < 13; i++){
        carta[i + 13].valor = i + 1;
        carta[i + 13].naipe = ("copas");
    }

    // Gerando as cartas do naipe de ouro;
    for (int i = 0; i < 13; i++){
        carta[i + 26].valor = i + 1;
        carta[i + 26].naipe = ("ouro");
    }

    // Gerando as cartas do naipe de paus;
    for (int i = 0; i < 13; i++){
        carta[i + 39].valor = i + 1;
        carta[i + 39].naipe = ("paus");
    }
}

void imprimecartas(){
    for (int i= 0; i < 52; i++){
        cout << "carta " << i << " é o: " << carta[i].valor << " de " << carta[i].naipe << endl;
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
            cout << "   UAAAUUUUU!!! 21 PONTOS !?!?!?!?!?" << endl << "     Você foi muito bem!!!" << endl;
            cout << "   Agora é minha vez, vamos ver como eu me saio;" << endl << endl;
            return somacartas;
        } else if (somacartas < 21){ // Decida se para ou continua;
        cout << endl << "   Você tirou a carta: " << carta[cartasorteada].valor << " de " << carta[cartasorteada].naipe;
        cout << endl << "   Suas cartas somam " << somacartas << " pontos!" << endl;
        cout << "   Você quer parar ou quer tirar mais uma carta?" << endl; 
        cout << " Escolha 0 para Parar ou 1 para continuar: " << endl;
        cin >> parar;
        } else if (somacartas > 21){ //Se Estourar e marcar mais do que 21;
            cout << endl << "   Você tirou a carta: " << carta[cartasorteada].valor << " de " << carta[cartasorteada].naipe;
            cout << endl << "   kkkkkkkk, você foi com muita sede ao pote meu caro;" << endl;
            cout << "   Marcou ZERO pontos, pois estourou as cartas, é minha vez agora." << endl;
            return 0;
        }
        
       
    } while ( parar == 1);
    cout << endl << "   OK!! você pontuou " << somacartas << " nessa rodada;" << endl;
    cout << "   Vamos ver como me saio;" << endl;
    return somacartas;
    
}