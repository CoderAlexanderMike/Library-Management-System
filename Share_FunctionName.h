#ifndef SHARE_FUNCTIONNAME_H
#define SHARE_FUNCTIONNAME_H

#include <iostream>

using namespace std;

class Share_FunctionName
{
    public:
        Share_FunctionName();
        virtual ~Share_FunctionName();


        //common
        string const enterFunctionId = "Enter Function Id : ";
        string const f_back = "Enter 3.y for Back.";
        string const f_home = "Enter 3.z for Home.";

        //login
        string const enterUsername = "Enter User Name : ";
        string const enterPassword = "Enter Password : ";
        string const f_logout = "Enter 2.l for Logout";

        //homeScreen
        string const welcome = "Welcome to CodeZ Library.";
        string const tagLine = "Reading is power.";

        string const f_adminManagement = "Enter 2.a for Admin Management.";
        string const f_readerManagement = "Enter 2.b for Reader Management.";
        string const f_cataloguesManagement = "Enter 2.c for Catalogues Management.";
        string const f_rentalManagement = "Enter 2.d for Rental Management.";
        string const f_ruleManagement = "Enter 2.e for Rule Management / Setting.";

        //AdminMenu
        string const f_adminListing = "Enter 3.a for Admin Listing";

         string const f_readerListing = "Enter 3.a for Reader Listing.";
        string const f_readerCreate = "Enter 3.b for Reader Create.";
        string const f_readerEdit = "Enter 3.c for Reader Edit.";
        string const f_readerDelete = "Enter 3.d for Reader Delete.";
        string const f_readerSearch = "Enter 3.e for Reader Search.";

        // Common Method
        void Back_Method();
        void Home_Method();

    protected:

    private:
};

#endif // SHARE_FUNCTIONNAME_H
