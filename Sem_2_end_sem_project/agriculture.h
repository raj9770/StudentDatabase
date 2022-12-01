#pragma once
#include "dbConnection.h"
namespace Sem2endsemproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace dbs;

	/// <summary>
	/// Summary for agriculture
	/// </summary>
	public ref class agriculture : public System::Windows::Forms::Form
	{
	public:
		agriculture(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~agriculture()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ datatable2;
	protected:
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DataGridView^ datatable1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(agriculture::typeid));
			this->datatable2 = (gcnew System::Windows::Forms::DataGridView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->datatable1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datatable2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datatable1))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// datatable2
			// 
			this->datatable2->BackgroundColor = System::Drawing::Color::White;
			this->datatable2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datatable2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->datatable2->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->datatable2->Location = System::Drawing::Point(3, 3);
			this->datatable2->Name = L"datatable2";
			this->datatable2->RowHeadersWidth = 72;
			this->datatable2->RowTemplate->Height = 31;
			this->datatable2->Size = System::Drawing::Size(1044, 644);
			this->datatable2->TabIndex = 37;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button8->Location = System::Drawing::Point(25, 656);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(125, 55);
			this->button8->TabIndex = 67;
			this->button8->Text = L"Semester 3";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button9->Location = System::Drawing::Point(156, 708);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(125, 55);
			this->button9->TabIndex = 66;
			this->button9->Text = L"Semester 6";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button10->Location = System::Drawing::Point(25, 708);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(125, 55);
			this->button10->TabIndex = 65;
			this->button10->Text = L"Semester 5";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button11->Location = System::Drawing::Point(156, 656);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(125, 55);
			this->button11->TabIndex = 64;
			this->button11->Text = L"Semester 4";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button12->Location = System::Drawing::Point(25, 604);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(125, 55);
			this->button12->TabIndex = 63;
			this->button12->Text = L"Semester 1";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button13->Location = System::Drawing::Point(156, 604);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(125, 55);
			this->button13->TabIndex = 62;
			this->button13->Text = L"Semester 2";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Sylfaen", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(25, 489);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(256, 112);
			this->label3->TabIndex = 61;
			this->label3->Text = L"      Exam    \r\n    Records";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Sylfaen", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(25, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(256, 112);
			this->label2->TabIndex = 60;
			this->label2->Text = L"    Student\r\n       Info";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button7->Location = System::Drawing::Point(25, 336);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(125, 55);
			this->button7->TabIndex = 59;
			this->button7->Text = L"Semester 3";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &agriculture::button7_Click);
			// 
			// datatable1
			// 
			this->datatable1->BackgroundColor = System::Drawing::Color::White;
			this->datatable1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->datatable1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->datatable1->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->datatable1->Location = System::Drawing::Point(3, 3);
			this->datatable1->Name = L"datatable1";
			this->datatable1->RowHeadersWidth = 72;
			this->datatable1->RowTemplate->Height = 31;
			this->datatable1->Size = System::Drawing::Size(1044, 644);
			this->datatable1->TabIndex = 36;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->datatable1);
			this->tabPage1->Location = System::Drawing::Point(4, 33);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1050, 650);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"UG";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(300, 91);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1058, 687);
			this->tabControl1->TabIndex = 68;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->datatable2);
			this->tabPage2->Location = System::Drawing::Point(4, 33);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1050, 650);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"PG";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button6->Location = System::Drawing::Point(156, 388);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 55);
			this->button6->TabIndex = 58;
			this->button6->Text = L"Semester 6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &agriculture::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button5->Location = System::Drawing::Point(25, 388);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 55);
			this->button5->TabIndex = 57;
			this->button5->Text = L"Semester 5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &agriculture::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button4->Location = System::Drawing::Point(156, 336);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 55);
			this->button4->TabIndex = 56;
			this->button4->Text = L"Semester 4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &agriculture::button4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button1->Location = System::Drawing::Point(156, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 55);
			this->button1->TabIndex = 54;
			this->button1->Text = L"Semester 2";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &agriculture::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightSalmon;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(12, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 62);
			this->button3->TabIndex = 53;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &agriculture::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button2->Location = System::Drawing::Point(25, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 55);
			this->button2->TabIndex = 55;
			this->button2->Text = L"Semester 1";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &agriculture::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1380, 835);
			this->pictureBox1->TabIndex = 52;
			this->pictureBox1->TabStop = false;
			// 
			// agriculture
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1380, 835);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"agriculture";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"agriculture";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datatable2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->datatable1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dbConnection^ db1 = gcnew dbConnection();
	db1->dbconn("select * from bvoc.infoagsem1", datatable1);
	delete(db1);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	dbConnection^ db1 = gcnew dbConnection();
	db1->dbconn("select * from bvoc.infoagsem2", datatable1);
	delete(db1);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	dbConnection^ db1 = gcnew dbConnection();
	db1->dbconn("select * from bvoc.infoagsem3", datatable1);
	delete(db1);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	dbConnection^ db1 = gcnew dbConnection();
	db1->dbconn("select * from bvoc.infoagsem4", datatable1);
	delete(db1);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	dbConnection^ db1 = gcnew dbConnection();
	db1->dbconn("select * from bvoc.infoagsem5", datatable1);
	delete(db1);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	dbConnection^ db1 = gcnew dbConnection();
	db1->dbconn("select * from bvoc.infoagsem6", datatable1);
	delete(db1);
}
};
}
