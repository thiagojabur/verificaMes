#include <iostream>
#include <ctime>
int main() {
    int mes, mesAtual;
    struct tm *horarioLocal;
    char *nome_mes[] = {"janeiro", "fevereiro", "março", "abril", "maio",
                        "junho", "julho", "agosto", "setembro", "outubro",  "novembro", "dezembro"
                       };
    printf("Digite o numero do mes: ");
    scanf("%i", &mes);
    time_t timer;
    time(&timer);
    horarioLocal = localtime(&timer);
    mesAtual = horarioLocal->tm_mon+1;
    printf("Nome do mes atual: %s \n", nome_mes[mesAtual-1]);
    if (mes<1 || mes>12)  // Testa se o mes e' valido
        printf("Erro!\nMes invalido! %i", mes);
    else
        printf("Nome do mes digitado: %s \n", nome_mes[mes-1]);
}
