//
// Created by user on 14/04/2022.
//

#ifndef INC_3_LABA_DOPFUNCKTIONS_H
#define INC_3_LABA_DOPFUNCKTIONS_H

#include "vector.h"
#include "Elements.h"

void sort(vector<Element1> &arr) {
    for (int i = 0; i < arr.getSize() - 1; ++i)
        for (int j = 0; j < arr.getSize() - 1; ++j)
            if (arr[j].getKurs() > arr[j + 1].getKurs()) {
                Element1 copy = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = copy;
            }
}

void find_equal_otdelenie(vector<Element2> &arr, int otdelenie_, vector<Element2> &answer) {
    int num = 0;
    for (int i = 0; i < arr.getSize(); ++i)
        if (arr[i].getOtedelenie() == otdelenie_)
            num++;
    answer.resize(num);
    num = 0;

    for (int i = 0; i < arr.getSize(); ++i)
        if (arr[i].getOtedelenie() == otdelenie_) {
            answer[num] = arr[i];
            num++;
        }
}

void merge_1_and_2_to_3(vector<Element1> &arr1, vector<Element2> &arr2, vector<Element3> &arr3) {
    arr3.resize(arr1.getSize() + arr2.getSize());
    for (size_t i = 0; i < arr1.getSize(); ++i)
        arr3[i] = Element3(arr1[i]);
    for (size_t i = 0; i < arr2.getSize(); ++i)
        arr3[arr1.getSize() + i] = Element3(arr2[i]);
}

#endif //INC_3_LABA_DOPFUNCKTIONS_H
