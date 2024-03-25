#include "titled_window.h"

TitledWindow::TitledWindow(int w, int h, const string& t) : Window(w, h), title(t) {}

TitledWindow::TitledWindow() : Window(), title("") {}

TitledWindow::TitledWindow(const TitledWindow& other) : Window(other), title(other.title) {}

string TitledWindow::getTitle() const { return title; }

void TitledWindow::setTitle(const string& t) { title = t; }

istream& operator>>(istream& is, TitledWindow& window) {
    is >> window.width >> window.height >> window.title;
    return is;
}

ostream& operator<<(ostream& os, const TitledWindow& window) {
    os << "TitledWindow: " << window.title << ", " << window.width << "x" << window.height;
    return os;
}

TitledWindow::operator string() const {
    return "TitledWindow: " + title + ", " + to_string(width) + "x" + to_string(height);
}
