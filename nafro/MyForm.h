#pragma once

namespace nafro {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int pinno,a,b,c,d;
		float balancefor1 = 14521.00;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Button^ confirm1;
	private: System::Windows::Forms::TextBox^ successful;
	private: System::Windows::Forms::TextBox^ confirm;
	private: System::Windows::Forms::TextBox^ newpin;
	private: System::Windows::Forms::TextBox^ old;
	private: System::Windows::Forms::TextBox^ pen;
	private: System::Windows::Forms::TextBox^ enterpin;
	private: System::Windows::Forms::Button^ receipt;
	private: System::Windows::Forms::Button^ changepin;
	private: System::Windows::Forms::Button^ withcash;
	private: System::Windows::Forms::Button^ deposit;
	private: System::Windows::Forms::Button^ balance;
	private: System::Windows::Forms::Button^ loan;
	private: System::Windows::Forms::RichTextBox^ screen;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ preface;
	private: System::Windows::Forms::Panel^ pan;
	private: System::Windows::Forms::Panel^ loadersmall;
	private: System::Windows::Forms::Button^ but;


	private: System::Windows::Forms::TextBox^ insert;
	private: System::Windows::Forms::RichTextBox^ rich;





	private: System::Windows::Forms::Timer^ timer;


	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel8;



















	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ n0;

	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ clear;

	private: System::Windows::Forms::Button^ n9;


	private: System::Windows::Forms::Button^ n8;
	private: System::Windows::Forms::Button^ n7;
	private: System::Windows::Forms::Button^ cancel;
	private: System::Windows::Forms::Button^ n6;
	private: System::Windows::Forms::Button^ n5;
	private: System::Windows::Forms::Button^ n4;
	private: System::Windows::Forms::Button^ enter;
	private: System::Windows::Forms::Button^ n3;
	private: System::Windows::Forms::Button^ n2;
	private: System::Windows::Forms::Button^ n1;















