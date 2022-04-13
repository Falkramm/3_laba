#include <iostream>
#include <stdio.h>
#include "vector.h"
int main() {
    vector<int> arr,arr2;
    int n;
    std::cin >> n;
    arr.resize(n,0);
    std::cin >> arr;

    FILE *t;
    t= fopen("input.dat","ab+");
    arr.fwrite(t);
    arr.fread(t);
    std::cout << arr;
}
