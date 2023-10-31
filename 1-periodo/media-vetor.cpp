#include <iostream>
#include <vector>

using namespace std;

double calcularMedia(const vector<int>& vetor) {
    int soma = 0;
    for (int valor : vetor) {
        soma += valor;
    }
    double media = static_cast<double>(soma) / vetor.size();
    return media;
}

int main() {
    // Exemplo de uso
    vector<int> numeros = {5, 10, 15, 20, 25};
    double media = calcularMedia(numeros);
    cout << "A media dos valores no vetor eh: " << media << endl;

    return 0;
}