	private: System::Windows::Forms::Panel^ panel7;












	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->n0 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->n9 = (gcnew System::Windows::Forms::Button());
			this->n8 = (gcnew System::Windows::Forms::Button());
			this->n7 = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->n6 = (gcnew System::Windows::Forms::Button());
			this->n5 = (gcnew System::Windows::Forms::Button());
			this->n4 = (gcnew System::Windows::Forms::Button());
			this->enter = (gcnew System::Windows::Forms::Button());
			this->n3 = (gcnew System::Windows::Forms::Button());
			this->n2 = (gcnew System::Windows::Forms::Button());
			this->n1 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->insert = (gcnew System::Windows::Forms::TextBox());
			this->confirm1 = (gcnew System::Windows::Forms::Button());
			this->successful = (gcnew System::Windows::Forms::TextBox());
			this->confirm = (gcnew System::Windows::Forms::TextBox());
			this->newpin = (gcnew System::Windows::Forms::TextBox());
			this->old = (gcnew System::Windows::Forms::TextBox());
			this->pen = (gcnew System::Windows::Forms::TextBox());
			this->enterpin = (gcnew System::Windows::Forms::TextBox());
			this->receipt = (gcnew System::Windows::Forms::Button());
			this->changepin = (gcnew System::Windows::Forms::Button());
			this->withcash = (gcnew System::Windows::Forms::Button());
			this->deposit = (gcnew System::Windows::Forms::Button());
			this->balance = (gcnew System::Windows::Forms::Button());
			this->loan = (gcnew System::Windows::Forms::Button());
			this->screen = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->preface = (gcnew System::Windows::Forms::PictureBox());
			this->pan = (gcnew System::Windows::Forms::Panel());
			this->loadersmall = (gcnew System::Windows::Forms::Panel());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->but = (gcnew System::Windows::Forms::Button());
			this->rich = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->preface))->BeginInit();
			this->pan->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
		
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Location = System::Drawing::Point(179, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(370, 34);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->button23);
			this->panel3->Controls->Add(this->button24);
			this->panel3->Controls->Add(this->n0);
			this->panel3->Controls->Add(this->preface);
			this->panel3->Controls->Add(this->button26);
			this->panel3->Controls->Add(this->clear);
			this->panel3->Controls->Add(this->n9);
			this->panel3->Controls->Add(this->n8);
			this->panel3->Controls->Add(this->n7);
			this->panel3->Controls->Add(this->cancel);
			this->panel3->Controls->Add(this->n6);
			this->panel3->Controls->Add(this->n5);
			this->panel3->Controls->Add(this->n4);
			this->panel3->Controls->Add(this->enter);
			this->panel3->Controls->Add(this->n3);
			this->panel3->Controls->Add(this->n2);
			this->panel3->Controls->Add(this->n1);
			this->panel3->Location = System::Drawing::Point(414, 104);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(239, 148);
			this->panel3->TabIndex = 2;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(171, 106);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(51, 31);
			this->button23->TabIndex = 19;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Transparent;
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(116, 107);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(51, 31);
			this->button24->TabIndex = 18;
			this->button24->UseVisualStyleBackColor = false;
			// 
			// n0
			// 
			this->n0->BackColor = System::Drawing::Color::Transparent;
			this->n0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n0.BackgroundImage")));
			this->n0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->n0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n0->Location = System::Drawing::Point(60, 107);
			this->n0->Name = L"n0";
			this->n0->Size = System::Drawing::Size(51, 31);
			this->n0->TabIndex = 17;
			this->n0->UseVisualStyleBackColor = false;
			this->n0->Click += gcnew System::EventHandler(this, &MyForm::n0_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Transparent;
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(3, 106);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(51, 31);
			this->button26->TabIndex = 16;
			this->button26->UseVisualStyleBackColor = false;
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::Transparent;
			this->clear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clear.BackgroundImage")));
			this->clear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear->Location = System::Drawing::Point(171, 72);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(51, 31);
			this->clear->TabIndex = 15;
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// n9
			// 
			this->n9->BackColor = System::Drawing::Color::Transparent;
			this->n9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n9.BackgroundImage")));
			this->n9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->n9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n9->Location = System::Drawing::Point(116, 73);
			this->n9->Name = L"n9";
			this->n9->Size = System::Drawing::Size(51, 31);
			this->n9->TabIndex = 14;
			this->n9->UseVisualStyleBackColor = false;
			this->n9->Click += gcnew System::EventHandler(this, &MyForm::n9_Click);
			// 
			// n8
			// 
			this->n8->BackColor = System::Drawing::Color::Transparent;
			this->n8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n8.BackgroundImage")));
			this->n8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->n8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n8->Location = System::Drawing::Point(60, 73);
			this->n8->Name = L"n8";
			this->n8->Size = System::Drawing::Size(51, 31);
			this->n8->TabIndex = 13;
			this->n8->UseVisualStyleBackColor = false;
			this->n8->Click += gcnew System::EventHandler(this, &MyForm::n8_Click);
			// 
			// n7
			// 
			this->n7->BackColor = System::Drawing::Color::Transparent;
			this->n7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n7.BackgroundImage")));
			this->n7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->n7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n7->Location = System::Drawing::Point(3, 72);
			this->n7->Name = L"n7";
			this->n7->Size = System::Drawing::Size(51, 31);
			this->n7->TabIndex = 12;
			this->n7->UseVisualStyleBackColor = false;
			this->n7->Click += gcnew System::EventHandler(this, &MyForm::n7_Click);
			// 
			// cancel
			// 
			this->cancel->BackColor = System::Drawing::Color::Transparent;
			this->cancel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cancel.BackgroundImage")));
			this->cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel->Location = System::Drawing::Point(171, 39);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(51, 31);
			this->cancel->TabIndex = 11;
			this->cancel->UseVisualStyleBackColor = false;
			this->cancel->Click += gcnew System::EventHandler(this, &MyForm::cancel_Click);
			// 
			// n6
			// 
			this->n6->BackColor = System::Drawing::Color::Transparent;
			this->n6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n6.BackgroundImage")));
			this->n6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->n6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n6->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->n6->Location = System::Drawing::Point(116, 40);
			this->n6->Name = L"n6";
			this->n6->Size = System::Drawing::Size(51, 31);
			this->n6->TabIndex = 10;
			this->n6->UseVisualStyleBackColor = false;
			this->n6->Click += gcnew System::EventHandler(this, &MyForm::n6_Click);
			// 
			// n5
			// 
			this->n5->BackColor = System::Drawing::Color::Transparent;
			this->n5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n5.BackgroundImage")));
			this->n5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->n5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n5->Location = System::Drawing::Point(60, 40);
			this->n5->Name = L"n5";
			this->n5->Size = System::Drawing::Size(51, 31);
			this->n5->TabIndex = 9;
			this->n5->UseVisualStyleBackColor = false;
			this->n5->Click += gcnew System::EventHandler(this, &MyForm::n5_Click);
			// 
			// n4
			// 
			this->n4->BackColor = System::Drawing::Color::Transparent;
			this->n4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n4.BackgroundImage")));
			this->n4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->n4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n4->Location = System::Drawing::Point(3, 39);
			this->n4->Name = L"n4";
			this->n4->Size = System::Drawing::Size(51, 31);
			this->n4->TabIndex = 8;
			this->n4->UseVisualStyleBackColor = false;
			this->n4->Click += gcnew System::EventHandler(this, &MyForm::n4_Click);
			// 
			// enter
			// 
			this->enter->BackColor = System::Drawing::Color::Transparent;
			this->enter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"enter.BackgroundImage")));
			this->enter->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->enter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enter->ForeColor = System::Drawing::SystemColors::ControlText;
			this->enter->Location = System::Drawing::Point(171, 4);
			this->enter->Name = L"enter";
			this->enter->Size = System::Drawing::Size(51, 31);
			this->enter->TabIndex = 3;
			this->enter->UseVisualStyleBackColor = false;
			this->enter->Click += gcnew System::EventHandler(this, &MyForm::enter_Click);
			// 
			// n3
			// 
			this->n3->BackColor = System::Drawing::Color::Transparent;
			this->n3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n3.BackgroundImage")));
			this->n3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->n3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n3->Location = System::Drawing::Point(116, 5);
			this->n3->Name = L"n3";
			this->n3->Size = System::Drawing::Size(51, 31);
			this->n3->TabIndex = 2;
			this->n3->UseVisualStyleBackColor = false;
			this->n3->Click += gcnew System::EventHandler(this, &MyForm::n3_Click);
			// 
			// n2
			// 
			this->n2->BackColor = System::Drawing::Color::Transparent;
			this->n2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n2.BackgroundImage")));
			this->n2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->n2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n2->Location = System::Drawing::Point(60, 5);
			this->n2->Name = L"n2";
			this->n2->Size = System::Drawing::Size(51, 31);
			this->n2->TabIndex = 1;
			this->n2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->n2->UseVisualStyleBackColor = false;
			this->n2->Click += gcnew System::EventHandler(this, &MyForm::n2_Click);
			// 
			// n1
			// 
			this->n1->BackColor = System::Drawing::Color::Transparent;
			this->n1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"n1.BackgroundImage")));
			this->n1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->n1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->n1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->n1->Location = System::Drawing::Point(3, 7);
			this->n1->Name = L"n1";
			this->n1->Size = System::Drawing::Size(51, 31);
			this->n1->TabIndex = 0;
			this->n1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->n1->UseVisualStyleBackColor = false;
			this->n1->Click += gcnew System::EventHandler(this, &MyForm::n1_Click);
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(448, 307);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(235, 19);
			this->panel4->TabIndex = 3;
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Location = System::Drawing::Point(448, 362);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(235, 19);
			this->panel6->TabIndex = 5;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel8->Location = System::Drawing::Point(12, 344);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(46, 39);
			this->panel8->TabIndex = 4;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->Location = System::Drawing::Point(396, 352);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(46, 39);
			this->panel7->TabIndex = 8;
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->Controls->Add(this->insert);
			this->panel11->Controls->Add(this->confirm1);
			this->panel11->Controls->Add(this->successful);
			this->panel11->Controls->Add(this->confirm);
			this->panel11->Controls->Add(this->newpin);
			this->panel11->Controls->Add(this->old);
			this->panel11->Controls->Add(this->pen);
			this->panel11->Controls->Add(this->enterpin);
			this->panel11->Controls->Add(this->receipt);
			this->panel11->Controls->Add(this->changepin);
			this->panel11->Controls->Add(this->withcash);
			this->panel11->Controls->Add(this->deposit);
			this->panel11->Controls->Add(this->balance);
			this->panel11->Controls->Add(this->loan);
			this->panel11->Controls->Add(this->screen);
			this->panel11->Location = System::Drawing::Point(37, 90);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(345, 176);
			this->panel11->TabIndex = 2;
			// 
			// insert
			// 
			this->insert->Location = System::Drawing::Point(89, 30);
			this->insert->Multiline = true;
			this->insert->Name = L"insert";
			this->insert->ReadOnly = true;
			this->insert->Size = System::Drawing::Size(168, 20);
			this->insert->TabIndex = 14;
			// 
			// confirm1
			// 
			this->confirm1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->confirm1->Location = System::Drawing::Point(128, 128);
			this->confirm1->Name = L"confirm1";
			this->confirm1->Size = System::Drawing::Size(75, 23);
			this->confirm1->TabIndex = 13;
			this->confirm1->Text = L"Confirm";
			this->confirm1->UseVisualStyleBackColor = true;
			this->confirm1->Click += gcnew System::EventHandler(this, &MyForm::confirm1_Click);
			// 
			// successful
			// 
			this->successful->Location = System::Drawing::Point(89, 66);
			this->successful->Multiline = true;
			this->successful->Name = L"successful";
			this->successful->ReadOnly = true;
			this->successful->Size = System::Drawing::Size(168, 74);
			this->successful->TabIndex = 12;
			this->successful->Text = L"Your request has been processed,you will get a notification message soon.For more"
				L" information go to the ODA-Bank nearby";
			this->successful->TextChanged += gcnew System::EventHandler(this, &MyForm::successful_TextChanged);
			// 
			// confirm
			// 
			this->confirm->Location = System::Drawing::Point(89, 77);
			this->confirm->Name = L"confirm";
			this->confirm->Size = System::Drawing::Size(168, 20);
			this->confirm->TabIndex = 11;
			this->confirm->Text = L"Re-enter";
			this->confirm->TextChanged += gcnew System::EventHandler(this, &MyForm::confirm_TextChanged);
			// 
			// newpin
			// 
			this->newpin->Location = System::Drawing::Point(89, 60);
			this->newpin->Name = L"newpin";
			this->newpin->Size = System::Drawing::Size(168, 20);
			this->newpin->TabIndex = 10;
			this->newpin->Text = L"New PIN";
			// 
			// old
			// 
			this->old->Location = System::Drawing::Point(89, 40);
			this->old->Name = L"old";
			this->old->Size = System::Drawing::Size(168, 20);
			this->old->TabIndex = 9;
			this->old->Text = L"Old PIN";
			// 
			// pen
			// 
			this->pen->Location = System::Drawing::Point(89, 19);
			this->pen->Name = L"pen";
			this->pen->ReadOnly = true;
			this->pen->Size = System::Drawing::Size(168, 20);
			this->pen->TabIndex = 8;
			this->pen->Text = L"Please Enter Your PIN number";
			this->pen->TextChanged += gcnew System::EventHandler(this, &MyForm::pen_TextChanged);
			// 
			// enterpin
			// 
			this->enterpin->BackColor = System::Drawing::SystemColors::HotTrack;
			this->enterpin->Location = System::Drawing::Point(106, 54);
			this->enterpin->Multiline = true;
			this->enterpin->Name = L"enterpin";
			this->enterpin->Size = System::Drawing::Size(133, 53);
			this->enterpin->TabIndex = 7;
			// 
			// receipt
			// 
			this->receipt->BackColor = System::Drawing::SystemColors::Highlight;
			this->receipt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"receipt.BackgroundImage")));
			this->receipt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->receipt->Location = System::Drawing::Point(3, 66);
			this->receipt->Name = L"receipt";
			this->receipt->Size = System::Drawing::Size(46, 41);
			this->receipt->TabIndex = 6;
			this->receipt->UseVisualStyleBackColor = false;
			this->receipt->Click += gcnew System::EventHandler(this, &MyForm::receipt_Click);
			// 
			// changepin
			// 
			this->changepin->BackColor = System::Drawing::SystemColors::Highlight;
			this->changepin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"changepin.BackgroundImage")));
			this->changepin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->changepin->Location = System::Drawing::Point(3, 113);
			this->changepin->Name = L"changepin";
			this->changepin->Size = System::Drawing::Size(46, 41);
			this->changepin->TabIndex = 5;
			this->changepin->UseVisualStyleBackColor = false;
			this->changepin->Click += gcnew System::EventHandler(this, &MyForm::changepin_Click);
			// 
			// withcash
			// 
			this->withcash->BackColor = System::Drawing::SystemColors::Highlight;
			this->withcash->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"withcash.BackgroundImage")));
			this->withcash->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->withcash->Location = System::Drawing::Point(3, 19);
			this->withcash->Name = L"withcash";
			this->withcash->Size = System::Drawing::Size(46, 41);
			this->withcash->TabIndex = 4;
			this->withcash->UseVisualStyleBackColor = false;
			this->withcash->Click += gcnew System::EventHandler(this, &MyForm::withcash_Click);
			// 
			// deposit
			// 
			this->deposit->BackColor = System::Drawing::SystemColors::Highlight;
			this->deposit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deposit.BackgroundImage")));
			this->deposit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->deposit->Location = System::Drawing::Point(292, 66);
			this->deposit->Name = L"deposit";
			this->deposit->Size = System::Drawing::Size(46, 41);
			this->deposit->TabIndex = 3;
			this->deposit->UseVisualStyleBackColor = false;
			this->deposit->Click += gcnew System::EventHandler(this, &MyForm::deposit_Click);
			// 
			// balance
			// 
			this->balance->BackColor = System::Drawing::SystemColors::Highlight;
			this->balance->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"balance.BackgroundImage")));
			this->balance->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->balance->Location = System::Drawing::Point(292, 113);
			this->balance->Name = L"balance";
			this->balance->Size = System::Drawing::Size(46, 41);
			this->balance->TabIndex = 2;
			this->balance->UseVisualStyleBackColor = false;
			this->balance->Click += gcnew System::EventHandler(this, &MyForm::balance_Click);
			// 
			// loan
			// 
			this->loan->BackColor = System::Drawing::SystemColors::Highlight;
			this->loan->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loan.BackgroundImage")));
			this->loan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->loan->Location = System::Drawing::Point(292, 19);
			this->loan->Name = L"loan";
			this->loan->Size = System::Drawing::Size(46, 41);
			this->loan->TabIndex = 1;
			this->loan->UseVisualStyleBackColor = false;
			this->loan->Click += gcnew System::EventHandler(this, &MyForm::loan_Click);
			// 
			// screen
			// 
			this->screen->Location = System::Drawing::Point(54, -2);
			this->screen->Name = L"screen";
			this->screen->ReadOnly = true;
			this->screen->Size = System::Drawing::Size(232, 176);
			this->screen->TabIndex = 0;
			this->screen->Text = L"";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(74, 354);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(303, 19);
			this->panel2->TabIndex = 6;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(396, 287);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(46, 39);
			this->panel5->TabIndex = 7;
			// 
			// preface
			// 
			this->preface->BackColor = System::Drawing::Color::Transparent;
			this->preface->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"preface.BackgroundImage")));
			this->preface->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->preface->Location = System::Drawing::Point(-31, -71);
			this->preface->Name = L"preface";
			this->preface->Size = System::Drawing::Size(686, 416);
			this->preface->TabIndex = 9;
			this->preface->TabStop = false;
			this->preface->Click += gcnew System::EventHandler(this, &MyForm::preface_Click);
			// 
			// pan
			// 
			this->pan->Controls->Add(this->loadersmall);
			this->pan->Location = System::Drawing::Point(243, 374);
			this->pan->Name = L"pan";
			this->pan->Size = System::Drawing::Size(230, 15);
			this->pan->TabIndex = 10;
			// 
			// loadersmall
			// 
			this->loadersmall->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->loadersmall->Location = System::Drawing::Point(3, 4);
			this->loadersmall->Name = L"loadersmall";
			this->loadersmall->Size = System::Drawing::Size(1, 15);
			this->loadersmall->TabIndex = 11;
			// 
			// timer
			// 
			this->timer->Interval = 40;
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// but
			// 
			this->but->Location = System::Drawing::Point(318, 307);
			this->but->Name = L"but";
			this->but->Size = System::Drawing::Size(82, 27);
			this->but->TabIndex = 12;
			this->but->Text = L"Sign in";
			this->but->UseVisualStyleBackColor = true;
			this->but->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// rich
			// 
			this->rich->AutoSize = true;
			this->rich->BackColor = System::Drawing::Color::Transparent;
			this->rich->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rich->ForeColor = System::Drawing::SystemColors::Control;
			this->rich->Location = System::Drawing::Point(335, 349);
			this->rich->Name = L"rich";
			this->rich->Size = System::Drawing::Size(0, 17);
			this->rich->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(695, 413);
			this->Controls->Add(this->rich);
			this->Controls->Add(this->but);
			this->Controls->Add(this->pan);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel11);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ODA";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ODA BANK";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel3->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->preface))->EndInit();
			this->pan->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult iExit;
		iExit = MessageBox::Show("Confirm if you want to cancel", "ATM system", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (iExit == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	private: System::Void EnableButton() //(Function 1)
	{
		loan->Enabled = false();
		deposit->Enabled = false();
		balance->Enabled = false();
		changepin->Enabled = false();
		withcash->Enabled = false();
		receipt->Enabled = false();

		screen->Clear();

		enterpin->Text = "";
		enterpin->Visible = true;
		enterpin->Focus();
		old->Visible = false();
		newpin->Visible = false();
		successful->Visible = false();
		confirm->Visible = false();
		confirm1->Visible = false();
		insert->Visible = false();
		
	}
	private: System::Void balanc() //(Function 2)
	{
		
		if (pinno = 1234)
		{
			screen->Clear();
			screen->AppendText("\t\tAccount No : 10002928\n\n");
			screen->AppendText("Balance is" + "\t\t\t" + "$" + balancefor1 + "\n\n");
		}
		if (pinno == 4321)
		{
			screen->Clear();
			screen->AppendText("\t\tAccount No : 10002829\n\n");
			screen->AppendText("Balance is" + "\t\t\t"  + "$57.65"+"\n\n");
		}
		if (pinno == 0000)
		{
			screen->Clear();
			screen->AppendText("\t\tAccount No : 10008229\n\n");
			screen->AppendText("Balance is" + "\t\t\t"  + "$9700000.00" +"\n\n");
		}
	}
	private: System::Void histor() //(Function 3)
	{
		if (pinno = 1234)
		{
			screen->Clear();
			screen->AppendText("\t\tAccount No : 10002928\n\n");
			screen->AppendText("" + "\t\t\t" + "$" + balancefor1 + "\n\n");
			screen->AppendText("Land Tax" + "\t\t\t" + "$1221.00" + "\n\n");
			screen->AppendText("School Fee" + "\t\t\t" + "$3300.00" + "\n\n");
			screen->AppendText("DSTv Payment" + "\t\t\t" + "$101.00" + "\n\n");
			screen->AppendText("ELPA Payment" + "\t\t\t" + "$55.00" + "\n\n");
		}

		if (pinno = 4321)
		{
			screen->Clear();
			screen->AppendText("\t\tAccount No : 10002829\n\n");
			screen->AppendText("" + "\t\t\t" + "$57.65" + "\n\n");
			screen->AppendText("Land Tax" + "\t\t\t" + "$1021.00" + "\n\n");
			screen->AppendText("School Fee" + "\t\t\t" + "$1871.00" + "\n\n");
			screen->AppendText("DSTv Payment" + "\t\t\t" + "$4521.00" + "\n\n");
			screen->AppendText("ELPA Payment" + "\t\t\t" + "$121.00" + "\n\n"); 
			screen->AppendText("WiFi charge" + "\t\t\t" + "$150.00" + "\n\n");

		}
		if (pinno = 0000)
		{
			screen->Clear();
			screen->AppendText("\t\tAccount No : 10008229\n\n");
			screen->AppendText("" + "\t\t\t" + "$9700000.00" + "\n\n");
			screen->AppendText("Land Tax" + "\t\t\t" + "$4521.00" + "\n\n");
			screen->AppendText("School Fee" + "\t\t\t" + "$1521.00" + "\n\n");
			screen->AppendText("DSTv Payment" + "\t\t\t" + "$1321.00" + "\n\n");
			screen->AppendText("ELPA Payment" + "\t\t\t" + "$1561.00" + "\n\n");
			screen->AppendText("WiFi charge" + "\t\t\t" + "$678.00" + "\n\n");


		}

	}

private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableButton();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	EnableButton();
}


private: System::Void n1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (enterpin->Text == "")
	{
		enterpin->Text = "1";
	}
	else
	{
		enterpin->Text = enterpin->Text + 1;
	}

}

