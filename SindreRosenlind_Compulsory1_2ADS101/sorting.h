#pragma once
#include <iostream>
#include <chrono>
#include <array>
#include<algorithm>

void sortTid1() {
    //declare array
    std::array<int, 10> a;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 1;
    }
    //start clock
    chrono::nanoseconds total_tid{ 0 };
    auto start = std::chrono::high_resolution_clock::now();
    //sorting array
    auto n = a.size();
    for (auto i = 0; i < n - 1; i++) {
        for (auto j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                std::swap(a[i], a[j]);
            }
        }
    }
    //stop clock and print result
    auto slutt = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> varighet = slutt - start;
    std::chrono::nanoseconds varighet_nano = std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
    total_tid += varighet_nano;
    std::cout << "varighet (n = 10) selection sort: " << total_tid.count() << std::endl;
}

void sortTid2() {
    //declare array
    std::array<int, 100> a;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 1;
    }
    //start clock
    chrono::nanoseconds total_tid{ 0 };
    auto start = std::chrono::high_resolution_clock::now();
    //sorting array
    auto n = a.size();
    for (auto i = 0; i < n - 1; i++) {
        for (auto j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                std::swap(a[i], a[j]);
            }
        }
    }
    //stop clock and print result
    auto slutt = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> varighet = slutt - start;
    std::chrono::nanoseconds varighet_nano = std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
    total_tid += varighet_nano;
    std::cout << "varighet (n = 100) selection sort: " << total_tid.count() << std::endl;
}
void sortTid3() {
    //declare array
    std::array<int, 1000> a;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 1;
    }
    //start clock
    chrono::nanoseconds total_tid{ 0 };
    auto start = std::chrono::high_resolution_clock::now();
    //sorting array
    auto n = a.size();
    for (auto i = 0; i < n - 1; i++) {
        for (auto j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                std::swap(a[i], a[j]);
            }
        }
    }
    //stop clock and print result
    auto slutt = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> varighet = slutt - start;
    std::chrono::nanoseconds varighet_nano = std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
    total_tid += varighet_nano;
    std::cout << "varighet (n = 1000) selection sort: " << total_tid.count() << std::endl;
}
void sortTid4() {
    //declare array
    std::array<int, 10000> a;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 1;
    }
    //start clock
    chrono::nanoseconds total_tid{ 0 };
    auto start = std::chrono::high_resolution_clock::now();
    //sorting array
    auto n = a.size();
    for (auto i = 0; i < n - 1; i++) {
        for (auto j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                std::swap(a[i], a[j]);
            }
        }
    }
    //stop clock and print result
    auto slutt = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> varighet = slutt - start;
    std::chrono::nanoseconds varighet_nano = std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
    total_tid += varighet_nano;
    std::cout << "varighet (n = 10000) selection sort: " << total_tid.count() << std::endl;
}
void sortTid5() {
    //declare array
    std::array<int, 100000> a;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 1;
    }
    //start clock
    chrono::nanoseconds total_tid{ 0 };
    auto start = std::chrono::high_resolution_clock::now();
    //sorting array
    auto n = a.size();
    for (auto i = 0; i < n - 1; i++) {
        for (auto j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                std::swap(a[i], a[j]);
            }
        }
    }
    //stop clock and print result
    auto slutt = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> varighet = slutt - start;
    std::chrono::nanoseconds varighet_nano = std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
    total_tid += varighet_nano;
    std::cout << "varighet (n = 100000) selection sort: " << total_tid.count() << std::endl;
}

void sortTid6() {
    //declare array
    std::array<int, 10> a;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 1;
    }
    //start clock
    chrono::nanoseconds total_tid{ 0 };
    auto start = std::chrono::high_resolution_clock::now();
    //sorting array with std::sort
    std::sort(a.begin(), a.end());
    //stop clock and print result
    auto slutt = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> varighet = slutt - start;
    std::chrono::nanoseconds varighet_nano = std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
    total_tid += varighet_nano;
    std::cout << "varighet (n = 10) std::sort: " << total_tid.count() << std::endl;
}
void sortTid7() {
    //declare array
    std::array<int, 100> a;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 1;
    }
    //start clock
    chrono::nanoseconds total_tid{ 0 };
    auto start = std::chrono::high_resolution_clock::now();
    //sorting array with std::sort
    std::sort(a.begin(), a.end());
    //stop clock and print result
    auto slutt = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> varighet = slutt - start;
    std::chrono::nanoseconds varighet_nano = std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
    total_tid += varighet_nano;
    std::cout << "varighet (n = 100) std::sort: " << total_tid.count() << std::endl;
}
void sortTid8() {
    //declare array
    std::array<int, 1000> a;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 1;
    }
    //start clock
    chrono::nanoseconds total_tid{ 0 };
    auto start = std::chrono::high_resolution_clock::now();
    //sorting array with std::sort
    std::sort(a.begin(), a.end());
    //stop clock and print result
    auto slutt = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> varighet = slutt - start;
    std::chrono::nanoseconds varighet_nano = std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
    total_tid += varighet_nano;
    std::cout << "varighet (n = 1000) std::sort: " << total_tid.count() << std::endl;
}
void sortTid9() {
    //declare array
    std::array<int, 10000> a;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 1;
    }
    //start clock
    chrono::nanoseconds total_tid{ 0 };
    auto start = std::chrono::high_resolution_clock::now();
    //sorting array with std::sort
    std::sort(a.begin(), a.end());
    //stop clock and print result
    auto slutt = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> varighet = slutt - start;
    std::chrono::nanoseconds varighet_nano = std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
    total_tid += varighet_nano;
    std::cout << "varighet (n = 10000) std::sort: " << total_tid.count() << std::endl;
}
void sortTid10() {
    //declare array
    std::array<int, 100000> a;
    for (int i = 0; i < a.size(); i++) {
        a[i] = 1;
    }
    //start clock
    chrono::nanoseconds total_tid{ 0 };
    auto start = std::chrono::high_resolution_clock::now();
    //sorting array with std::sort
    std::sort(a.begin(), a.end());
    //stop clock and print result
    auto slutt = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> varighet = slutt - start;
    std::chrono::nanoseconds varighet_nano = std::chrono::duration_cast<std::chrono::nanoseconds>(varighet);
    total_tid += varighet_nano;
    std::cout << "varighet (n = 100000) std::sort: " << total_tid.count() << std::endl;
}