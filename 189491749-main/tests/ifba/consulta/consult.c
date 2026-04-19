// Para um vetor de tamanho N
int vetor[N];
int i;
for (i = 0; i < N; i++) {
    scanf("%d", &vetor[i]);
}

// Para um vetor de tamanho N
for (i = 0; i < N; i++) {
    printf("Posicao %d: %d\n", i, vetor[i]);
}

// Para um vetor de tamanho N
for (i = 0; i < N; i++) {
    for (j = i + 1; j < N; j++) {
        if (vetor[i] == vetor[j]) {
            printf("Valor repetido: %d\n", vetor[i]);
        }
    }
}

int temp; // Variável temporária OBRIGATÓRIA
temp = vetor[pos1];
vetor[pos1] = vetor[pos2];
vetor[pos2] = temp;

// Para um vetor de tamanho N
int maior = vetor[0]; // Assume que o primeiro é o maior
for (i = 1; i < N; i++) { // Começa do segundo
    if (vetor[i] > maior) {
        maior = vetor[i]; // Achou um maior? Atualiza!
    }
}
printf("O maior valor eh: %d\n", maior);
