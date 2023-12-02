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



