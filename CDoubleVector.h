#pragma once
// CDoubleVector.h
#ifndef CDOUBLEVECTOR_H
#define CDOUBLEVECTOR_H

#include <iostream>
#include <cmath>

class CDoubleVector {
private:
    int size;
    double* vector;

public:
    CDoubleVector();
    CDoubleVector(int s);
    ~CDoubleVector();

    void Init(int s);
    void setElement(int index, double value);
    double getElement(int index) const;
    int getSize() const;
    double getMin() const;
    double getMax() const;
    double calculate(double x, double y, double z) const;
};

#endif
