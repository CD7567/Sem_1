#pragma once

class Array {
public:
    Array();
    Array(int size, const int* data);

    int GetSize() const;
    int GetCapacity() const;

    int& operator[](int pos);
    const int& operator[](int pos) const;

    void PushBack();
    int Back();
    int Front();

    void Clear();

private:
    void Resize();

    const int mod;
    int size;
    int capacity;
    int* data;
};