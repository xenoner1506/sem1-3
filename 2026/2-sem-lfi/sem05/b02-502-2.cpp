#include <iostream>

struct Velocity {
    double v_x = 1.0;
    double v_y = 1.0;
};

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
    delete[] v_x;
    delete[] v_y;
    for (size_t idx = 0; idx < 1000; ++idx) {
        delete[] v2d[idx];
    }
    delete[] v2d;
    delete[] v;
    Velocity velocity;
    velocity.v_x = 1.23456;
    velocity.v_y = 1.23456;
    Velocity *arr = new Velocity[1000];
    arr[10].v_x;
    arr[10].v_y;
    delete[] arr;
    Velocity *dp_velocity = new Velocity;
    dp_velocity->v_x;
    (*dp_velocity).v_x;
    delete dp_velocity;
    return 0;
}