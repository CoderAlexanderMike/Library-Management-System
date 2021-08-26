#ifndef UI_LOGINMANAGEMENTUI_H
#define UI_LOGINMANAGEMENTUI_H

#include <iostream>

#include "Share_FunctionName.h"
#include "Share_ErrorString.h"
#include "Model_LoginModel.h"
#include "BL_LoginManagementBL.h"

using namespace std;

class UI_LoginManagementUI
{
    public:
        UI_LoginManagementUI();
        virtual ~UI_LoginManagementUI();

        void Login();

    protected:

    private:
        Share_FunctionName functionName;
        Model_LoginModel loginModel;
        BL_LoginManagementBL loginManagementBL;
        Share_ErrorString errorString;
};

#endif // UI_LOGINMANAGEMENTUI_H
