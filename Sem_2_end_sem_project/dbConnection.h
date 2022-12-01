#pragma once
namespace dbs {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class dbConnection
	{
	public:
		dbConnection(void) {

		}
	public:
		String^ dbquery;
		DataGridView^ tableName;
	public: System::Void dbconn(String^ dbquery, DataGridView^ tableName) {
		String^ constring = L"DataSource = localhost;port =3306;username = root;password = Rachit!230503";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(dbquery, conDataBase);
		MySqlDataReader^ myReader = nullptr;

		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			tableName->DataSource = bSource;
			sda->Update(dbdataset);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	};
}

