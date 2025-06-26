
# 🏋️‍♂️ Space Gym - Projeto em C

Este repositório contém o projeto final da disciplina de Programação em C, desenvolvido como parte da formação no curso de Análise e Desenvolvimento de Sistemas.

## 🖥️ Sobre o projeto

**Space Gym** é um sistema de academia feito em linguagem C, com funcionalidades completas de cadastro de alunos e professores, cálculo de IMC, escolha de planos e geração de arquivos `.csv` com os dados salvos.

O projeto é executado inteiramente em terminal/console e simula um sistema interativo para uma academia.

## 🔧 Tecnologias utilizadas

- Linguagem C
- Bibliotecas padrões: `stdio.h`, `stdlib.h`, `string.h`, `unistd.h`
- Sistema de arquivos `.csv` para exportação de dados

## 📌 Funcionalidades

- Tela de boas-vindas com logotipo ASCII
- Cadastro de alunos com dados pessoais e endereço
- Cálculo de IMC e plano de treino conforme o resultado
- Cadastro de professores com qualificação e experiência
- Escolha de planos (Convencional, Black e Space)
- Alteração de planos cadastrados
- Geração de arquivo `Dados.csv` com os dados dos alunos
- Leitura e exibição dos cadastros anteriores
- Interface amigável via terminal

## 📂 Estrutura

O sistema é dividido em funções que cuidam de cada parte do processo:
- `imccad()`: calcula o IMC e imprime um plano de treino
- `salvararquivo()`: exporta os dados dos cadastros para `.csv`
- `lercsv()`: importa dados salvos de execuções anteriores
- `imprimir()`: exibe os cadastros realizados

## 🚀 Como executar

1. Compile o código:
   ```bash
   gcc -o spacegym main.c
   ```

2. Execute o programa:
   ```bash
   ./spacegym
   ```

> O projeto foi feito para rodar em ambientes Windows (usa `system("cls")`) mas pode ser adaptado para Linux substituindo por `system("clear")`.

## 🙋 Autor

Desenvolvido por **Robson Kauã Rodrigues Magalhães e Matheus Damascena**  
Projeto apresentado como trabalho final de Programação em C – 2023

---

📌 _Projeto acadêmico. O sistema é fictício e foi criado apenas para fins de aprendizagem._
