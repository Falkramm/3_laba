//
// Created by user on 13/04/2022.
//

#include <ostream>

#ifndef INC_3_LABA_VECTOR_H
#define INC_3_LABA_VECTOR_H
#include <stdio.h>
template<typename main_type>
class vector {
private:
    main_type *arr;
    int size;
    int capacity;

    void allocator() {
        capacity *= 2;
        main_type *new_arr = new main_type[capacity];
        for (size_t i = 0; i < size; ++i)
            new_arr[i] = arr[i];
        delete[]arr;
        arr = new_arr;
    };
public:
    virtual ~vector() {
        delete[]arr;
    }

    vector() {
        size = 0;
        capacity = 1;
        arr = new main_type[1];
    }

    vector(int size, main_type value = main_type()) : size(size) {
        capacity = 1;
        while (capacity < size)
            capacity <<= 1;
        arr = new main_type[capacity];
        for (size_t i = 0; i < size; ++i)
            arr[i] = value;
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return capacity;
    }

    main_type &operator[](int i) {
        return arr[i];
    }

    void operator=( vector &vector_)  {
        resize(vector_.size);
        for(size_t i=0;i<vector_.size;++i)
            arr[i]=vector_[i];
    }


    void resize(int size_, main_type value = main_type()) {
        while (capacity < size_)
            allocator();
        size = size_;
        for (size_t i = 0; i < size; ++i)
            arr[i] = value;
    }

    void reserve(int capacity_) {
        while (capacity < capacity_)
            allocator();
    }

    friend std::ostream &operator<<(std::ostream &os, vector &vector_) {
        os << "size: " << vector_.size << "\n";
        os << "capacity: " << vector_.capacity << "\n";
        os << "arr: ";
        for (size_t i = 0; i < vector_.size; ++i)
            os << vector_[i] << ' ';
        os << "\n";
        return os;
    }
    size_t fread(FILE * filestream){
        return std::fread(arr,sizeof(main_type),size,filestream);
    }
    size_t fwrite(FILE * filestream){
        return std::fwrite(arr,sizeof(main_type),size,filestream);
    }
    friend std::istream &operator>>(std::istream &is, vector &vector_) {
        for(size_t i=0;i<vector_.size;++i)
            is >> vector_[i];
        return is;
    }
};


#endif //3_LABA_VECTOR_H
