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
	/// Summary for KuryeCagirSayfasi
	/// </summary>
	public ref class KuryeCagirSayfasi : public System::Windows::Forms::Form
	{
	public:
		KuryeCagirSayfasi(void)
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
		~KuryeCagirSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ MusteriKullaniciAdiLabel;
	private: System::Windows::Forms::TextBox^ TalepIletenAdTextBox;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TalepIletenSoyadTextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TalepIletenGSMTextBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TalepIletenAdresTextBox;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TalepIletenUrunTextBox;
	private: System::Windows::Forms::Button^ KuryeCagirButton;
	private: System::Windows::Forms::Button^ KuryeCagirGeriButton;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;





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
			this->MusteriKullaniciAdiLabel = (gcnew System::Windows::Forms::Label());
			this->TalepIletenAdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TalepIletenSoyadTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TalepIletenGSMTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TalepIletenAdresTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TalepIletenUrunTextBox = (gcnew System::Windows::Forms::TextBox());
			this->KuryeCagirButton = (gcnew System::Windows::Forms::Button());
			this->KuryeCagirGeriButton = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// MusteriKullaniciAdiLabel
			// 
			this->MusteriKullaniciAdiLabel->AutoSize = true;
			this->MusteriKullaniciAdiLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->MusteriKullaniciAdiLabel->Location = System::Drawing::Point(86, 136);
			this->MusteriKullaniciAdiLabel->Name = L"MusteriKullaniciAdiLabel";
			this->MusteriKullaniciAdiLabel->Size = System::Drawing::Size(205, 29);
			this->MusteriKullaniciAdiLabel->TabIndex = 20;
			this->MusteriKullaniciAdiLabel->Text = L"Talep Ýleten Ad :";
			// 
			// TalepIletenAdTextBox
			// 
			this->TalepIletenAdTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->TalepIletenAdTextBox->Location = System::Drawing::Point(311, 136);
			this->TalepIletenAdTextBox->Name = L"TalepIletenAdTextBox";
			this->TalepIletenAdTextBox->Size = System::Drawing::Size(219, 30);
			this->TalepIletenAdTextBox->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 42, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(296, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(407, 85);
			this->label2->TabIndex = 18;
			this->label2->Text = L"KURYE ÇAÐIR";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(44, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 29);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Talep Ýleten Soyad :";
			// 
			// TalepIletenSoyadTextBox
			// 
			this->TalepIletenSoyadTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->TalepIletenSoyadTextBox->Location = System::Drawing::Point(311, 190);
			this->TalepIletenSoyadTextBox->Name = L"TalepIletenSoyadTextBox";
			this->TalepIletenSoyadTextBox->Size = System::Drawing::Size(219, 30);
			this->TalepIletenSoyadTextBox->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(19, 251);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(272, 29);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Talep Ýleten GSM No :";
			// 
			// TalepIletenGSMTextBox
			// 
			this->TalepIletenGSMTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->TalepIletenGSMTextBox->Location = System::Drawing::Point(311, 250);
			this->TalepIletenGSMTextBox->Name = L"TalepIletenGSMTextBox";
			this->TalepIletenGSMTextBox->Size = System::Drawing::Size(219, 30);
			this->TalepIletenGSMTextBox->TabIndex = 23;
			this->TalepIletenGSMTextBox->TextChanged += gcnew System::EventHandler(this, &KuryeCagirSayfasi::textBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(44, 353);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(242, 29);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Talep Ýleten Adres :";
			// 
			// TalepIletenAdresTextBox
			// 
			this->TalepIletenAdresTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->TalepIletenAdresTextBox->Location = System::Drawing::Point(311, 353);
			this->TalepIletenAdresTextBox->Multiline = true;
			this->TalepIletenAdresTextBox->Name = L"TalepIletenAdresTextBox";
			this->TalepIletenAdresTextBox->Size = System::Drawing::Size(219, 131);
			this->TalepIletenAdresTextBox->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(44, 301);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(246, 29);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Gönderilecek Ürün :";
			// 
			// TalepIletenUrunTextBox
			// 
			this->TalepIletenUrunTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->TalepIletenUrunTextBox->Location = System::Drawing::Point(311, 300);
			this->TalepIletenUrunTextBox->Name = L"TalepIletenUrunTextBox";
			this->TalepIletenUrunTextBox->Size = System::Drawing::Size(219, 30);
			this->TalepIletenUrunTextBox->TabIndex = 27;
			// 
			// KuryeCagirButton
			// 
			this->KuryeCagirButton->BackColor = System::Drawing::Color::DarkCyan;
			this->KuryeCagirButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold));
			this->KuryeCagirButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KuryeCagirButton->Location = System::Drawing::Point(549, 424);
			this->KuryeCagirButton->Name = L"KuryeCagirButton";
			this->KuryeCagirButton->Size = System::Drawing::Size(435, 98);
			this->KuryeCagirButton->TabIndex = 29;
			this->KuryeCagirButton->Text = L"Talep Oluþtur";
			this->KuryeCagirButton->UseVisualStyleBackColor = false;
			this->KuryeCagirButton->Click += gcnew System::EventHandler(this, &KuryeCagirSayfasi::KuryeCagirButton_Click);
			// 
			// KuryeCagirGeriButton
			// 
			this->KuryeCagirGeriButton->BackColor = System::Drawing::Color::DarkCyan;
			this->KuryeCagirGeriButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KuryeCagirGeriButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KuryeCagirGeriButton->Location = System::Drawing::Point(844, 19);
			this->KuryeCagirGeriButton->Name = L"KuryeCagirGeriButton";
			this->KuryeCagirGeriButton->Size = System::Drawing::Size(140, 98);
			this->KuryeCagirGeriButton->TabIndex = 30;
			this->KuryeCagirGeriButton->Text = L"Geri";
			this->KuryeCagirGeriButton->UseVisualStyleBackColor = false;
			this->KuryeCagirGeriButton->Click += gcnew System::EventHandler(this, &KuryeCagirSayfasi::KuryeCagirGeriButton_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(572, 137);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(330, 29);
			this->label9->TabIndex = 52;
			this->label9->Text = L"Adresten alým saatleri þube";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(572, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(408, 29);
			this->label6->TabIndex = 53;
			this->label6->Text = L"çalýþma zamanlarýna göre farklýlýk ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(572, 195);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(154, 29);
			this->label7->TabIndex = 54;
			this->label7->Text = L"gösterebilir.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(572, 300);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 29);
			this->label8->TabIndex = 55;
			// 
			// KuryeCagirSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->KuryeCagirGeriButton);
			this->Controls->Add(this->KuryeCagirButton);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TalepIletenUrunTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TalepIletenAdresTextBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TalepIletenGSMTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TalepIletenSoyadTextBox);
			this->Controls->Add(this->MusteriKullaniciAdiLabel);
			this->Controls->Add(this->TalepIletenAdTextBox);
			this->Controls->Add(this->label2);
			this->Name = L"KuryeCagirSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KuryeCagirSayfasi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void KuryeCagirButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Veritabaný baðlantýsý
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		// Parametreli sorgu
		String^ sqlQuery = "INSERT INTO Kurye_Cagir (Talep_Ileten_Ad, Talep_Ileten_Soyad, Talep_Ileten_GSM, Gonderiecek_Urun, Talep_Ileten_Adres) "
			"VALUES (@Ad, @Soyad, @GSM, @Urun, @Adres)";

		SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, con);

		// Parametreler
		cmd->Parameters->AddWithValue("@Ad", this->TalepIletenAdTextBox->Text);
		cmd->Parameters->AddWithValue("@Soyad", this->TalepIletenSoyadTextBox->Text);
		cmd->Parameters->AddWithValue("@GSM", this->TalepIletenGSMTextBox->Text);
		cmd->Parameters->AddWithValue("@Urun", this->TalepIletenUrunTextBox->Text);
		cmd->Parameters->AddWithValue("@Adres", this->TalepIletenAdresTextBox->Text);

		// Sorguyu çalýþtýr
		int rowsAffected = cmd->ExecuteNonQuery();
		con->Close();

		if (rowsAffected > 0) {
			// Baþarýlý bir þekilde kaydedildiðinde mesaj göster
			this->label8->Text = "Talep oluþturuldu.";
		}
		else {
			this->label8->Text = "Talep oluþturulamadý. Lütfen tekrar deneyiniz.";
		}
	}
	catch (Exception^ ex) {
		// Hata durumunda mesaj göster
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void KuryeCagirGeriButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
