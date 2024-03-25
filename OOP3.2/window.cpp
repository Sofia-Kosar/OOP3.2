#include "window.h"

Window::Window(int w, int h) : width(w), height(h) {}

Window::Window() : width(0), height(0) {}

Window::Window(const Window& other) : width(other.width), height(other.height) {}

int Window::getWidth() const { return width; }

int Window::getHeight() const { return height; }

void Window::setWidth(int w) { width = w; }

void Window::setHeight(int h) { height = h; }

istream& operator>>(istream& is, Window& window) {
    is >> window.width >> window.height;
    return is;
}

ostream& operator<<(ostream& os, const Window& window) {
    os << "Window: " << window.width << "x" << window.height;
    return os;
}

Window::operator string() const {
    return "Window: " + to_string(width) + "x" + to_string(height);
}
