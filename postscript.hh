#pragma once
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>

class Postscript {
private:
    std::ofstream s;
    char strokeColor[64];
    char fillColor[64];
    
public:
    Postscript(const char* str){
        s.open(str);
        
        strcpy(strokeColor, "1 1 1 setrgbcolor\n");
        strcpy(fillColor, "1 1 1 setrgbcolor\n");
    }
    
    ~Postscript(){
        s.close();
    }
    
    void line(int a, int b, int c, int d);

    void setStrokeColor(int r, int g, int b);

    void setFillColor(int r, int g, int b);

    void drawRect(float x, float y, float w, float h);

    void fillRect(float x, float y, float w, float h);
    
    void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3);
    
    void fillTriangle(float x1, float y1, float x2, float y2, float x3, float y3);
    
    void drawCircle(float x, float y, float r);
    
    void fillCircle(float x, float y, float r);
    
    void text(float x, float y, const char* str);
    
    void grid(float x1, float interval_x, float x2, float y1, float interval_y, float y2);
};