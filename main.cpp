#include <iostream>
#include <stdio.h>
#include <fstream>
#include "vector.h"
#include "Elements.h"
#include "DopFuncktions.h"

int main() {

    vector<Element1> arr1;
    vector<Element2> arr2;
    vector<Element3> arr3;
    int n, m;
    std::cout << "Enter length of array1.\n";
    std::cin >> n;
    arr1.resize(n);
    std::cout << "Enter first array in format name kurs otdelenie.\n";
    std::cin >> arr1;
    std::cout << "Enter length of array2.\n";
    std::cin >> m;
    arr2.resize(m);
    std::cout << "Enter second array in format name kurs otdelenie.\n";
    std::cin >> arr2;
    merge_1_and_2_to_3(arr1, arr2, arr3);
    std::cout << "Your students.\n";
    std::cout << arr1 << arr2 << arr3;
    int otdelenie;
    std::cout << "Enter otdelenie.\n";
    std::cin >> otdelenie;
    vector<Element2> simple_otdelenie;
    find_equal_otdelenie(arr2, otdelenie, simple_otdelenie);
    std::cout << "Students in array2 with that itdelenie.\n";
    std::cout << simple_otdelenie;

    sort(arr1);
    std::cout << "Sorted array1.\n";
    std::cout << arr1;

}
