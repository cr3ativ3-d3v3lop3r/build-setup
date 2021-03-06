/*
 * Filename: main.cpp
 * Author: Callum Cooper
 * Date: 12-04-19
 * Description: Entry point to the application.
 */

#include <iostream>
#include "../include/FileReader.h"

using namespace std;

int main(void)
{

    FileReader* fr = new FileReader();

    fr->sayHello();
    delete fr;

    cin.ignore(0);

    return 0;
}
