#include "loginmanager.h"

LoginManager::LoginManager()
{

}

bool LoginManager::ValidLogin(QString user, QString pass)
{
    if (user == "test" && pass == "test")
    {
        return true;
    }
    return false;
}
