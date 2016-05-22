#ifndef DRIVER_H
#define DRIVER_H
#include <string>

class Driver {
private:
    string name;
    string identitycard;
    int priority;
public:
    Driver();
    virtual ~Driver();
    void setName(const string& rhs);
    void setIdentityCard(const string& rhs);
    void setPriority(const int rhs);
    string getName() const;
    string getIdentityCard() const;
    string
};

#endif // DRIVER_H
