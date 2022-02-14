#include <Array.h>

// mod in Initializer List -> TOREAD
// Same can be done with all types of fields
Array::Array() : mod(7) {
    size = 0;
    capacity = 1;
    data = nullptr;
}

Array::Array(int size, const int *data) {
    this->size = size;
    // Copy data
}

int& Array::operator[](int pos) {
    return data[pos];
}

const int& Array::operator[](int pos) const {
    return data[pos];
}

int Array::GetSize() const {
    return size;
}

int Array::GetCapacity() const {
    return capacity;
}

int Array::Front() const {
    return data[0];
}

int Array::Back() const {
    return data[size - 1];
}

void Array::PushBack(int number) {
    if (size == capacity) {
        Resize();
    }

    data[size++] = number;
}

void Array::Resize() {
    capacity *= 2;
    int* new_data = new int[capacity];

    for (int i = 0; i < size; ++i) {
        new_data[i] = data[i];
    }

    delete[] data;
    data = new_data;
}

void Array::Clear() {
    delete[] data;

    size = 0;
    capacity = 0;
}