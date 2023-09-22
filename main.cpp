#include <iostream>

int main() {
    int arr[] = {2, 4, 6, 8};

    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] % 2 == 0 && arr[i+1] % 2 == 0) {

            count++;
        }
    }

    std::cout << "Кількість пар сусідніх парних чисел: " << count << std::endl;

    return 0;
}
