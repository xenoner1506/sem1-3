#include <iostream>

void swap(int& lhv, int& rhv) {
    int tmp = lhv;
    lhv = rhv;
    rhv = tmp;
}

void quicksort(int *arr, int l_idx, int r_idx, int size) {
    int op = arr[(l_idx + r_idx) / 2];
    while (l_idx < r_idx) {
        while (arr[l_idx] < op) ++l_idx;
        while (arr[r_idx] > op) --r_idx;
        if (l_idx < r_idx) swap(arr[l_idx], arr[r_idx]);
    }
    quicksort(arr, 0, l_idx, l_idx + 1);
    quicksort(arr, l_idx + 1, size - 1, size - l_idx - 1);
}

int main() {
    // Velocity of n particles
    double *v_x = new double[1000];
    double *v_y = new double[1000];
    double *v = new double[1000 * 2];
    // v[idx_particle][idx_dimension];
    double **v2d = new double*[1000];
    for (size_t idx = 0; idx < 1000; ++idx) {
        v2d[idx] = new double[2];
    }
    return 0;
}