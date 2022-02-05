#include <iostream>

int main() {
    int arr[5][5];
    int a, tempo = 0;


        for (int i = 0; i < 5; i++) {
            for (int l = 0; l < 5; l++) {
                std::cout << "Enter array: ";
                std::cin >> a;
                arr[i][l] = a;
                tempo++;

            }
            std::cout << std::endl;
            i++;

            for (int l = tempo - 1; l >= 0; l--) {
                    std::cout << "Enter array: ";
                    std::cin >> a;
                    arr[i][l] = a;
                    tempo--;
            }
            std::cout << std::endl;
        }



    for (int i = 0; i < 5; i++) {
        for (int l = 0; l < 5; l++) {
            std::cout << arr[i][l] << " ";
        }
        std::cout << std::endl;
    }
}
