# Projeto Arduino de Teclado Musical com Display LCD

![teclado](https://github.com/EduardoDosSantosFerreira/piano-cpp/blob/main/piano.png)

O código implementa um projeto que utiliza um teclado com botões para tocar notas musicais em um buzzer. Além disso, um display LCD é utilizado para mostrar a nota que está sendo tocada.

## Componentes Utilizados

- 8 botões para as notas musicais (C, D, E, F, G, A, B, C')
- 1 Buzzer
- 1 Display LCD

## Funcionamento do Código

1. **Configuração Inicial**

   - O código define os pinos para os botões das notas musicais, o pino do buzzer e configura o display LCD.
   - Inicializa a comunicação serial para depuração.

2. **Leitura dos Botões**

   - O código verifica se um determinado botão foi pressionado.
   - Quando um botão é pressionado, a nota correspondente é tocada no buzzer e exibida no display LCD por um breve período.

3. **Tocar Notas Musicais**

   - Cada botão está associado a uma nota musical específica, e quando pressionado, o buzzer emite o som correspondente.
   - Ao mesmo tempo, o display LCD mostra a nota que está sendo tocada.

4. **Ajuste de Tempo**

   - Um pequeno atraso é adicionado após tocar a nota e limpar o display para melhorar a experiência do usuário.

## Considerações Finais

Esse projeto demonstra como criar um teclado musical simples utilizando botões, um buzzer e um display LCD. A aplicação prática inclui a construção de pequenos instrumentos musicais eletrônicos e dispositivos interativos para ensino de música.
