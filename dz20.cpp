#include <iostream>
#include <vector>

void quickSort(std::vector<int>& vec, int low, int high) {
    if (low < high) {
        int pivot = vec[high]; // Вибір останнього елемента як півота
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (vec[j] < pivot) {
                i++;
                std::swap(vec[i], vec[j]);
            }
        }
        std::swap(vec[i + 1], vec[high]);
        int partitionIndex = i + 1;

        quickSort(vec, low, partitionIndex - 1);
        quickSort(vec, partitionIndex + 1, high);
    }
}

int main() {
    std::vector<int> data = { 8, 7, 6, 1, 0, 9, 2 };
    int n = data.size();
    quickSort(data, 0, n - 1);
    std::cout << "Відсортований масив: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    return 0;
}
