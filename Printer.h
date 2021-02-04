//
// Created by Eric Miao on 9/16/20.
//

#ifndef TEMPLATEDCLASSDEMO_PRINTER_H
#define TEMPLATEDCLASSDEMO_PRINTER_H

class Printer {
private:
    int data;

public:
    Printer();
    Printer(int);
    void Set(int);
    void Print();
};

#endif

