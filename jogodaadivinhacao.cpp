#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacaoo *" << endl;
    cout << "*************************************" << endl;
    cout << endl;

    int tentativas_restantes = 0;
    int nvl_dificuldade;

    while(tentativas_restantes == 0) {
        cout << "Escolha o nivel de dificuldade que voce quer jogar: " << endl;
        cout << "1- Facil (15 tentativas)" << endl;
        cout << "2- Medio (10 tentativas)" << endl;
        cout << "3- Dificil (5 tentativas)" << endl;
        cout << "R: "; 
        cin >> nvl_dificuldade;

        if (nvl_dificuldade == 1) {
            tentativas_restantes = 15;
        } else if (nvl_dificuldade == 2) {
            tentativas_restantes = 10;
        } else if (nvl_dificuldade == 3) {
            tentativas_restantes = 5;
        } else {
            cout << "Digite uma opcao valida" << endl;
            cout << endl;
        }
    }
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;

    int tentativas = 0;

    bool nao_acertou = true;

    double pontos = 1000.0;

    while (tentativas_restantes > 0 && nao_acertou) {
        cout << "Tentativas restantes: " << tentativas_restantes << endl;
        tentativas_restantes--;
        
        tentativas++;
        int chute;
        
        cout << "Qual seu chute? " << endl;
        cin >> chute;
        cout << "O valor do seu chute e: " << chute << endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
        pontos = pontos - pontos_perdidos;

        if (acertou) {
            nao_acertou = false;
            cout << "Parabens! Voce acertou!" << endl;
        } 
        else if (maior) {
            cout << "Seu chute foi maior do que o numero secreto." << endl;
        }
        else {
            cout << "Seu chute foi menor do que o numro secreto" << endl;
        }
    }

    cout << "FIM DE JOGO!" << endl;
    
    if (!nao_acertou) {
        cout << "Voce acertou o numero secreto com " << tentativas << " tentativa(s)." << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao foi de " << pontos << " pontos." << endl;
    } else {
        cout << "Voce perdeu! Tente novamente." << endl;
    }
    
}