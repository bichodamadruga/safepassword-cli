# 🔒 SafePassword CLI - v1.0

Um validador de força de senhas robusto e interativo desenvolvido em **C** para rodar diretamente no terminal (CLI). O programa analisa a composição da senha inserida pelo usuário e classifica sua segurança com base em critérios de mercado.

---

## 🚀 Funcionalidades

- **Menu Interativo Dinâmico**: Renderizado a partir de uma matriz de strings usando laços de repetição.
- **Validação de Segurança**: Analisa o comprimento da senha e a presença de diferentes tipos de caracteres.
- **Dicas de Proteção**: Seção integrada com boas práticas para criação de senhas seguras.
- **Navegação Contínua**: Controle de fluxo que permite ao usuário realizar múltiplos testes sem fechar o programa.

---

## 🧠 Conceitos de C Aplicados

Este projeto foi desenvolvido para consolidar conceitos fundamentais e avançados da linguagem C, incluindo:

* **Estruturas de Repetição**: Uso de `do-while` para manter o programa rodando e laços `for` para percorrer vetores.
* **Estruturas de Controle**: Implementação de `switch-case` para associar as entradas do usuário aos índices da matriz do menu.
* **Matrizes e Vetores (Strings)**: Uso de matriz bidimensional para o menu e vetor de caracteres para armazenar a senha.
* **Manipulação Segura de Entrada**: Utilização do `fgets()` combinado com `strcspn()` para limpar o buffer e evitar *Buffer Overflow*.
* **Bibliotecas Nativas**: 
  - `<string.h>` para por exemplo cálculo de comprimento (`strlen`).
  - `<ctype.h>` para checagem de tipos de caracteres (`isupper`, `islower`, `isdigit`).

---

## 🛠️ Como Rodar o Projeto

Como o código é contido em um único arquivo, você pode rodá-lo facilmente:

1. Baixe o arquivo `main.c` deste repositório.
2. Utilize um compilador local (como o GCC) ou uma ferramenta online como o **OnlineGDB**.
3. Escolha a linguagem **C**, cole o código e execute!

---
---

## 🛠️ Ferramentas Utilizadas
- **Linguagem C** (Compilador GCC / OnlineGDB)
- **Git & GitHub** (Versionamento de código)
- **Gemini AI** (Utilizado como copiloto para refinamento da lógica, correção de bugs e documentação)
  
Desenvolvido por **Felipe** — [@bichodamadruga](https://github.com/bichodamadruga) 🚀
