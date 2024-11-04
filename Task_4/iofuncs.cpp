#include <iostream>
#include "../Task_4/objects.h"

void printTask() {
    std::cout << "������� 4. ����������, ����������� �� ����� ��������� ���������� ��������� ������� ������� ��������\n";
    std::cout << "���� ����������� ����� ��������, �� ���������� �� ������� � ����� ����������.\n";
    std::cout << "����������� �������� ����� ������� � �������� ������� � ������� �� �����.\n";
    std::cout << "�������� ������� ����� ������������, ������ 453502\n\n";
}

int readIntegerInLine() {
    int inputValue;
    if (!(std::cin >> inputValue) || (std::cin.peek() != '\n')) {
        std::cin.clear();
        while (std::cin.get() != '\n') {
        }
        return -INF;
    }
    return inputValue;
};

double readRealInLine() {
    double inputValue;
    if (!(std::cin >> inputValue) || (std::cin.peek() != '\n')) {
        std::cin.clear();
        while (std::cin.get() != '\n') {
        }
        return -INF;
    }
    return inputValue;
};

int getMatrixRows() {
    int n;
    std::cout << "������� ���������� ����� �������:\n";
    while (true) {
        n = readIntegerInLine();
        if (n <= 1) {
            std::cout << "������������ ����\n";
            continue;
        }
        break;
    }
    return n;
}

int getMatrixCols() {
    int k;
    std::cout << "������� ���������� �������� �������:\n";
    while (true) {
        k = readIntegerInLine();
        if (k <= 1) {
            std::cout << "������������ ����\n";
            continue;
        }
        break;
    }
    return k;
}