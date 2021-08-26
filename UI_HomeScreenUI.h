#ifndef UI_HOMESCREENUI_H
#define UI_HOMESCREENUI_H

#include<iostream>
#include <stdlib.h>

#include "Share_FunctionName.h"
#include "Share_RouteKey.h"
#include "Share_BL.h"
#include "Share_ErrorString.h"
#include "Model_RouteModel.h"
#include "BL_RouteBL.h"

using namespace std;

class UI_HomeScreenUI
{
    public:
        UI_HomeScreenUI();
        virtual ~UI_HomeScreenUI();

        string HomeScreen();

    protected:

    private:
        Share_ErrorString errorString;
        Share_FunctionName functionName;
        Share_BL bl;
        Share_RouteKey routeKey;
        Model_RouteModel routeModel;
        BL_RouteBL routeBL;
};

#endif // UI_HOMESCREENUI_H
