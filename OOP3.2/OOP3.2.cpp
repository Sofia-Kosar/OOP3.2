#include <iostream>
#include "window.h"
#include "titled_window.h"
#include "buttoned_window.h"

using namespace std;

int main() {
    
    Window baseWindow(100, 50);
    TitledWindow titledWindow(200, 100, "My Window");
    ButtonedWindow buttonedWindow(300, 150, "Window with Button", "Click Me");

    
    cout << "Enter Base Window (width height): ";
    cin >> baseWindow;
    cout << "Base Window: " << baseWindow << endl;

    cout << "Enter Titled Window (width height title): ";
    cin >> titledWindow;
    cout << "Titled Window: " << titledWindow << endl;

    cout << "Enter Buttoned Window (width height title buttonText): ";
    cin >> buttonedWindow;
    cout << "Buttoned Window: " << buttonedWindow << endl;

    
    string baseStr = static_cast<string>(baseWindow);
    string titledStr = static_cast<string>(titledWindow);
    string buttonedStr = static_cast<string>(buttonedWindow);

    cout << "String representation of Base Window: " << baseStr << endl;
    cout << "String representation of Titled Window: " << titledStr << endl;
    cout << "String representation of Buttoned Window: " << buttonedStr << endl;

    return 0;
}
