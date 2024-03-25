#include "titled_window.h"

class ButtonedWindow : public TitledWindow {
private:
    string buttonText;
public:
    ButtonedWindow(int w, int h, const string& t, const string& b);
    ButtonedWindow();
    ButtonedWindow(const ButtonedWindow& other);

    string getButtonText() const;
    void setButtonText(const string& b);

    friend istream& operator>>(istream& is, ButtonedWindow& window);
    friend ostream& operator<<(ostream& os, const ButtonedWindow& window);
    operator string() const;
};