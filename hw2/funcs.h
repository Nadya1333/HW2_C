#pragma once

#include <iostream>
#include <random>
#include <chrono>
#include <vector>

template<typename T>
void printtArray(T* arr, size_t len);

template<typename T>
void swapp(T& a, T& b);

void test1();

void test2();

void test3();

template<typename T>
int insertionSort(T* arr, int listLength);

void test4();

template<typename T>
int halfSwap(T* arr, size_t n);

void test6();

template<typename T>
int countLocalMins(T* arr, int n);

void test7();

template <typename T>
int sum(int n, T* arr) {
    int sum = 0;
    for (int i = 0; i < n; ++i) sum += arr[i];
    return sum;
}

template <typename T>
void fillArray(int n, T* arr) {

    unsigned seed = time(nullptr);
    srand(seed);
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 200 - 100 + rand() % 10 * 0.1;
    }
}

template <typename T>
void fillArrayTask10(int n, T* arr, int* max) {
    std::cin >> arr[0];
    *max = 0;
    for (int i = 1; i < n; ++i) {
        std::cin >> arr[i];
        if (arr[i] > arr[*max]) *max = i;
    }
}

template <typename T>
void fillArrayKB(int n, T* arr) {
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
}

template <typename T>
void fillMatrix(int n, int m, T** matrix) {
    for (int i = 0; i < n; ++i) {
        matrix[i] = new T[m];
        fillArrayKB(m, matrix[i]);
    }
}

template <typename T>
void printMatrix(int n, int m, T** matrix) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}


template <typename T>
void printArray(int n, T* arr) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

template <typename T>
void swap(T* a, T* b) {
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

template <typename T>
void bubbleSort(int n, T* arr) {
    int c = 0;
    for (int i = 0; i < n; i++) {             //the element is compared with the next
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {                //if the elements are not in the correct order, then they are swapped
                swap(&arr[i], &arr[j]);
                c++;
            }
        }
    }
    std::cout << "Count of swaps = " << c << std::endl;
}

template <typename T>
void lolSort(int n, T* arr) {
    int count = 0;
    for (int i = 0; i != n - count;) {
        if (arr[i] >= 0) {
            for (int j = i + 1; j < n; ++j) {
                swap(&arr[j - 1], &arr[j]);
            }
            count++;
        }
        if (arr[i] < 0) i++;
    }
}

template <typename T>
void lolBubbleSort(int n, T* arr) {
    int c = 0;
    for (int i = 0; i < n; i++) {             //the element is compared with the next
        for (int j = i + 1; j < n; j++) {
            if ((arr[i] > arr[j] && (arr[i] < 0 || arr[j] < 0)) || (arr[i] >= 0 && arr[j] >= 0 && arr[i] < arr[j])) {                //if the elements are not in the correct order, then they are swapped
                swap(&arr[i], &arr[j]);
                c++;
            }
        }
    }
    std::cout << "Count of swaps = " << c << std::endl;
}

template <typename T>
void sumBetweenZeros(int m, const T* arr) {
    int sum = 0;
    for (int i = 0, count = 0; count < 2; ++i) {
        if (arr[i] == 0) count++;
        if (count == 1) sum += arr[i];
    }
    std::cout << "Sum = " << sum << std::endl;
}

template <typename T>
void shiftRight(int n, T* arr) {
    for (int i = n - 1; i > 0; --i) {
        swap(&arr[i], &arr[i - 1]);
    }
}

template <typename T>
void findMinMax(int n, int m, T** matrix) {
    int sumMin, sumMax, indMin = 0, indMax = 0;
    sumMin = sum(m, matrix[0]);
    sumMax = sumMin;
    for (int i = 1; i < n; ++i) {
        int curSum = sum(m, matrix[i]);
        if (curSum > sumMax) {
            sumMax = curSum;
            indMax = i;
        }
        else if (curSum < sumMin) {
            sumMin = curSum;
            indMin = i;
        }
    }
    std::cout << "Minimum sum = " << sumMin << " on row " << indMin << std::endl;
    std::cout << "Maximum sum = " << sumMax << " on row " << indMax << std::endl;
}


