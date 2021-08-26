#ifndef BL_ROUTEBL_H
#define BL_ROUTEBL_H

#include "Share_RouteKey.h"
#include "Share_ErrorString.h"
#include "UI_AdminManagementUI.h"
#include "UI_ReaderManagementUI.h"
#include "UI_CatalogueManagementUI.h"
#include "UI_RentalManagementUI.h"
#include "UI_RuleManagementUI.h"
#include "UI_LoginManagementUI.h"
#include "Share_FunctionName.h"
#include "Share_BL.h"
#include "Model_RouteModel.h"

#include "BL_AdminManagementBL.h"

#include <iostream>

using namespace std;

class BL_RouteBL : public Share_RouteKey
{
    public:
        BL_RouteBL();
        virtual ~BL_RouteBL();

        bool Route_HomeScreen(string functionId);

    // bool Route_AdminTab(string functionId);

        bool Route_ReaderTab(string functionId);

    protected:

    private:

    Share_ErrorString errorString;
    Share_FunctionName functionName;
    UI_AdminManagementUI adminManagementUI;
    UI_ReaderManagementUI readerManagementUI;
    UI_CatalogueManagementUI catalogueManagementUI;
    UI_RentalManagementUI rentalManagementUI;
    UI_RuleManagementUI ruleManagementUI;
    UI_LoginManagementUI loginManagementUI;
    BL_AdminManagementBL adminManagementBL;
    Share_BL bl;
    Model_RouteModel routeModel;
};

#endif // BL_ROUTEBL_H
