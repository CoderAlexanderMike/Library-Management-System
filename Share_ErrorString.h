#ifndef SHARE_ERRORSTRING_H
#define SHARE_ERRORSTRING_H

#include <iostream>

using namespace std;

class Share_ErrorString
{
    public:
        Share_ErrorString();
        virtual ~Share_ErrorString();

        //loginManagement (001 - 099)
        string const e_001 = "Username or password wrong!";

        //adminManagement (100 - 199)

        //readerManagement (200 - 299)

        //cataloguesManagement (300 - 399)

        //rentalManagementBL (400 - 499)

        //ruleManagement (500 - 599)

        //commonError (900 - 999)
        string const e_900 = "Invalid function id!";


    protected:

    private:
};

#endif // SHARE_ERRORSTRING_H
