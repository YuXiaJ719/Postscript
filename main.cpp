#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include "postscript.hh"
using namespace std;

int main() {
    Postscript p("test.ps");

    int r = 255, g = 150, b = 0;
    p.line(30,0, 278,600);
    p.setStrokeColor(r, g, b);
    p.line(0,0, 300,400);
    p.setFillColor(150, 250, 0);
    p.drawRect(100, 200, 200, 200);
    p.fillRect(10, 20, 20, 20);
    p.drawTriangle(100, 100, 200, 100, 75, 89);
    p.fillTriangle(283, 232, 123, 98, 65, 15);
    p.drawCircle(200, 100, 60);
    p.fillCircle(200, 100, 60);
    p.text(100, 100, "Nice to meet you. This is my postscript object.");
    p.grid(200, 50, 400, 300, 50, 500);
}