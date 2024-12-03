
#include "CDoubleVector.h"

CDoubleVector::CDoubleVector() {
    size = 0;
    vector = nullptr;
}

CDoubleVector::CDoubleVector(int s) {
    Init(s);
}

CDoubleVector::~CDoubleVector() {
    delete[] vector;
}

void CDoubleVector::Init(int s) {
    size = s;
    if (vector != nullptr) {
        delete[] vector;
    }
    vector = new double[size];
    for (int i = 0; i < size; ++i) {
        vector[i] = 0.0;
    }
}

void CDoubleVector::setElement(int index, double value) {
    if (index >= 0 && index < size) {
        vector[index] = value;
    }
    else {
        std::cout << "The index is outside the vector" << std::endl;
    }
}

double CDoubleVector::getElement(int index) const {
    if (index >= 0 && index < size) {
        return vector[index];
    }
    else {
        std::cout << "Index outside the vector" << std::endl;
        return 0.0;
    }
}

int CDoubleVector::getSize() const {
    return size;
}

double CDoubleVector::getMin() const {
    if (size == 0) return 0.0;
    double min = vector[0];
    for (int i = 1; i < size; ++i) {
        if (vector[i] < min) {
            min = vector[i];
        }
    }
    return min;
}

double CDoubleVector::getMax() const {
    if (size == 0) return 0.0;
    double max = vector[0];
    for (int i = 1; i < size; ++i) {
        if (vector[i] > max) {
            max = vector[i];
        }
    }
    return max;
}

double CDoubleVector::calculate(double x, double y, double z) const {
    double result = 0.0;
    for (int i = 1; i <= 10; ++i) {
        result += pow(x, i) * pow(y, 10 - i);
    }
    for (int i = 2; i <= 5; ++i) {
        result += pow(x - y, i) * pow(z, 10 - i);
    }
    return result;
}
