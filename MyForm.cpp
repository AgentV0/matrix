#include "MyForm.h"
#include <iostream>
#include <string>
#include <Windows.h>


using namespace System;

using namespace System::Windows::Forms;



void main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    matrix::MyForm form;
    Application::Run(% form);
}

