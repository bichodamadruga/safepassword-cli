#include <stdio.h>  // Para leitura e escrita (printf, scanf, fgets)
#include <string.h> // Manipulação de strings (strlen, strcspn)
#include <ctype.h>  // Funções de teste de caracteres (isupper, islower, isdigit)

int main() {
    int opcao;

    // ADAPTAÇÃO: Incluímos explicitamente "Opção X" dentro do próprio array de strings
    // para que fique 100% claro para o usuário o que digitar no terminal.
    char menu[3][60] = {
        "Opção [0] - Sair do Programa",
        "Opção [1] - Testar Força de uma Senha",
        "Opção [2] - Dicas para uma Senha Segura"
    };

    // O laço do-while garante que o usuário consiga testar as opções e voltar ao menu
    do {
        printf("\n====================================\n");
        printf("    SAFE_PASSWORD CLI - v1.0        \n");
        printf("====================================\n");
        
        // O laço FOR percorre o array mostrando as opções funcionais
        // Ele vai ler a string completa que já contém a indicação do número correto.
        for (int i = 0; i < 3; i++) {
            printf("%s\n", menu[i]);
        }
        
        printf("\nEscolha uma das opções (0, 1 ou 2): ");
        scanf("%d", &opcao);
        getchar(); // Limpa o '\n' (Enter) do buffer após a leitura do número

        // O SWITCH avalia o número digitado e executa a lógica correspondente
        switch (opcao) {
            
            case 1: // Associa diretamente com menu[1] ("Opção [1]...")
                {
                    char senha[100]; 
                    int tem_maiuscula = 0; 
                    int tem_minuscula = 0; 
                    int tem_numero = 0;    
                    int tamanho = 0;

                    printf("\nDigite a senha que deseja testar: ");
                    /* fgets seguro: lê o que foi digitado e evita que o programa quebre.
                        - senha: onde o texto será guardado.
                        - sizeof(senha): garante que o usuário não digite mais do que o vetor aguenta.
                        - stdin: indica que a leitura vem da entrada padrão (teclado).
                    */
                    fgets(senha, sizeof(senha), stdin);
                    
                    // Remove o caractere de quebra de linha ('\n') inserido pelo fgets
                    senha[strcspn(senha, "\n")] = '\0'; 

                    // Calcula o tamanho da string sem contar o caractere de terminação '\0'
                    tamanho = strlen(senha); 

                    // Varre a string para avaliar a presença de tipos de caracteres
                    for (int i = 0; i < tamanho; i++) {
                        if (isupper(senha[i])) tem_maiuscula = 1; // Verifica se é maiúsculo
                        if (islower(senha[i])) tem_minuscula = 1; // Verifica se é minúsculo
                        if (isdigit(senha[i])) tem_numero = 1;    // Verifica se é dígito numérico
                    }

                    printf("\n--- ANÁLISE DE SEGURANÇA ---\n");
                    printf("Tamanho: %d caracteres\n", tamanho);

                    if (tamanho < 8) {
                        printf("Resultado: ERR0R! Senha muito curta. Mínimo de 8 caracteres.\n");
                    } else if (tem_maiuscula && tem_minuscula && tem_numero) {
                        printf("Resultado: FORTE! Essa aguenta o tranco.\n");
                    } else if ((tem_minuscula || tem_maiuscula) && tem_numero) {
                        printf("Resultado: MÉDIA. Adicione letras maiúsculas/minúsculas para melhorar.\n");
                    } else {
                        printf("Resultado: FRACA. Misture números e letras.\n");
                    }
                }
                break; 

            case 2: // Associa diretamente com menu[2] ("Opção [2]...")
                printf("\n--- DICAS DE OURO ---\n");
                printf("1. Nunca use sequências óbvias como '123456' ou 'abcdef'.\n");
                printf("2. Use frases longas com substituições (ex: 'M3uG4t000!').\n");
                printf("3. Não use dados pessoais como seu nome ou data de nascimento.\n");
                break;

            case 0: // Associa diretamente com menu[0] ("Opção [0]...")
                break;

            default: 
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0); 

    printf("\nPrograma encerrado. Proteja suas senhas!\n");
    return 0;
}