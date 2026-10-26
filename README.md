# 🎯 Jogo da Adivinhação

Jogo de terminal em C++ onde o jogador tenta adivinhar um número secreto entre 0 e 99. Quanto menos tentativas o jogador usar para acertar, mais pontos ele ganha.

## 📋 Funcionalidades

- Três níveis de dificuldade, com número de tentativas diferente em cada um
- Número secreto gerado aleatoriamente a cada partida
- Dicas após cada chute (maior ou menor que o número secreto)
- Sistema de pontuação baseado no número de tentativas usadas
- Validação de entrada: letras ou símbolos no menu e no chute não quebram o jogo nem gastam tentativa
- Opção de jogar novamente (aceita `s`/`S` e `n`/`N`) sem reiniciar o programa

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
5. Ao final, responda `s` para jogar novamente ou `n` para sair.

## 🏆 Pontuação

A pontuação depende apenas de quantas tentativas você usou até acertar:

```
pontos = 1000 * (max_tentativas - tentativas_usadas + 1) / max_tentativas
```

Acertar de primeira vale **1000 pontos**, e o valor cai de forma linear a cada tentativa gasta. A pontuação nunca fica negativa e não depende da sorte do número secreto. Ela é exibida ao acertar.

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
Voce acertou o numero secreto com 4 tentativa(s).
Sua pontuacao foi de 700.00 pontos.
Deseja jogar novamente? (s/n): n
FIM DE JOGO!
```