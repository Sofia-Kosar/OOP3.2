#include "buttoned_window.h"

ButtonedWindow::ButtonedWindow(int w, int h, const string& t, const string& b) : TitledWindow(w, h, t), buttonText(b) {}

ButtonedWindow::ButtonedWindow() : TitledWindow(), buttonText("") {}

ButtonedWindow::ButtonedWindow(const ButtonedWindow& other) : TitledWindow(other), buttonText(other.buttonText) {}

string ButtonedWindow::getButtonText() const { return buttonText; }

void ButtonedWindow::setButtonText(const string& b) { buttonText = b; }

istream& operator>>(istream& is, ButtonedWindow& window) {
    is >> window.width >> window.height >> window.title >> window.buttonText;
    return is;
}

ostream& operator<<(ostream& os, const ButtonedWindow& window) {
    os << "ButtonedWindow: " << window.buttonText << ", " << window.getTitle() << ", " << window.getWidth() << "x" << window.getHeight();
    return os;
}

ButtonedWindow::operator string() const {
    return "ButtonedWindow: " + buttonText + ", " + getTitle() + ", " + to_string(getWidth()) + "x" + to_string(getHeight());
}