private: System::Void n2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (enterpin->Text == "")
	{
		enterpin->Text = "2";
	}
	else
	{
		enterpin->Text = enterpin->Text + 2;
	}


}
private: System::Void n3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (enterpin->Text == "")
	{
		enterpin->Text = "3";
	}
	else
	{
		enterpin->Text = enterpin->Text + 3;
	}

}
private: System::Void n4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (enterpin->Text == "")
	{
		enterpin->Text = "4";
	}
	else
	{
		enterpin->Text = enterpin->Text + 4;
	}

}
private: System::Void n5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (enterpin->Text == "")
	{
		enterpin->Text = "5";
	}
	else
	{
		enterpin->Text = enterpin->Text + 5;
	}

}
private: System::Void n9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (enterpin->Text == "")
	{
		enterpin->Text = "9";
	}
	else
	{
		enterpin->Text = enterpin->Text + 9;
	}

}
private: System::Void n8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (enterpin->Text == "")
	{
		enterpin->Text = "8";
	}
	else
	{
		enterpin->Text = enterpin->Text + 8;
	}

}
private: System::Void n6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (enterpin->Text == "")
	{
		enterpin->Text = "6";
	}
	else
	{
		enterpin->Text = enterpin->Text + 6;
	}

}
private: System::Void n7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (enterpin->Text == "")
	{
		enterpin->Text = "7";
	}
	else
	{
		enterpin->Text = enterpin->Text + 7;
	}

}
private: System::Void n0_Click(System::Object^ sender, System::EventArgs^ e) {
	if (enterpin->Text == "")
	{
		enterpin->Text = "0";
	}
	else
	{
		enterpin->Text = enterpin->Text + 0;
	}

}
private: System::Void enter_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((enterpin->Text == "1234") || (enterpin->Text == "4321") || (enterpin->Text == "0000"))
	{
		pinno = int::Parse(enterpin->Text);
	loan->Enabled = true;
	deposit->Enabled = true;
	balance->Enabled = true;
	changepin->Enabled = true;
	withcash->Enabled = true;
	receipt->Enabled = true;

	enterpin->Visible = false();
	pen->Visible = false();
	
	
	

	screen->AppendText("WELCOME TO ODA BANK\n\n");
	screen->AppendText("Withdraw Cash" + "\t\t" + "Loan" + "\n\n\n\n");
	screen->AppendText("Recent history" + "\t\t" + "Deposit" + "\n\n\n\n");
	screen->AppendText("Change PIN" + "\t\t" + "Balance" + "\n\n\n\n");
    }
	else {
		enterpin->Text = "Invalid PIN Number";
		enterpin->Focus();
		loan->Enabled = false();
		deposit->Enabled = false();
		balance->Enabled = false();
		changepin->Enabled = false();
		withcash->Enabled = false();
		receipt->Enabled = false();
	}
	


	if ((enterpin->Text != "" && screen->Text == "Loan"))
	{
		screen->Text = "";
		float loanreq = 0;
		screen->AppendText("Loan Cash confirmed and granted");
		enterpin->Text = "";
		float balancefor1 = 14521.00;
		enterpin->Text = "Your Loan request has been approved";
		
	}


	if ((enterpin->Text != "" && screen->Text == "Deposit"))
	{
		screen->Text = "";
		screen->AppendText(" Cash Deposit is confirmed");
		enterpin->Text = "";
		enterpin->Text = "You have successfully deposited";
		

	}
	//if ((enterpin->Text != "" && screen->Text == "Please enter amount"))
	//{
		//screen->Text = "";
		//screen->AppendText("Cash withdrawal confirmed");
		//enterpin->Text = "";
		//enterpin->Text = "Please take Your Money";


	//}
 void withdraw(float amount) {
    if (amount > this->balancefor1) {
        cout << "Insufficient funds!" << endl;
    } else {
        this->balancefor1 -= amount;
        cout << "Withdrawal of " << amount << " successful. New balance is " << this->balancefor1 << endl;
     }
    }	
	

}
private: System::Void loan_Click(System::Object^ sender, System::EventArgs^ e) {
	screen->Clear();
	screen->AppendText("Loan");
	enterpin->Visible = true;
	enterpin->Clear();
	enterpin->Focus();
	

}
private: System::Void deposit_Click(System::Object^ sender, System::EventArgs^ e) {
	screen->Clear();
	screen->AppendText("Deposit");
	 enterpin->Visible = true;
	enterpin->Clear();
	enterpin->Focus();
	


}
private: System::Void balance_Click(System::Object^ sender, System::EventArgs^ e) {
	balanc();
	
}
private: System::Void receipt_Click(System::Object^ sender, System::EventArgs^ e) {
	histor();
}
	private: System::Void changepin_Click(System::Object^ sender, System::EventArgs^ e) {

		screen->Clear();
		screen->AppendText("Please insert your old PIN, New PIN and then Re-enter your New PIN respectively. Press confirm when you finish this task");
		old->Visible = true;
	
		old->Clear();
		old->Focus();

		newpin->Visible = true;
		newpin->AppendText("New PIN");
		newpin->Clear();
		newpin->Focus();

		confirm->Visible = true;
		confirm->AppendText("Re-enter");
		confirm->Clear();
		confirm->Focus();

		confirm1->Visible = true;
		confirm1->Focus();

		loan->Enabled = false();
		deposit->Enabled = false();
		balance->Enabled = false();
		changepin->Enabled = false(); 
		withcash->Enabled = false();
		receipt->Enabled = false();

		
	}
