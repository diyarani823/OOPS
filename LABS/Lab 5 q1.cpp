#include <iostream>
using namespace std;
class Base {
private:
    int privateInt;

protected:
    int protectedInt;

public:
    int publicInt;
    void setPrivateInt(int x) { privateInt = x; }
    void setProtectedInt(int x) { protectedInt = x; }
    void setPublicInt(int x) { publicInt = x; }
    int getPrivateInt() { return privateInt; }
    int getProtectedInt() { return protectedInt; }
    int getPublicInt() { return publicInt; }
};
class publicChild : public Base {
public:
    void accessMembers() {
        protectedInt = 20;
        publicInt = 30;

        cout << "publicChild accessing protectedInt directly: " << protectedInt << endl;
        cout << "publicChild accessing publicInt directly: " << publicInt << endl;
    }
};
class protectedChild : protected Base {
public:
    void accessMembers() {
        protectedInt = 40;
        publicInt = 50;

        cout << "protectedChild accessing protectedInt directly: " << protectedInt << endl;
        cout << "protectedChild accessing publicInt directly: " << publicInt << endl;
    }
    void setValues() {
        setPrivateInt(10);
    }

    void showPrivate() {
        cout << "protectedChild accessing privateInt using getter: "
             << getPrivateInt() << endl;
    }
};
class privateChild : private Base {
public:
    void accessMembers() {
        protectedInt = 60;
        publicInt = 70;
        cout << "privateChild accessing protectedInt directly: " << protectedInt << endl;
        cout << "privateChild accessing publicInt directly: " << publicInt << endl;
    }
    void setValues() {
        setPrivateInt(15);
    }
    void showPrivate() {
        cout << "privateChild accessing privateInt using getter: "
             << getPrivateInt() << endl;
    }
};
int main() {
    cout << "===== PUBLIC INHERITANCE =====" << endl;
    publicChild pc;
    pc.setPrivateInt(5);     
    pc.setProtectedInt(10);  
    pc.setPublicInt(15);     
    pc.accessMembers();
    cout << "Accessing privateInt using getter: "
         << pc.getPrivateInt() << endl;
    cout << "\n===== PROTECTED INHERITANCE =====" << endl;
    protectedChild prc;
    prc.accessMembers();
    prc.setValues();
    prc.showPrivate();
    cout << "\n===== PRIVATE INHERITANCE =====" << endl;
    privateChild pvc;
    pvc.accessMembers();
    pvc.setValues();
    pvc.showPrivate();
    return 0;
}
