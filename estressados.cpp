#include <iostream>
#include <vector>
#include <algorithm>

bool existe (std::vector<int> vet, int valor) {
    for (int i = 0; i < vet.size(); i++) {
        if(vet[i] == valor)
             return true;
        return false;
    }
}

int procurar_valor (std::vector<int> vet, int valor) {
    for (int i = 0; i < vet.size(); i++) {
        if(vet[i] == valor)
             return i;
        return -1;
    }
}

int contar (std::vector<int> vet, int valor) {
    for (int i = 0; i < vet.size(); i++) {
        if(vet[i] == valor)
             return i;
        return 0;
    }
}

int procurar_valor_apartir (std::vector<int> vet, int valor, int inicio){
    inicio = 0;
    for (int i = 0; i < vet.size(); i++){
        if(vet[i] == valor)
             return i;
        return -1;
    }
}

int procurar_menor (std::vector<int>vet) {
    menor = vet[0];
    for (int i = 1; i < vet.size(); i++){
        if (vet[i] < menor){
            menor = vet[i];
        }
    }
    return menor;
}

int procurar_pos_menor (std::vector<int>vet) {
    menor = vet[0];
    pos_menor = 0;
    for (int i = 1; i < vet.size(); i++){
        if (vet[i] < menor) {
            menor = vet[i];
            pos_menor = i;
        }
    }
    return menor;
}

int procurar_menor_pos_apartir (std::vector<int>vet, int inicio) {
    inicio = 1;
    menor = vet[0];
    pos_menor = 0;
    for (int i = inicio; i < vet.size(); i++){
        if (vet[i] < menor) {
            menor = vet[i];
            pos_menor = i;
        }
    }
    return menor;
}

int procurar_menor_se (std::int vet[]) {
    int menor = vet[0];
    for (int i = 1; i<vet.size(); i++){
        if (vet[i] < menor && vet[i] > 0) {
            menor = vet[i];
        }
    }
    return menor;
}

float calcular_strees_medio (std::vector<int>vetor){
    int vetor[6];
    int soma = 0;
    float media = 0;
    for (int i = 0; i<6; i++){
        soma = soma + vetor[i;]
    }
    media = soma/6.0;

    return media;
}

string mais_homens_ou_mulheres (std :: vector<int>vetor) {
    int homens >= 0;
    int mulheres <= 0;
    for (int i = 0; i < vet.size(); i++){
        if (i >= 0){
            homens ++;
        }
        if (i <= 0){
            mulheres ++;
        }
    }
    if (homens > mulheres)
    return homens;
    if (mulheres > homens)
    return mulheres;
    if (homens = mulheres)
    return empate;
}

int main() {
    std :: cout << existe ({1, 2, 3, 4, 5}, 5) << '\n';
    std :: cout << existe ({1, 2, 3, 4, 5}, 0) << '\n';
}