#pragma once

namespace Sem2endsemproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace MySql::Data::MySqlClient;

	public ref class feedback : public System::Windows::Forms::Form
	{
	public:
		feedback(void)
		{
			InitializeComponent();		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~feedback()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ feedbackbox;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ frombox;

	private:
	
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(feedback::typeid));
			this->feedbackbox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->frombox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// feedbackbox
			// 
			this->feedbackbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->feedbackbox->Location = System::Drawing::Point(184, 188);
			this->feedbackbox->Multiline = true;
			this->feedbackbox->Name = L"feedbackbox";
			this->feedbackbox->Size = System::Drawing::Size(1005, 392);
			this->feedbackbox->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(583, 635);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 90);
			this->button1->TabIndex = 1;
			this->button1->Text = L"SEND";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &feedback::button1_Click);
			
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumPurple;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(2, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 62);
			this->button3->TabIndex = 11;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &feedback::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(263, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(305, 39);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Enter Your Name : ";
			// 
			// frombox
			// 
			this->frombox->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->frombox->Location = System::Drawing::Point(574, 87);
			this->frombox->Multiline = true;
			this->frombox->Name = L"frombox";
			this->frombox->Size = System::Drawing::Size(553, 39);
			this->frombox->TabIndex = 13;
			// 
			// feedback
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1380, 835);
			this->Controls->Add(this->frombox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->feedbackbox);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"feedback";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"feedback";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = L"DataSource = localhost;port =3306;username = root;password = Rachit!230503";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into bvoc.feedback (name,fback) values('" + this->frombox->Text + "','" + this->feedbackbox->Text + "');", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			MessageBox::Show("FEEDBACK SENT", "", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "AN ERROR OCCURED", MessageBoxButtons::OK);

		}
	}
};
}
