# 🎯 Jogo da Adivinhação

Jogo de terminal em C++ onde o jogador tenta adivinhar um número secreto entre 0 e 99. Quanto mais perto o chute estiver do número secreto, mais pontos o jogador mantém.

## 📋 Funcionalidades

- Três níveis de dificuldade, com número de tentativas diferente em cada um
- Número secreto gerado aleatoriamente a cada partida
- Dicas após cada chute (maior ou menor que o número secreto)
- Sistema de pontuação baseado na distância entre o chute e o número secreto
- Validação da escolha de dificuldade

## 🎮 Como jogar

1. Ao iniciar, escolha o nível de dificuldade:

   | Opção | Nível   | Tentativas |
   |-------|---------|------------|
   | 1     | Fácil   | 15         |
   | 2     | Médio   | 10         |
   | 3     | Difícil | 5          |

2. Digite um chute a cada rodada.
3. O jogo informa se o chute foi **maior** ou **menor** que o número secreto.
4. A partida termina quando você acerta ou quando as tentativas acabam.

## 🏆 Pontuação

Você começa com **1000 pontos**. A cada chute errado, perde pontos de acordo com a fórmula:

```
pontos_perdidos = |chute - numero_secreto| / 2
```

Ou seja, chutes mais distantes custam mais pontos. A pontuação final é exibida ao acertar o número.

## 🛠️ Requisitos

- Compilador C++ (g++, clang++ ou MSVC)
- Suporte ao padrão C++11 ou superior

## ▶️ Compilação e execução

```bash
# Compilar
g++ jogodaadivinhacao.cpp -o jogodaadivinhacao.exe

# Executar
./jogodaadivinhacao.exe
```

## 💻 Exemplo de execução

```
*************************************
* Bem-vindos ao jogo da adivinhacaoo *
*************************************

Escolha o nivel de dificuldade que voce quer jogar:
1- Facil (15 tentativas)
2- Medio (10 tentativas)
3- Dificil (5 tentativas)
R: 2
Tentativas restantes: 10
Qual seu chute?
50
O valor do seu chute e: 50
Seu chute foi maior do que o numero secreto.
...
FIM DE JOGO!
Voce acertou o numero secreto com 4 tentativa(s).
Sua pontuacao foi de 962.50 pontos.
```