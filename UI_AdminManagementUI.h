#ifndef UI_ADMINMANAGEMENTUI_H
#define UI_ADMINMANAGEMENTUI_H

#include <iostream>

#include "Share_FunctionName.h"

using namespace std;
class UI_AdminManagementUI
{
    public:
        UI_AdminManagementUI();
        virtual ~UI_AdminManagementUI();

        bool AdminMenu();

    protected:

    private:
        Share_FunctionName functionName;
};

#endif // UI_ADMINMANAGEMENTUI_H
