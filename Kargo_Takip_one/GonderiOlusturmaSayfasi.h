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
	/// Summary for GonderiOlusturmaSayfasi
	/// </summary>
	public ref class GonderiOlusturmaSayfasi : public System::Windows::Forms::Form
	{
	public:
		GonderiOlusturmaSayfasi(void)
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
		~GonderiOlusturmaSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ GondericiAdresTextBox;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ MusteriSifreLabel;
	private: System::Windows::Forms::TextBox^ GondericiSoyadiTextBox;

	private: System::Windows::Forms::Label^ MusteriKullaniciAdiLabel;
	private: System::Windows::Forms::TextBox^ GondericiAdiTextBox;
	private: System::Windows::Forms::TextBox^ AliciAdresTextBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ AlicisoyadiTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ AliciAdiTextBox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ GonderilecekUrunAdiTextBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ GonderiBitirButton;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ GonderiOlusturmaGeriButton;



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
			this->GondericiAdresTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MusteriSifreLabel = (gcnew System::Windows::Forms::Label());
			this->GondericiSoyadiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MusteriKullaniciAdiLabel = (gcnew System::Windows::Forms::Label());
			this->GondericiAdiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AliciAdresTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AlicisoyadiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AliciAdiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->GonderilecekUrunAdiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->GonderiBitirButton = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->GonderiOlusturmaGeriButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// GondericiAdresTextBox
			// 
			this->GondericiAdresTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->GondericiAdresTextBox->Location = System::Drawing::Point(271, 154);
			this->GondericiAdresTextBox->Multiline = true;
			this->GondericiAdresTextBox->Name = L"GondericiAdresTextBox";
			this->GondericiAdresTextBox->Size = System::Drawing::Size(212, 73);
			this->GondericiAdresTextBox->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(24, 173);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 29);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Gönderici Adres :";
			// 
			// MusteriSifreLabel
			// 
			this->MusteriSifreLabel->AutoSize = true;
			this->MusteriSifreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->MusteriSifreLabel->Location = System::Drawing::Point(24, 99);
			this->MusteriSifreLabel->Name = L"MusteriSifreLabel";
			this->MusteriSifreLabel->Size = System::Drawing::Size(208, 26);
			this->MusteriSifreLabel->TabIndex = 34;
			this->MusteriSifreLabel->Text = L"Gönderici Soyadý :";
			// 
			// GondericiSoyadiTextBox
			// 
			this->GondericiSoyadiTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->GondericiSoyadiTextBox->Location = System::Drawing::Point(271, 100);
			this->GondericiSoyadiTextBox->Name = L"GondericiSoyadiTextBox";
			this->GondericiSoyadiTextBox->Size = System::Drawing::Size(212, 30);
			this->GondericiSoyadiTextBox->TabIndex = 33;
			// 
			// MusteriKullaniciAdiLabel
			// 
			this->MusteriKullaniciAdiLabel->AutoSize = true;
			this->MusteriKullaniciAdiLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->MusteriKullaniciAdiLabel->Location = System::Drawing::Point(24, 24);
			this->MusteriKullaniciAdiLabel->Name = L"MusteriKullaniciAdiLabel";
			this->MusteriKullaniciAdiLabel->Size = System::Drawing::Size(186, 29);
			this->MusteriKullaniciAdiLabel->TabIndex = 32;
			this->MusteriKullaniciAdiLabel->Text = L"Gönderici Adý :";
			// 
			// GondericiAdiTextBox
			// 
			this->GondericiAdiTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->GondericiAdiTextBox->Location = System::Drawing::Point(271, 24);
			this->GondericiAdiTextBox->Name = L"GondericiAdiTextBox";
			this->GondericiAdiTextBox->Size = System::Drawing::Size(212, 30);
			this->GondericiAdiTextBox->TabIndex = 31;
			// 
			// AliciAdresTextBox
			// 
			this->AliciAdresTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->AliciAdresTextBox->Location = System::Drawing::Point(739, 154);
			this->AliciAdresTextBox->Multiline = true;
			this->AliciAdresTextBox->Name = L"AliciAdresTextBox";
			this->AliciAdresTextBox->Size = System::Drawing::Size(212, 73);
			this->AliciAdresTextBox->TabIndex = 42;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(557, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 29);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Alýcý Adres :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(557, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 26);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Alýcý Soyadý :";
			// 
			// AlicisoyadiTextBox
			// 
			this->AlicisoyadiTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->AlicisoyadiTextBox->Location = System::Drawing::Point(739, 100);
			this->AlicisoyadiTextBox->Name = L"AlicisoyadiTextBox";
			this->AlicisoyadiTextBox->Size = System::Drawing::Size(212, 30);
			this->AlicisoyadiTextBox->TabIndex = 39;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(587, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 29);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Alýcý Adý :";
			// 
			// AliciAdiTextBox
			// 
			this->AliciAdiTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->AliciAdiTextBox->Location = System::Drawing::Point(739, 25);
			this->AliciAdiTextBox->Name = L"AliciAdiTextBox";
			this->AliciAdiTextBox->Size = System::Drawing::Size(212, 30);
			this->AliciAdiTextBox->TabIndex = 37;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(-6, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 29);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Gönderilecek Ürün :";
			// 
			// GonderilecekUrunAdiTextBox
			// 
			this->GonderilecekUrunAdiTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->GonderilecekUrunAdiTextBox->Location = System::Drawing::Point(271, 238);
			this->GonderilecekUrunAdiTextBox->Name = L"GonderilecekUrunAdiTextBox";
			this->GonderilecekUrunAdiTextBox->Size = System::Drawing::Size(212, 30);
			this->GonderilecekUrunAdiTextBox->TabIndex = 43;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(32, 292);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(208, 29);
			this->label6->TabIndex = 46;
			this->label6->Text = L"Ürün Kilosu (kg):";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox2->Location = System::Drawing::Point(271, 296);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(212, 30);
			this->textBox2->TabIndex = 45;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &GonderiOlusturmaSayfasi::textBox2_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label7->Location = System::Drawing::Point(107, 338);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 29);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Ürün Boy :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(271, 338);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 30);
			this->textBox1->TabIndex = 47;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &GonderiOlusturmaSayfasi::textBox1_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label8->Location = System::Drawing::Point(120, 393);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 29);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Ürün En :";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox3->Location = System::Drawing::Point(271, 393);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(212, 30);
			this->textBox3->TabIndex = 49;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &GonderiOlusturmaSayfasi::textBox3_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(627, 271);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 29);
			this->label9->TabIndex = 51;
			this->label9->Text = L"Ücret:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(505, 330);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(204, 29);
			this->label10->TabIndex = 52;
			this->label10->Text = L"Kargo Takip No:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(728, 271);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 29);
			this->label11->TabIndex = 53;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->label12->Location = System::Drawing::Point(728, 330);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 29);
			this->label12->TabIndex = 54;
			// 
			// GonderiBitirButton
			// 
			this->GonderiBitirButton->BackColor = System::Drawing::Color::DarkCyan;
			this->GonderiBitirButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->GonderiBitirButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->GonderiBitirButton->Location = System::Drawing::Point(534, 446);
			this->GonderiBitirButton->Name = L"GonderiBitirButton";
			this->GonderiBitirButton->Size = System::Drawing::Size(275, 76);
			this->GonderiBitirButton->TabIndex = 55;
			this->GonderiBitirButton->Text = L"Bitir";
			this->GonderiBitirButton->UseVisualStyleBackColor = false;
			this->GonderiBitirButton->Click += gcnew System::EventHandler(this, &GonderiOlusturmaSayfasi::GonderiBitirButton_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label13->Location = System::Drawing::Point(70, 434);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(170, 29);
			this->label13->TabIndex = 57;
			this->label13->Text = L"Uzaklýk (km) :";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox4->Location = System::Drawing::Point(271, 434);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(212, 30);
			this->textBox4->TabIndex = 56;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &GonderiOlusturmaSayfasi::textBox4_TextChanged);
			// 
			// GonderiOlusturmaGeriButton
			// 
			this->GonderiOlusturmaGeriButton->BackColor = System::Drawing::Color::DarkCyan;
			this->GonderiOlusturmaGeriButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->GonderiOlusturmaGeriButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->GonderiOlusturmaGeriButton->Location = System::Drawing::Point(819, 445);
			this->GonderiOlusturmaGeriButton->Name = L"GonderiOlusturmaGeriButton";
			this->GonderiOlusturmaGeriButton->Size = System::Drawing::Size(132, 76);
			this->GonderiOlusturmaGeriButton->TabIndex = 58;
			this->GonderiOlusturmaGeriButton->Text = L"Geri";
			this->GonderiOlusturmaGeriButton->UseVisualStyleBackColor = false;
			this->GonderiOlusturmaGeriButton->Click += gcnew System::EventHandler(this, &GonderiOlusturmaSayfasi::GonderiOlusturmaGeriButton_Click);
			// 
			// GonderiOlusturmaSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->GonderiOlusturmaGeriButton);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->GonderiBitirButton);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->GonderilecekUrunAdiTextBox);
			this->Controls->Add(this->AliciAdresTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->AlicisoyadiTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->AliciAdiTextBox);
			this->Controls->Add(this->GondericiAdresTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MusteriSifreLabel);
			this->Controls->Add(this->GondericiSoyadiTextBox);
			this->Controls->Add(this->MusteriKullaniciAdiLabel);
			this->Controls->Add(this->GondericiAdiTextBox);
			this->Name = L"GonderiOlusturmaSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GonderiOlusturmaSayfasi";
			this->Load += gcnew System::EventHandler(this, &GonderiOlusturmaSayfasi::GonderiOlusturmaSayfasi_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GonderiOlusturmaSayfasi_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void GonderiBitirButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Random takip numarasý oluþturma
		Random^ random = gcnew Random();
		int sayi = random->Next(0, 100000001);

		this->label12->Text = Convert::ToString(sayi);

		// Veritabaný baðlantýsý
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		// Parametreli sorgu
		String^ sqlQuery = "INSERT INTO Gonderi_Olusturma "
			"(GondericiAdi, GondericiSoyadi, GondericiAdres, AliciAdi, AliciSoyadi, AliciAdres, "
			"GonderilecekUrun, UrunKilosu, UrunBoy, UrunEn, UrunUcret, UrunTakipNo, UzaklikKM) "
			"VALUES (@GondericiAdi, @GondericiSoyadi, @GondericiAdres, @AliciAdi, @AliciSoyadi, @AliciAdres, "
			"@GonderilecekUrun, @UrunKilosu, @UrunBoy, @UrunEn, @UrunUcret, @UrunTakipNo, @UzaklikKM)";

		SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, con);

		// Parametreler
		cmd->Parameters->AddWithValue("@GondericiAdi", this->GondericiAdiTextBox->Text);
		cmd->Parameters->AddWithValue("@GondericiSoyadi", this->GondericiSoyadiTextBox->Text);
		cmd->Parameters->AddWithValue("@GondericiAdres", this->GondericiAdresTextBox->Text);
		cmd->Parameters->AddWithValue("@AliciAdi", this->AliciAdiTextBox->Text);
		cmd->Parameters->AddWithValue("@AliciSoyadi", this->AlicisoyadiTextBox->Text);
		cmd->Parameters->AddWithValue("@AliciAdres", this->AliciAdresTextBox->Text);
		cmd->Parameters->AddWithValue("@GonderilecekUrun", this->GonderilecekUrunAdiTextBox->Text);
		cmd->Parameters->AddWithValue("@UrunKilosu", Convert::ToDouble(this->textBox2->Text));
		cmd->Parameters->AddWithValue("@UrunBoy", Convert::ToDouble(this->textBox1->Text));
		cmd->Parameters->AddWithValue("@UrunEn", Convert::ToDouble(this->textBox3->Text));
		cmd->Parameters->AddWithValue("@UrunUcret", Convert::ToDouble(this->label11->Text));
		cmd->Parameters->AddWithValue("@UrunTakipNo", sayi);
		cmd->Parameters->AddWithValue("@UzaklikKM", Convert::ToDouble(this->textBox4->Text));

		// Sorgu çalýþtýrma
		cmd->ExecuteNonQuery();
		MessageBox::Show("Gönderi baþarýyla oluþturuldu!", "Baþarýlý", MessageBoxButtons::OK, MessageBoxIcon::Information);

		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void UpdatePrice() {
	// Tüm TextBox'lar doluysa hesaplama yap
	if (!String::IsNullOrWhiteSpace(textBox1->Text) &&
		!String::IsNullOrWhiteSpace(textBox2->Text) &&
		!String::IsNullOrWhiteSpace(textBox3->Text) &&
		!String::IsNullOrWhiteSpace(textBox4->Text)) {

		try {
			double Kilo = Convert::ToDouble(textBox2->Text);
			double Boy = Convert::ToDouble(textBox1->Text);
			double En = Convert::ToDouble(textBox3->Text);
			double Uzaklik = Convert::ToDouble(textBox4->Text);

			double KMFiyati = 0.87;

			double Ucret = ((Kilo * Boy * En * Uzaklik * KMFiyati) / 1000);

			label11->Text = Convert::ToString(Ucret);
		}
		catch (FormatException^) {
			label11->Text = "Hatalý giriþ!";
		}
	}
	else {
		label11->Text = "Bilgiler eksik!";
	}
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdatePrice();
}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdatePrice();
}

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdatePrice();
}

private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	UpdatePrice();
}
private: System::Void GonderiOlusturmaGeriButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