private: System::Void confirm_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void confirm1_Click(System::Object^ sender, System::EventArgs^ e) {
	screen->Clear();
	old->Visible = false();
	newpin->Visible = false();
	confirm->Visible = false();
	confirm1->Visible = false();
	successful->Visible = true;





}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void preface_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void start_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void withcash_Click(System::Object^ sender, System::EventArgs^ e) {
	screen->Clear();
	screen->AppendText("Please enter amount");
	enterpin->Visible = true;
	

	enterpin->Clear();
	enterpin->Focus();

}
	   private: System::Void preface_Click(System::Object^ sender, System::EventArgs^ e) {
		   rich->Visible=false();
	   }
private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {

	loadersmall->Width += 3;
	if (loadersmall->Width >= 230)
	{
		timer->Stop();
		this->preface->Hide();
		this->pan->Hide();
		this->loadersmall->Hide();
		this->rich->Hide();
		this->but->Hide();
		
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->timer->Start();
	rich->Visible = true;
	rich->AppendText("Loading");
	//label1->Text = "Loading";
}

private: System::Void rich_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void confirm2_Click(System::Object^ sender, System::EventArgs^ e) {
	insert->AppendText("Cash withdrawal confirmed,Please take tour Money");
}
private: System::Void pen_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void successful_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
    
};
}