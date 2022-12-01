#include"login.h"
#include"homepage.h"

using namespace System;
using namespace System::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Sem2endsemproject::login login;

	login.ShowDialog();


}