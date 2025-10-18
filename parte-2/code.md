# Documentação - Blink (LED Embutido do Arduino)

Este programa faz o LED embutido do Arduino piscar em intervalos definidos de 1 segundo aceso e 1 segundo apagado.  
O LED embutido geralmente está conectado ao **pino 13** ou ao **pino 6**.  
A constante **LED_BUILTIN** garante compatibilidade entre placas.

## Setup

```cpp
void setup() { // A função setup() é executada apenas uma vez ao iniciar ou resetar a placa
  pinMode(LED_BUILTIN, OUTPUT); // Configura o pino do LED embutido como saída
}
```

## Loop

```cpp
void loop() { // A função loop() é executada repetidamente após o setup
  digitalWrite(LED_BUILTIN, HIGH); // Liga o LED embutido
  delay(1000); // Mantém o LED ligado por 1 segundo

  digitalWrite(LED_BUILTIN, LOW); // Desliga o LED embutido
  delay(1000); // Mantém o LED desligado por 1 segundo
}
```

## Geral

O código faz o LED embutido do Arduino piscar continuamente:

1 segundo aceso ->
1 segundo apagado

Repetindo esse ciclo indefinidamente.
