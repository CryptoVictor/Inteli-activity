# Documentação - Pisca LED com Arduino

Este programa controla um LED conectado ao pino **13** do Arduino, fazendo-o piscar em intervalos definidos.

## Declaração das Variáveis

```cpp
int ledPin = 13; // Define qual será o pino que fará o LED ascender

int tempoAceso = 2000; // Define o tempo em ms (milissegundos) que o LED ficará acesso
int tempoApagado = 1000; // Define o tempo em ms (milissegundos) que o LED ficará desligado
```

## Setup

```cpp
void setup() { // É a função executada inicialmente no programa
  pinMode(ledPin, OUTPUT); // O comando pinMode(ledPin, OUTPUT) configura o pino 13 como saída, permitindo enviar sinais elétricos para acender ou apagar o LED.
} 
```

## Loop

```cpp
void loop() { // É a função que será executada em loop após o setup
  digitalWrite(ledPin, HIGH); // digitalWrite(ledPin, HIGH) envia tensão ao pino, acendendo o LED.
  delay(tempoAceso); // delay(tempoAceso) mantém o LED aceso pelo tempo definido (2 segundos).

  digitalWrite(ledPin, LOW);  // digitalWrite(ledPin, LOW) desliga o LED.
  delay(tempoApagado); // delay(tempoApagado) mantém o LED apagado pelo tempo definido (1 segundo).
}
```

## Geral

O código faz o LED piscar continuamente: fica aceso por 2 segundos e apagado por 1 segundo, repetidamente.
