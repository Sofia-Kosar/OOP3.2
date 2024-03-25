#pragma once
#include <iostream>
#include <string>

using namespace std;

class Window {
protected:
    int width;
    int height;
public:
    Window(int w, int h);
    Window();
    Window(const Window& other);

    int getWidth() const;
    int getHeight() const;
    void setWidth(int w);
    void setHeight(int h);

    friend istream& operator>>(istream& is, Window& window);
    friend ostream& operator<<(ostream& os, const Window& window);
    operator string() const;
};