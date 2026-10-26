#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

int main () {
    char jogar_novamente = 's';
    while (jogar_novamente == 's') {
        srand(time(NULL));
        const int NUMERO_SECRETO = rand() % 100;

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
            if  (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Digite uma opcao valida" << endl;
                cout << endl;
                continue;
            }

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
            if  (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Digite uma opcao valida" << endl;
                cout << endl;
                tentativas--;
                tentativas_restantes++;
                continue;
            }
            cout << "O valor do seu chute e: " << chute << endl;

            bool acertou = chute == NUMERO_SECRETO;
            bool maior = chute > NUMERO_SECRETO;

            double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
            pontos = pontos - pontos_perdidos;

            if (acertou) {
                nao_acertou = false;
                cout << "Parabens! Voce acertou!" << endl;
                cout << endl;
            } 
            else if (maior) {
                cout << "Seu chute foi maior do que o numero secreto." << endl;
                cout << endl;
            }
            else {
                cout << "Seu chute foi menor do que o numro secreto" << endl;
                cout << endl;
            }
        }
        
        if (!nao_acertou) {
            cout << "Voce acertou o numero secreto com " << tentativas << " tentativa(s)." << endl;
            cout.precision(2);
            cout << fixed;
            cout << "Sua pontuacao foi de " << pontos << " pontos." << endl;
        } else {
            cout << "Voce perdeu! Tente novamente." << endl;
        }

        cout << "Deseja jogar novamente? " << endl;
        cout << "Digite 's' para sim" << endl;
        cout << "Digite 'n' para nao" << endl;
        cin >> jogar_novamente;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
     cout << "FIM DE JOGO!" << endl;
}