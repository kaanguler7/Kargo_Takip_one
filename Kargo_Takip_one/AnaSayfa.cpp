#include "AnaSayfa.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	KargoTakipone::AnaSayfa form;
	Application::Run(% form);
}

