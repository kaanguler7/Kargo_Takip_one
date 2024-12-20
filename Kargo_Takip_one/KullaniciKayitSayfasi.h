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
	/// Summary for KullaniciKayitSayfasi
	/// </summary>
	public ref class KullaniciKayitSayfasi : public System::Windows::Forms::Form
	{
	public:
		KullaniciKayitSayfasi(void)
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
		~KullaniciKayitSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ MusteriSayfasiButton;


	private: System::Windows::Forms::Label^ MusteriSifreLabel;
	private: System::Windows::Forms::TextBox^ MusteriKayitSifreTextBox;

	private: System::Windows::Forms::Label^ MusteriKullaniciAdiLabel;
	private: System::Windows::Forms::TextBox^ MusteriKayitKullaniciAdiTextBox;
	private: System::Windows::Forms::Button^ KullaniciGeri2Button;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MusteriSayfasiButton = (gcnew System::Windows::Forms::Button());
			this->MusteriSifreLabel = (gcnew System::Windows::Forms::Label());
			this->MusteriKayitSifreTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MusteriKullaniciAdiLabel = (gcnew System::Windows::Forms::Label());
			this->MusteriKayitKullaniciAdiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->KullaniciGeri2Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 42, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(251, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(482, 85);
			this->label2->TabIndex = 15;
			this->label2->Text = L"KULLANCI KAYIT";
			// 
			// MusteriSayfasiButton
			// 
			this->MusteriSayfasiButton->BackColor = System::Drawing::Color::DarkCyan;
			this->MusteriSayfasiButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold));
			this->MusteriSayfasiButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->MusteriSayfasiButton->Location = System::Drawing::Point(314, 404);
			this->MusteriSayfasiButton->Name = L"MusteriSayfasiButton";
			this->MusteriSayfasiButton->Size = System::Drawing::Size(306, 98);
			this->MusteriSayfasiButton->TabIndex = 22;
			this->MusteriSayfasiButton->Text = L"Kayýt";
			this->MusteriSayfasiButton->UseVisualStyleBackColor = false;
			this->MusteriSayfasiButton->Click += gcnew System::EventHandler(this, &KullaniciKayitSayfasi::MusteriGirisSayfasiButton_Click);
			// 
			// MusteriSifreLabel
			// 
			this->MusteriSifreLabel->AutoSize = true;
			this->MusteriSifreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->MusteriSifreLabel->Location = System::Drawing::Point(94, 293);
			this->MusteriSifreLabel->Name = L"MusteriSifreLabel";
			this->MusteriSifreLabel->Size = System::Drawing::Size(82, 29);
			this->MusteriSifreLabel->TabIndex = 21;
			this->MusteriSifreLabel->Text = L"Þifre :";
			// 
			// MusteriKayitSifreTextBox
			// 
			this->MusteriKayitSifreTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->MusteriKayitSifreTextBox->Location = System::Drawing::Point(314, 293);
			this->MusteriKayitSifreTextBox->Name = L"MusteriKayitSifreTextBox";
			this->MusteriKayitSifreTextBox->PasswordChar = '*';
			this->MusteriKayitSifreTextBox->Size = System::Drawing::Size(306, 30);
			this->MusteriKayitSifreTextBox->TabIndex = 20;
			// 
			// MusteriKullaniciAdiLabel
			// 
			this->MusteriKullaniciAdiLabel->AutoSize = true;
			this->MusteriKullaniciAdiLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->MusteriKullaniciAdiLabel->Location = System::Drawing::Point(94, 185);
			this->MusteriKullaniciAdiLabel->Name = L"MusteriKullaniciAdiLabel";
			this->MusteriKullaniciAdiLabel->Size = System::Drawing::Size(172, 29);
			this->MusteriKullaniciAdiLabel->TabIndex = 19;
			this->MusteriKullaniciAdiLabel->Text = L"Kullanýcý Adý :";
			// 
			// MusteriKayitKullaniciAdiTextBox
			// 
			this->MusteriKayitKullaniciAdiTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->MusteriKayitKullaniciAdiTextBox->Location = System::Drawing::Point(314, 185);
			this->MusteriKayitKullaniciAdiTextBox->Name = L"MusteriKayitKullaniciAdiTextBox";
			this->MusteriKayitKullaniciAdiTextBox->Size = System::Drawing::Size(306, 30);
			this->MusteriKayitKullaniciAdiTextBox->TabIndex = 18;
			// 
			// KullaniciGeri2Button
			// 
			this->KullaniciGeri2Button->BackColor = System::Drawing::Color::DarkCyan;
			this->KullaniciGeri2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KullaniciGeri2Button->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KullaniciGeri2Button->Location = System::Drawing::Point(762, 404);
			this->KullaniciGeri2Button->Name = L"KullaniciGeri2Button";
			this->KullaniciGeri2Button->Size = System::Drawing::Size(140, 98);
			this->KullaniciGeri2Button->TabIndex = 23;
			this->KullaniciGeri2Button->Text = L"Geri";
			this->KullaniciGeri2Button->UseVisualStyleBackColor = false;
			this->KullaniciGeri2Button->Click += gcnew System::EventHandler(this, &KullaniciKayitSayfasi::KullaniciGeri2Button_Click);
			// 
			// KullaniciKayitSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->KullaniciGeri2Button);
			this->Controls->Add(this->MusteriSayfasiButton);
			this->Controls->Add(this->MusteriSifreLabel);
			this->Controls->Add(this->MusteriKayitSifreTextBox);
			this->Controls->Add(this->MusteriKullaniciAdiLabel);
			this->Controls->Add(this->MusteriKayitKullaniciAdiTextBox);
			this->Controls->Add(this->label2);
			this->Name = L"KullaniciKayitSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KullaniciKayitSayfasi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void KullaniciGeri2Button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void MusteriGirisSayfasiButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ aciklama = this->MusteriKayitKullaniciAdiTextBox->Text;
	String^ foto = this->MusteriKayitSifreTextBox->Text;


	String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
	SqlConnection con(connectionString);
	con.Open();

	String^ sqlQuery = "Insert into Kullanici_Giris_Bilgileri values ('" + this->MusteriKayitKullaniciAdiTextBox->Text + "','" + this->MusteriKayitSifreTextBox->Text + "')";
	SqlCommand cmd(sqlQuery, % con);
	cmd.ExecuteNonQuery();
	con.Close();
	this->MusteriKayitKullaniciAdiTextBox->Text = "";
	this->MusteriKayitSifreTextBox->Text = "";
	MessageBox::Show("Baþarýlý kayýt!");
}
};
}
