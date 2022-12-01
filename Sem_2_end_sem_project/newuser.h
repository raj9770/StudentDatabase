#pragma once
namespace Sem2endsemproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class newuser : public System::Windows::Forms::Form
	{
	public:
		newuser(void)
		{
			InitializeComponent();

		}

	protected:

		~newuser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ newemailbox;
	private: System::Windows::Forms::TextBox^ newpasswordbox;
	private: System::Windows::Forms::TextBox^ confirmpasswordbox;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(newuser::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->newemailbox = (gcnew System::Windows::Forms::TextBox());
			this->newpasswordbox = (gcnew System::Windows::Forms::TextBox());
			this->confirmpasswordbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1011, -2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 9;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &newuser::button3_Click);
			// 
			// newemailbox
			// 
			this->newemailbox->BackColor = System::Drawing::Color::LightGray;
			this->newemailbox->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newemailbox->Location = System::Drawing::Point(384, 159);
			this->newemailbox->Name = L"newemailbox";
			this->newemailbox->Size = System::Drawing::Size(315, 52);
			this->newemailbox->TabIndex = 10;
			this->newemailbox->Text = L" Email  ";
			this->newemailbox->Click += gcnew System::EventHandler(this, &newuser::newemailbox_Click);
			this->newemailbox->TextChanged += gcnew System::EventHandler(this, &newuser::newemailbox_TextChanged);
			// 
			// newpasswordbox
			// 
			this->newpasswordbox->BackColor = System::Drawing::Color::LightGray;
			this->newpasswordbox->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newpasswordbox->Location = System::Drawing::Point(384, 222);
			this->newpasswordbox->Name = L"newpasswordbox";
			this->newpasswordbox->Size = System::Drawing::Size(315, 52);
			this->newpasswordbox->TabIndex = 11;
			this->newpasswordbox->Text = L" Password       ";
			this->newpasswordbox->Click += gcnew System::EventHandler(this, &newuser::newpasswordbox_Click);
			this->newpasswordbox->TextChanged += gcnew System::EventHandler(this, &newuser::newpasswordbox_TextChanged);
			// 
			// confirmpasswordbox
			// 
			this->confirmpasswordbox->BackColor = System::Drawing::Color::LightGray;
			this->confirmpasswordbox->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmpasswordbox->Location = System::Drawing::Point(384, 287);
			this->confirmpasswordbox->Name = L"confirmpasswordbox";
			this->confirmpasswordbox->Size = System::Drawing::Size(315, 52);
			this->confirmpasswordbox->TabIndex = 12;
			this->confirmpasswordbox->Text = L" Confirm Password";
			this->confirmpasswordbox->Click += gcnew System::EventHandler(this, &newuser::confirmpasswordbox_Click);
			this->confirmpasswordbox->TextChanged += gcnew System::EventHandler(this, &newuser::confirmpasswordbox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Small", 20.14286F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Purple;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(200, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(722, 71);
			this->label1->TabIndex = 13;
			this->label1->Text = L"NEW USER REGISTRATION";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(470, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 45);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &newuser::button1_Click);
			// 
			// newuser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1062, 524);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->confirmpasswordbox);
			this->Controls->Add(this->newpasswordbox);
			this->Controls->Add(this->newemailbox);
			this->Controls->Add(this->button3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"newuser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"newuser";
			this->Load += gcnew System::EventHandler(this, &newuser::newuser_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void newemailbox_Click(System::Object^ sender, System::EventArgs^ e) {
		newemailbox->Text = "";
	}
private: System::Void newpasswordbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void newpasswordbox_Click(System::Object^ sender, System::EventArgs^ e) {
	newpasswordbox->Text = "";
}
private: System::Void confirmpasswordbox_Click(System::Object^ sender, System::EventArgs^ e) {
	confirmpasswordbox->Text = "";
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (newemailbox->Text == "" || newpasswordbox->Text == "" || confirmpasswordbox->Text == "") {
		MessageBox::Show("Please Fill all the fields", "", MessageBoxButtons::OK);
	}
	else if (newpasswordbox->TextLength < 8) {
		MessageBox::Show("PASSWORD TOO SHORT", "", MessageBoxButtons::OK);
	}

	else if (newpasswordbox->Text != confirmpasswordbox->Text) {
		MessageBox::Show("Password does not match! Try again", "", MessageBoxButtons::OK);
		return;
	}
	
	else
	{
		String^ constring = L"DataSource = localhost;port =3306;username = root;password = Rachit!230503";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into bvoc.user (email,pwd) values('" + this->newemailbox->Text + "','" + this->newpasswordbox->Text + "');",conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			
			MessageBox::Show("REGISTRATION SUCCESSFULL","", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "AN ERROR OCCURED", MessageBoxButtons::OK);

		}
	}
	
}
private: System::Void newuser_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void newemailbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void confirmpasswordbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
