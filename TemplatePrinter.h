//
// Created by Eric Miao on 9/16/20.
//

#ifndef PRINTER_TEMPLATEPRINTER_H
#define PRINTER_TEMPLATEPRINTER_H

#include <iostream>

template<typename T>
class TemplatePrinter {
private:
    T data;
public:
    TemplatePrinter();

    TemplatePrinter(T data);

    T Get();
    void Set(T data);
    void Print();
};

template <typename T>
TemplatePrinter<T>::TemplatePrinter() {}

template <typename T>
TemplatePrinter<T>::TemplatePrinter(T data) {
    this->data = data;
}

template <typename T>
T TemplatePrinter<T>::Get() {
    return data;
}

template <typename T>
void TemplatePrinter<T>::Set(T data) {
    this->data = data;
}

template <typename T>
void TemplatePrinter<T>::Print() {
    std::cout << "This is my value: " << data << std::endl;
}

#endif //PRINTER_TEMPLATEPRINTER_H
