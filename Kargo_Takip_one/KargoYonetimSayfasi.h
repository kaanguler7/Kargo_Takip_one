#pragma once

namespace KargoTakipone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for KargoYonetimSayfasi
	/// </summary>
	public ref class KargoYonetimSayfasi : public System::Windows::Forms::Form
	{
	public:
		KargoYonetimSayfasi(void)
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
		~KargoYonetimSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ YonetimtextBox4;
	protected:

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ YonetimtextBox3;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ YonetimtextBox1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ YonetimtextBox2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ GonderilecekUrunAdiYonetimTextBox;
	private: System::Windows::Forms::TextBox^ GondericiAdresYonetimTextBox;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ MusteriSifreLabel;
	private: System::Windows::Forms::TextBox^ GondericiSoyadiYonetimTextBox;

	private: System::Windows::Forms::Label^ MusteriKullaniciAdiLabel;
	private: System::Windows::Forms::TextBox^ GondericiAdiYonetimTextBox;

	private: System::Windows::Forms::TextBox^ AliciAdresYonetimTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ AlicisoyadiYonetimTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ AliciAdiYonetimTextBox;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ YonetimtextBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ImageList^ ýmageList1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ KargoBulBUtton;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button12;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KargoYonetimSayfasi::typeid));
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->YonetimtextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->YonetimtextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->YonetimtextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->YonetimtextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->GonderilecekUrunAdiYonetimTextBox = (gcnew System::Windows::Forms::TextBox());
			this->GondericiAdresYonetimTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MusteriSifreLabel = (gcnew System::Windows::Forms::Label());
			this->GondericiSoyadiYonetimTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MusteriKullaniciAdiLabel = (gcnew System::Windows::Forms::Label());
			this->GondericiAdiYonetimTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AliciAdresYonetimTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AlicisoyadiYonetimTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AliciAdiYonetimTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->YonetimtextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ýmageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->KargoBulBUtton = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label13->Location = System::Drawing::Point(78, 491);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(170, 29);
			this->label13->TabIndex = 73;
			this->label13->Text = L"Uzaklýk (km) :";
			// 
			// YonetimtextBox4
			// 
			this->YonetimtextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->YonetimtextBox4->Location = System::Drawing::Point(279, 486);
			this->YonetimtextBox4->Name = L"YonetimtextBox4";
			this->YonetimtextBox4->Size = System::Drawing::Size(212, 30);
			this->YonetimtextBox4->TabIndex = 72;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(128, 441);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 29);
			this->label8->TabIndex = 71;
			this->label8->Text = L"Ürün En :";
			// 
			// YonetimtextBox3
			// 
			this->YonetimtextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->YonetimtextBox3->Location = System::Drawing::Point(279, 439);
			this->YonetimtextBox3->Name = L"YonetimtextBox3";
			this->YonetimtextBox3->Size = System::Drawing::Size(212, 30);
			this->YonetimtextBox3->TabIndex = 70;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(115, 395);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 29);
			this->label7->TabIndex = 69;
			this->label7->Text = L"Ürün Boy :";
			// 
			// YonetimtextBox1
			// 
			this->YonetimtextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->YonetimtextBox1->Location = System::Drawing::Point(279, 393);
			this->YonetimtextBox1->Name = L"YonetimtextBox1";
			this->YonetimtextBox1->Size = System::Drawing::Size(212, 30);
			this->YonetimtextBox1->TabIndex = 68;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(40, 349);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(208, 29);
			this->label6->TabIndex = 67;
			this->label6->Text = L"Ürün Kilosu (kg):";
			// 
			// YonetimtextBox2
			// 
			this->YonetimtextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->YonetimtextBox2->Location = System::Drawing::Point(279, 348);
			this->YonetimtextBox2->Name = L"YonetimtextBox2";
			this->YonetimtextBox2->Size = System::Drawing::Size(212, 30);
			this->YonetimtextBox2->TabIndex = 66;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(2, 295);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 29);
			this->label5->TabIndex = 65;
			this->label5->Text = L"Gönderilecek Ürün :";
			// 
			// GonderilecekUrunAdiYonetimTextBox
			// 
			this->GonderilecekUrunAdiYonetimTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->GonderilecekUrunAdiYonetimTextBox->Location = System::Drawing::Point(279, 294);
			this->GonderilecekUrunAdiYonetimTextBox->Name = L"GonderilecekUrunAdiYonetimTextBox";
			this->GonderilecekUrunAdiYonetimTextBox->Size = System::Drawing::Size(212, 30);
			this->GonderilecekUrunAdiYonetimTextBox->TabIndex = 64;
			// 
			// GondericiAdresYonetimTextBox
			// 
			this->GondericiAdresYonetimTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->GondericiAdresYonetimTextBox->Location = System::Drawing::Point(279, 198);
			this->GondericiAdresYonetimTextBox->Multiline = true;
			this->GondericiAdresYonetimTextBox->Name = L"GondericiAdresYonetimTextBox";
			this->GondericiAdresYonetimTextBox->Size = System::Drawing::Size(212, 73);
			this->GondericiAdresYonetimTextBox->TabIndex = 63;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(32, 198);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 29);
			this->label1->TabIndex = 62;
			this->label1->Text = L"Gönderici Adres :";
			// 
			// MusteriSifreLabel
			// 
			this->MusteriSifreLabel->AutoSize = true;
			this->MusteriSifreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->MusteriSifreLabel->Location = System::Drawing::Point(40, 148);
			this->MusteriSifreLabel->Name = L"MusteriSifreLabel";
			this->MusteriSifreLabel->Size = System::Drawing::Size(208, 26);
			this->MusteriSifreLabel->TabIndex = 61;
			this->MusteriSifreLabel->Text = L"Gönderici Soyadý :";
			// 
			// GondericiSoyadiYonetimTextBox
			// 
			this->GondericiSoyadiYonetimTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->GondericiSoyadiYonetimTextBox->Location = System::Drawing::Point(279, 148);
			this->GondericiSoyadiYonetimTextBox->Name = L"GondericiSoyadiYonetimTextBox";
			this->GondericiSoyadiYonetimTextBox->Size = System::Drawing::Size(212, 30);
			this->GondericiSoyadiYonetimTextBox->TabIndex = 60;
			// 
			// MusteriKullaniciAdiLabel
			// 
			this->MusteriKullaniciAdiLabel->AutoSize = true;
			this->MusteriKullaniciAdiLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->MusteriKullaniciAdiLabel->Location = System::Drawing::Point(62, 93);
			this->MusteriKullaniciAdiLabel->Name = L"MusteriKullaniciAdiLabel";
			this->MusteriKullaniciAdiLabel->Size = System::Drawing::Size(186, 29);
			this->MusteriKullaniciAdiLabel->TabIndex = 59;
			this->MusteriKullaniciAdiLabel->Text = L"Gönderici Adý :";
			// 
			// GondericiAdiYonetimTextBox
			// 
			this->GondericiAdiYonetimTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->GondericiAdiYonetimTextBox->Location = System::Drawing::Point(279, 93);
			this->GondericiAdiYonetimTextBox->Name = L"GondericiAdiYonetimTextBox";
			this->GondericiAdiYonetimTextBox->Size = System::Drawing::Size(212, 30);
			this->GondericiAdiYonetimTextBox->TabIndex = 58;
			// 
			// AliciAdresYonetimTextBox
			// 
			this->AliciAdresYonetimTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->AliciAdresYonetimTextBox->Location = System::Drawing::Point(737, 197);
			this->AliciAdresYonetimTextBox->Multiline = true;
			this->AliciAdresYonetimTextBox->Name = L"AliciAdresYonetimTextBox";
			this->AliciAdresYonetimTextBox->Size = System::Drawing::Size(212, 73);
			this->AliciAdresYonetimTextBox->TabIndex = 79;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(555, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 29);
			this->label2->TabIndex = 78;
			this->label2->Text = L"Alýcý Adres :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(555, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 26);
			this->label3->TabIndex = 77;
			this->label3->Text = L"Alýcý Soyadý :";
			// 
			// AlicisoyadiYonetimTextBox
			// 
			this->AlicisoyadiYonetimTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->AlicisoyadiYonetimTextBox->Location = System::Drawing::Point(737, 147);
			this->AlicisoyadiYonetimTextBox->Name = L"AlicisoyadiYonetimTextBox";
			this->AlicisoyadiYonetimTextBox->Size = System::Drawing::Size(212, 30);
			this->AlicisoyadiYonetimTextBox->TabIndex = 76;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(585, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 29);
			this->label4->TabIndex = 75;
			this->label4->Text = L"Alýcý Adý :";
			// 
			// AliciAdiYonetimTextBox
			// 
			this->AliciAdiYonetimTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->AliciAdiYonetimTextBox->Location = System::Drawing::Point(737, 92);
			this->AliciAdiYonetimTextBox->Name = L"AliciAdiYonetimTextBox";
			this->AliciAdiYonetimTextBox->Size = System::Drawing::Size(212, 30);
			this->AliciAdiYonetimTextBox->TabIndex = 74;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label9->Location = System::Drawing::Point(557, 382);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(150, 29);
			this->label9->TabIndex = 81;
			this->label9->Text = L"Kargo NO : ";
			// 
			// YonetimtextBox5
			// 
			this->YonetimtextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->YonetimtextBox5->Location = System::Drawing::Point(737, 381);
			this->YonetimtextBox5->Name = L"YonetimtextBox5";
			this->YonetimtextBox5->Size = System::Drawing::Size(212, 30);
			this->YonetimtextBox5->TabIndex = 80;
			// 
			// button1
			// 
			this->button1->ImageIndex = 0;
			this->button1->ImageList = this->ýmageList1;
			this->button1->Location = System::Drawing::Point(497, 348);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(54, 30);
			this->button1->TabIndex = 82;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button1_Click);
			// 
			// ýmageList1
			// 
			this->ýmageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ýmageList1.ImageStream")));
			this->ýmageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->ýmageList1->Images->SetKeyName(0, L"güncelleme_icon.jpg");
			// 
			// button2
			// 
			this->button2->ImageIndex = 0;
			this->button2->ImageList = this->ýmageList1;
			this->button2->Location = System::Drawing::Point(497, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(54, 30);
			this->button2->TabIndex = 83;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button2_Click);
			// 
			// button3
			// 
			this->button3->ImageIndex = 0;
			this->button3->ImageList = this->ýmageList1;
			this->button3->Location = System::Drawing::Point(495, 200);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(54, 34);
			this->button3->TabIndex = 84;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button3_Click);
			// 
			// button4
			// 
			this->button4->ImageIndex = 0;
			this->button4->ImageList = this->ýmageList1;
			this->button4->Location = System::Drawing::Point(495, 151);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(54, 27);
			this->button4->TabIndex = 85;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button4_Click);
			// 
			// button5
			// 
			this->button5->ImageIndex = 0;
			this->button5->ImageList = this->ýmageList1;
			this->button5->Location = System::Drawing::Point(495, 92);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(54, 30);
			this->button5->TabIndex = 86;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button5_Click);
			// 
			// button6
			// 
			this->button6->ImageIndex = 0;
			this->button6->ImageList = this->ýmageList1;
			this->button6->Location = System::Drawing::Point(495, 393);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(54, 30);
			this->button6->TabIndex = 87;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button6_Click);
			// 
			// button7
			// 
			this->button7->ImageIndex = 0;
			this->button7->ImageList = this->ýmageList1;
			this->button7->Location = System::Drawing::Point(495, 440);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(54, 30);
			this->button7->TabIndex = 88;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button7_Click);
			// 
			// button8
			// 
			this->button8->ImageIndex = 0;
			this->button8->ImageList = this->ýmageList1;
			this->button8->Location = System::Drawing::Point(497, 486);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(54, 30);
			this->button8->TabIndex = 89;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button8_Click);
			// 
			// button9
			// 
			this->button9->ImageIndex = 0;
			this->button9->ImageList = this->ýmageList1;
			this->button9->Location = System::Drawing::Point(955, 92);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(54, 30);
			this->button9->TabIndex = 90;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button9_Click);
			// 
			// button10
			// 
			this->button10->ImageIndex = 0;
			this->button10->ImageList = this->ýmageList1;
			this->button10->Location = System::Drawing::Point(955, 148);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(54, 30);
			this->button10->TabIndex = 91;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button10_Click);
			// 
			// button11
			// 
			this->button11->ImageIndex = 0;
			this->button11->ImageList = this->ýmageList1;
			this->button11->Location = System::Drawing::Point(955, 197);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(54, 30);
			this->button11->TabIndex = 92;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button11_Click);
			// 
			// KargoBulBUtton
			// 
			this->KargoBulBUtton->BackColor = System::Drawing::Color::DarkCyan;
			this->KargoBulBUtton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KargoBulBUtton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KargoBulBUtton->Location = System::Drawing::Point(737, 433);
			this->KargoBulBUtton->Name = L"KargoBulBUtton";
			this->KargoBulBUtton->Size = System::Drawing::Size(212, 63);
			this->KargoBulBUtton->TabIndex = 93;
			this->KargoBulBUtton->Text = L"Bul";
			this->KargoBulBUtton->UseVisualStyleBackColor = false;
			this->KargoBulBUtton->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::KargoBulBUtton_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label10->Location = System::Drawing::Point(596, 313);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 29);
			this->label10->TabIndex = 94;
			// 
			// button12
			// 
			this->button12->ImageIndex = 0;
			this->button12->ImageList = this->ýmageList1;
			this->button12->Location = System::Drawing::Point(949, 316);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(54, 30);
			this->button12->TabIndex = 95;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &KargoYonetimSayfasi::button12_Click);
			// 
			// KargoYonetimSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1015, 534);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->KargoBulBUtton);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->YonetimtextBox5);
			this->Controls->Add(this->AliciAdresYonetimTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->AlicisoyadiYonetimTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->AliciAdiYonetimTextBox);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->YonetimtextBox4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->YonetimtextBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->YonetimtextBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->YonetimtextBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->GonderilecekUrunAdiYonetimTextBox);
			this->Controls->Add(this->GondericiAdresYonetimTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MusteriSifreLabel);
			this->Controls->Add(this->GondericiSoyadiYonetimTextBox);
			this->Controls->Add(this->MusteriKullaniciAdiLabel);
			this->Controls->Add(this->GondericiAdiYonetimTextBox);
			this->Name = L"KargoYonetimSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KargoYonetimSayfasi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
			SqlConnection^ con = gcnew SqlConnection(connectionString);
			con->Open();

			String^ query = "UPDATE Gonderi_Olusturma SET GondericiAdi = @GondericiAdi WHERE UrunTakipNo = @UrunTakipNo";
			SqlCommand^ cmd = gcnew SqlCommand(query, con);

			cmd->Parameters->AddWithValue("@GondericiAdi", this->GondericiAdiYonetimTextBox->Text);
			cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

			cmd->ExecuteNonQuery();
			MessageBox::Show("Gönderici adý baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

			con->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ query = "UPDATE Gonderi_Olusturma SET GondericiSoyadi = @GondericiSoyadi WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);

		cmd->Parameters->AddWithValue("@GondericiSoyadi", this->GondericiSoyadiYonetimTextBox->Text);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Gönderici soyadý baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ query = "UPDATE Gonderi_Olusturma SET GondericiAdres = @GondericiAdres WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);

		cmd->Parameters->AddWithValue("@GondericiAdres", this->GondericiAdresYonetimTextBox->Text);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Gönderici adres baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ query = "UPDATE Gonderi_Olusturma SET AliciAdi = @AliciAdi WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);

		cmd->Parameters->AddWithValue("@AliciAdi", this->AliciAdiYonetimTextBox->Text);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Alýcý adý baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ query = "UPDATE Gonderi_Olusturma SET AliciSoyadi = @AliciSoyadi WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);

		cmd->Parameters->AddWithValue("@AliciSoyadi", this->AlicisoyadiYonetimTextBox->Text);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Alýcý soyadý baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ query = "UPDATE Gonderi_Olusturma SET AliciAdres = @AliciAdres WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);

		cmd->Parameters->AddWithValue("@AliciAdres", this->AliciAdresYonetimTextBox->Text);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Alýcý adres baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ query = "UPDATE Gonderi_Olusturma SET GonderilecekUrun = @GonderilecekUrun WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);

		cmd->Parameters->AddWithValue("@GonderilecekUrun", this->GonderilecekUrunAdiYonetimTextBox->Text);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Gönderilecek ürün baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ query = "UPDATE Gonderi_Olusturma SET UrunKilosu = @UrunKilosu WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);

		cmd->Parameters->AddWithValue("@UrunKilosu", this->YonetimtextBox2->Text);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Ürün kilosu baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ query = "UPDATE Gonderi_Olusturma SET UrunBoy = @UrunBoy WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);

		cmd->Parameters->AddWithValue("@UrunBoy", this->YonetimtextBox1->Text);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Ürün boyu baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ query = "UPDATE Gonderi_Olusturma SET UrunEn = @UrunEn WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);

		cmd->Parameters->AddWithValue("@UrunEn", this->YonetimtextBox3->Text);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Ürün eni baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		String^ query = "UPDATE Gonderi_Olusturma SET UzaklikKM = @UzaklikKM WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);

		cmd->Parameters->AddWithValue("@UzaklikKM", this->YonetimtextBox4->Text);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		cmd->ExecuteNonQuery();
		MessageBox::Show("Uzaklýk baþarýyla güncellendi!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void KargoBulBUtton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Veritabaný baðlantýsý
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		// Kargo numarasýna göre veri çekme
		String^ query = "SELECT * FROM Gonderi_Olusturma WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		SqlDataReader^ reader = cmd->ExecuteReader();
		if (reader->Read()) {
			// TextBox'lara veri aktar
			this->GondericiAdiYonetimTextBox->Text = reader["GondericiAdi"]->ToString();
			this->GondericiSoyadiYonetimTextBox->Text = reader["GondericiSoyadi"]->ToString();
			this->GondericiAdresYonetimTextBox->Text = reader["GondericiAdres"]->ToString();
			this->AliciAdiYonetimTextBox->Text = reader["AliciAdi"]->ToString();
			this->AlicisoyadiYonetimTextBox->Text = reader["AliciSoyadi"]->ToString();
			this->AliciAdresYonetimTextBox->Text = reader["AliciAdres"]->ToString();
			this->GonderilecekUrunAdiYonetimTextBox->Text = reader["GonderilecekUrun"]->ToString();
			this->YonetimtextBox2->Text = reader["UrunKilosu"]->ToString();
			this->YonetimtextBox1->Text = reader["UrunBoy"]->ToString();
			this->YonetimtextBox3->Text = reader["UrunEn"]->ToString();
			this->YonetimtextBox4->Text = reader["UzaklikKM"]->ToString();
		}
		else {
			MessageBox::Show("Kargo bulunamadý!", "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// TextBox'lardan deðerleri al
		double Kilo = double::Parse(this->YonetimtextBox2->Text);
		double Boy = double::Parse(this->YonetimtextBox1->Text);
		double En = double::Parse(this->YonetimtextBox3->Text);
		double Uzaklik = double::Parse(this->YonetimtextBox4->Text);

		// Katsayý (KMFiyati)
		double KMFiyati = 5.8; // Örnek bir katsayý deðeri (iþ kurallarýnýza göre deðiþtirilebilir)

		// Ücret hesaplama
		double Ucret = ((Kilo * Boy * En * Uzaklik * KMFiyati) / 1000);

		// Yeni ücreti label10 üzerinde göster
		this->label10->Text = "Yeni Ücret: " + Ucret.ToString("C");

		// SQL baðlantýsý
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		// SQL UPDATE sorgusu
		String^ query = "UPDATE Gonderi_Olusturma SET UrunUcret = @UrunUcret WHERE UrunTakipNo = @UrunTakipNo";
		SqlCommand^ cmd = gcnew SqlCommand(query, con);
		cmd->Parameters->AddWithValue("@UrunUcret", Ucret);
		cmd->Parameters->AddWithValue("@UrunTakipNo", this->YonetimtextBox5->Text);

		int rowsAffected = cmd->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Ücret baþarýyla güncellendi.", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Ücret güncellenirken bir hata oluþtu.", "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
