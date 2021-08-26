#ifndef UI_READERMANAGEMENTUI_H
#define UI_READERMANAGEMENTUI_H

#include <iostream>
#include <stdlib.h>

#include "Share_FunctionName.h"
#include "Model_RouteModel.h"
#include "Share_BL.h"

using namespace std;

class UI_ReaderManagementUI
{
    public:
        UI_ReaderManagementUI();
        virtual ~UI_ReaderManagementUI();


        string ReaderMenu();

        bool ReaderListing();
        bool ReaderCreate();
        bool ReaderEdit();
        bool ReaderDelete();
        bool ReaderSearch();

    protected:

    private:
    Share_FunctionName functionName;
    Model_RouteModel routeModel;
    Share_BL bl;
};

#endif // UI_READERMANAGEMENTUI_H
