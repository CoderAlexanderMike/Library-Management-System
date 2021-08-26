#ifndef BL_LOGINMANAGEMENTBL_H
#define BL_LOGINMANAGEMENTBL_H

#include <iostream>

using namespace std;

class BL_LoginManagementBL
{
    public:
        BL_LoginManagementBL();
        virtual ~BL_LoginManagementBL();

        bool IsLogin(string userName, string password);

    protected:

    private:
        //string org_username = "may";
        //string org_password = "poe";
};

#endif // BL_LOGINMANAGEMENTBL_H
