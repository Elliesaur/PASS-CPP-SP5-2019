#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H
#include <QString>

class LoginManager
{
public:
    LoginManager();
    bool ValidLogin(QString user, QString pass);
};

#endif // LOGINMANAGER_H
