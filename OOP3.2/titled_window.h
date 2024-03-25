#pragma once
#include "window.h"

class TitledWindow : public Window {
protected:
    string title;
public:
    TitledWindow(int w, int h, const string& t);
    TitledWindow();
    TitledWindow(const TitledWindow& other);

    string getTitle() const;
    void setTitle(const string& t);

    friend istream& operator>>(istream& is, TitledWindow& window);
    friend ostream& operator<<(ostream& os, const TitledWindow& window);
    operator string() const;
};

