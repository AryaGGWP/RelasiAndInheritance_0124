#ifndef MANUSIA_H
#define MANUSIA_H

#include <string> 
#include "JANTUNG_H"

using namespace std;

class manusia {
public:
    string name;
    jantung varJantung; // Agregasi / Komposisi

    manusia(string pName)
        : name(pName) {
        cout << name << " hidup\n";
    }

    ~manusia() {
        cout << name << " mati\n";
    }
};

#endif