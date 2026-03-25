
#include <stdio.h>
#include <stdlib.h>

struct carro {
    char placa[10];
    int ano;
    char modelo[20];
    char cor[15];
};


struct carro garagem[10];

struct Carro garagem[10];

// Função para estacionar um carro na garagem
void Estacionar() {
    int vaga;

    for (vaga = 0; vaga < 10; ++vaga) {
        if (garagem[vaga].ano == 0) {  // Verifica se a vaga está vazia
            printf("Informe a placa do carro: ");
            scanf("%s", garagem[vaga].placa);
            printf("Informe o ano do carro: ");
            scanf("%d", &garagem[vaga].ano);
            printf("Informe o modelo do carro: ");
            scanf("%s", garagem[vaga].modelo);
            printf("Informe a cor do carro: ");
            scanf("%s", garagem[vaga].cor);

            printf("Carro estacionado na vaga %d.\n", vaga + 1);
            return;
        }
    }

    printf("A garagem está cheia. Não há vagas disponíveis.\n");
}

// Função para remover um carro da garagem
void Remover() {
    int vaga;

    printf("Informe a vaga que deseja liberar (1 a 10): ");
    scanf("%d", &vaga);

    if (vaga >= 1 && vaga <= 10) {
        if (garagem[vaga - 1].ano != 0) {
            // Limpa os dados da vaga
            memset(&garagem[vaga - 1], 0, sizeof(struct Carro));
            printf("Carro removido da vaga %d.\n", vaga);
        } else {
            printf("A vaga %d está vazia.\n", vaga);
        }
    } else {
        printf("Vaga inválida. Informe uma vaga de 1 a 10.\n");
    }
}

// Função para listar os carros presentes na garagem
void Listar() {
    printf("Lista de carros na garagem:\n");

    for (int i = 0; i < 10; ++i) {
        if (garagem[i].ano != 0) {
            printf("Vaga %d: %s %s %d %s\n", i + 1, garagem[i].placa, garagem[i].modelo, garagem[i].ano, garagem[i].cor);
        } else {
            printf("Vaga %d: Vazia\n", i + 1);
        }
    }
}

int main() {
    int opcao;

    do {
        // Exibe o menu
        printf("\nMenu:\n");
        printf("1. Estacionar\n");
        printf("2. Remover\n");
        printf("3. Listar\n");
        printf("4. Sair\n");
        printf("Escolha uma opção (1-4): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                Estacionar();
                break;
            case 2:
                Remover();
                break;
            case 3:
                Listar();
                break;
            case 4:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Escolha uma opção de 1 a 4.\n");
        }

    } while (opcao != 4);

    return 0;
}