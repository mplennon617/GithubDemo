//
// Created by Eric Miao on 9/16/20.
//

#include "Printer.h"
#include <iostream>

Printer::Printer() {}
Printer::Printer(int data) {
    this->data = data;
}

void Printer::Set(int data) {
    this->data = data;
}

void Printer::Print() {
    std::cout << "Here is your value: " << data << std::endl;
}
