#ifndef MODEL_LOGINMODEL_H
#define MODEL_LOGINMODEL_H

#include <iostream>

using namespace std;

class Model_LoginModel
{
    public:
        Model_LoginModel();
        virtual ~Model_LoginModel();

        string username;
        string password;

    protected:

    private:
};

#endif // MODEL_LOGINMODEL_H
