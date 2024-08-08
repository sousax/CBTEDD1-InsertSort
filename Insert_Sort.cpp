#include <iostream>
#include <locale.h>
using namespace std;

const int lenght = 10; // Tamanho do array

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move os elementos do arr[0..i-1], que são maiores que a chave,
        // para uma posição à frente de sua posição atual
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            cout << "Elemento movido: " << arr[j] << " do índice " << j << " para o índice " << j + 1 << endl;
            j--;
        }
        arr[j + 1] = key;
        cout << "Elemento inserido: " << key << " no índice " << j + 1 << endl;
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    // Inicializando o array com os valores fornecidos
    int arr[lenght] = {3, 0, 1, 8, 7, 2, 5, 4, 9, 6};
    
    cout << "Array antes da ordenação: ";
    for (int i = 0; i < lenght; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Ordenando o array
    insertionSort(arr, lenght);
    
    cout << "Array após a ordenação: ";
    for (int i = 0; i < lenght; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
