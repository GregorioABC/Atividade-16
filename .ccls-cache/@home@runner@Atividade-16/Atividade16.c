// 1
// #include <stdio.h>
// int main() {
//     FILE *arquivo;
//     char caracter;
//     arquivo = fopen("arq.txt", "w");
//     printf("Digite caracteres (0 para parar):\n");
//     while ((caracter = getchar()) != '0') {
//         fputc(caracter, arquivo);
//     }
//     fclose(arquivo);
//     arquivo = fopen("arq.txt", "r");
//     printf("\nConteudo do arquivo:\n");
//     while ((caracter = fgetc(arquivo)) != EOF) {
//         putchar(caracter);
//     }
//     fclose(arquivo);
//     return 0;
// }
// 2
// #include <stdio.h>
// int main() {
//     FILE *arquivo;
//     char linha[100];
//     int totalLinhas = 0;
//     char nomeArquivo[50];
//     printf("Digite o nome do arquivo: ");
//     scanf("%s", nomeArquivo);
//     arquivo = fopen(nomeArquivo, "r");
//     while (fgets(linha, sizeof(linha), arquivo) != NULL) {
//         totalLinhas++;
//     }
//     fclose(arquivo);
//     printf("\nO arquivo possui %d linha(s).\n", totalLinhas);
//     return 0;
// }
// 3
// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     FILE *arquivo;
//     char caractere;
//     int totalVogais = 0;
//     char nomeArquivo[50];
//     printf("Digite o nome do arquivo: ");
//     scanf("%s", nomeArquivo);
//     arquivo = fopen(nomeArquivo, "r");
//     while ((caractere = fgetc(arquivo)) != EOF) {
//         caractere = tolower(caractere); 
//         if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
//             totalVogais++;
//         }
//     }
//     fclose(arquivo);
//     printf("\nO arquivo possui %d vogais.\n", totalVogais);
//     return 0;
// }
// 4
// #include <stdio.h>
// int main() {
//     FILE *arquivo;
//     char nomeArquivo[50];
//     char caractere;
//     int ocorrencias = 0;
//     printf("Digite o nome do arquivo: ");
//     scanf("%s", nomeArquivo);
//     arquivo = fopen(nomeArquivo, "r");
//     printf("Digite o caractere a ser contado: ");
//     scanf(" %c", &caractere);
//     while ((caractere = fgetc(arquivo)) != EOF) {
//         if (caractere == '\n') {
//             continue; 
//         }
//         if (caractere == '0') {
//             break;  
//         }
//         if (caractere == getchar()) {
//             ocorrencias++;
//         }
//     }
//     fclose(arquivo);
//     printf("\nO caractere '%c' ocorre %d vez(es) no arquivo.\n", caractere, ocorrencias);
//     return 0;
// }
// 5
// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     FILE *arquivoEntrada, *arquivoSaida;
//     char nomeArquivoEntrada[50], nomeArquivoSaida[50];
//     char caractere;
//     printf("Digite o nome do arquivo de entrada: ");
//     scanf("%s", nomeArquivoEntrada);
//     printf("Digite o nome do arquivo de saida: ");
//     scanf("%s", nomeArquivoSaida);
//     arquivoEntrada = fopen(nomeArquivoEntrada, "r");
//     arquivoSaida = fopen(nomeArquivoSaida, "w");
//     while ((caractere = fgetc(arquivoEntrada)) != EOF) {
//         fputc(toupper(caractere), arquivoSaida);
//     }
//     fclose(arquivoEntrada);
//     fclose(arquivoSaida);
//     printf("\nConteudo convertido.\n");
//     return 0;
// }
// 6
// #include <stdio.h>
// #include <string.h>
// int main() {
//     FILE *arquivo;
//     char nomeArquivo[50];
//     char palavra[50];
//     char linha[100];
//     int ocorrencias = 0;
//     printf("Digite o nome do arquivo: ");
//     scanf("%s", nomeArquivo);
//     arquivo = fopen(nomeArquivo, "r");
//     printf("Digite a palavra a ser contada: ");
//     scanf("%s", palavra);
//     while (fgets(linha, sizeof(linha), arquivo) != NULL) {
//         if (strstr(linha, palavra) != NULL) {
//             ocorrencias++;
//         }
//     }
//     fclose(arquivo);
//     printf("\nA palavra '%s' ocorre %d vez(es) no arquivo.\n", palavra, ocorrencias);
//     return 0;
// }
// 7
// #include <stdio.h>
// int main() {
//     FILE *arquivo;
//     char nomeArquivo[50];
//     char nome[50], telefone[15];
//     printf("Digite o nome do arquivo: ");
//     scanf("%s", nomeArquivo);
//     arquivo = fopen(nomeArquivo, "w");
//     printf("Entre com nomes e telefones (digite '0' para encerrar):\n");
//     while (1) {
//         printf("Nome: ");
//         scanf("%s", nome);
//         if (nome[0] == '0') {
//             break;
//         }
//         printf("Telefone: ");
//         scanf("%s", telefone);
//         fprintf(arquivo, "%s %s\n", nome, telefone);
//     }
//     fclose(arquivo);
//     printf("\nCadastro salvo com sucesso.\n");
//     return 0;
// }
//8
// #include <stdio.h>
// int main() {
//     FILE *arquivo;
//     char nomeArquivo[50];
//     char nome[50];
//     float preco;
//     float totalCompra = 0;
//     printf("Digite o nome do arquivo: ");
//     scanf("%s", nomeArquivo);
//     arquivo = fopen(nomeArquivo, "r");
//     while (fscanf(arquivo, "%s %f", nome, &preco) != EOF) {
//         totalCompra += preco;
//     }
//     fclose(arquivo);
//     printf("\nO total da compra e: R$ %.2f\n", totalCompra);
//     return 0;
// }
//9
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// struct Contato {
//     char nome[50];
//     char telefone[15];
//     char aniversario[6];
// };
// void inserirContato(struct Contato *agenda) {
//     for (int i = 0; i < 100; i++) {
//         if (strlen(agenda[i].nome) == 0) {
//             printf("Nome: ");
//             scanf("%s", agenda[i].nome);
//             printf("Telefone: ");
//             scanf("%s", agenda[i].telefone);
//             printf("Aniversario (DD/MM): ");
//             scanf("%s", agenda[i].aniversario);
//             printf("Contato inserido com sucesso.\n");
//             return;
//         }
//     }
//     printf("Agenda cheia. Remova contatos para adicionar novos.\n");
// }
// void removerContato(struct Contato *agenda, char *nomeRemover) {
//     for (int i = 0; i < 100; i++) {
//         if (strcmp(agenda[i].nome, nomeRemover) == 0) {
//             memset(&agenda[i], 0, sizeof(struct Contato));
//             printf("Contato removido com sucesso.\n");
//             return;
//         }
//     }
//     printf("Contato nao encontrado.\n");
// }
// void pesquisarContato(struct Contato *agenda, char *nomeBuscar) {
//     for (int i = 0; i < 100; i++) {
//         if (strcmp(agenda[i].nome, nomeBuscar) == 0) {
//             printf("Nome: %s\n", agenda[i].nome);
//             printf("Telefone: %s\n", agenda[i].telefone);
//             printf("Aniversario: %s\n", agenda[i].aniversario);
//             return;
//         }
//     }
//     printf("Contato nao encontrado.\n");
// }
// void listarContatos(struct Contato *agenda) {
//     for (int i = 0; i < 100; i++) {
//         if (strlen(agenda[i].nome) > 0) {
//             printf("Nome: %s\n", agenda[i].nome);
//             printf("Telefone: %s\n", agenda[i].telefone);
//             printf("Aniversario: %s\n", agenda[i].aniversario);
//             printf("\n");
//         }
//     }
// }
// void listarContatosPorLetra(struct Contato *agenda, char letra) {
//     for (int i = 0; i < 100; i++) {
//         if (strlen(agenda[i].nome) > 0 && agenda[i].nome[0] == letra) {
//             printf("Nome: %s\n", agenda[i].nome);
//             printf("Telefone: %s\n", agenda[i].telefone);
//             printf("Aniversario: %s\n", agenda[i].aniversario);
//             printf("\n");
//         }
//     }
// }
// void imprimirAniversariantesDoMes(struct Contato *agenda) {
//     char mesAtual[3];
//     printf("Digite o mes atual (MM): ");
//     scanf("%s", mesAtual);
//     for (int i = 0; i < 100; i++) {
//         if (strlen(agenda[i].nome) > 0 && strncmp(agenda[i].aniversario, mesAtual, 2) == 0) {
//             printf("Nome: %s\n", agenda[i].nome);
//             printf("Telefone: %s\n", agenda[i].telefone);
//             printf("Aniversario: %s\n", agenda[i].aniversario);
//             printf("\n");
//         }
//     }
// }
// int main() {
//     FILE *arquivo;
//     char nomeArquivo[50];
//     struct Contato agenda[100];
//     int opcao;
//     printf("Digite o nome do arquivo: ");
//     scanf("%s", nomeArquivo);
//     arquivo = fopen(nomeArquivo, "rb");
//     if (arquivo != NULL) {
//         fread(agenda, sizeof(struct Contato), 100, arquivo);
//         fclose(arquivo);
//     }
//     do {
//         printf("\nMenu de Opcoes:\n");
//         printf("1. Inserir contato\n");
//         printf("2. Remover contato\n");
//         printf("3. Pesquisar contato por nome\n");
//         printf("4. Listar todos os contatos\n");
//         printf("5. Listar contatos por letra inicial\n");
//         printf("6. Imprimir aniversariantes do mes\n");
//         printf("0. Sair\n");
//         printf("Escolha uma opcao: ");
//         scanf("%d", &opcao);
//         switch (opcao) {
//             case 1:
//                 inserirContato(agenda);
//                 break;
//             case 2:          
//                 char nomeRemover[50];
//                 printf("Digite o nome do contato a ser removido: ");
//                 scanf("%s", nomeRemover);
//                 removerContato(agenda, nomeRemover);
//                 break;
//             case 3:
//                 char nomeBuscar[50];
//                 printf("Digite o nome do contato a ser pesquisado: ");
//                 scanf("%s", nomeBuscar);
//                 pesquisarContato(agenda, nomeBuscar);
//                 break;
//             case 4:
//                 listarContatos(agenda);
//                 break;
//             case 5:
//                 char letraInicial;
//                 printf("Digite a letra inicial: ");
//                 scanf(" %c", &letraInicial);
//                 listarContatosPorLetra(agenda, letraInicial);
//                 break;
//             case 6:
//                 imprimirAniversariantesDoMes(agenda);
//                 break;
//             case 0:
//                 arquivo = fopen(nomeArquivo, "wb");
//                 fwrite(agenda, sizeof(struct Contato), 100, arquivo);
//                 fclose(arquivo);
//                 printf("Contatos salvos. Saindo...\n");
//                 break;
//             default:
//                 printf("Opcao invalida. Tente novamente.\n");
//         }
//     } while (opcao != 0);
//     return 0;
// }




