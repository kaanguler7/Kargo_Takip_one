#pragma once
#include "KullaniciSayfasi.h"

namespace KargoTakipone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for KullaniciGirisSayfasi
	/// </summary>
	public ref class KullaniciGirisSayfasi : public System::Windows::Forms::Form
	{
	public:
		KullaniciGirisSayfasi(void)
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
		~KullaniciGirisSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ MusteriGirisSayfasiButton;
	protected:
	private: System::Windows::Forms::Label^ MusteriSifreLabel;
	private: System::Windows::Forms::TextBox^ MusteriSifreTextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ MusteriKullaniciAdiLabel;
	private: System::Windows::Forms::TextBox^ MusteriKullaniciAdiTextBox;
	private: System::Windows::Forms::Button^ KullaniciGeri2Button;


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
			this->MusteriGirisSayfasiButton = (gcnew System::Windows::Forms::Button());
			this->MusteriSifreLabel = (gcnew System::Windows::Forms::Label());
			this->MusteriSifreTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MusteriKullaniciAdiLabel = (gcnew System::Windows::Forms::Label());
			this->MusteriKullaniciAdiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->KullaniciGeri2Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MusteriGirisSayfasiButton
			// 
			this->MusteriGirisSayfasiButton->BackColor = System::Drawing::Color::DarkCyan;
			this->MusteriGirisSayfasiButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold));
			this->MusteriGirisSayfasiButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->MusteriGirisSayfasiButton->Location = System::Drawing::Point(314, 404);
			this->MusteriGirisSayfasiButton->Name = L"MusteriGirisSayfasiButton";
			this->MusteriGirisSayfasiButton->Size = System::Drawing::Size(306, 98);
			this->MusteriGirisSayfasiButton->TabIndex = 17;
			this->MusteriGirisSayfasiButton->Text = L"Giriþ";
			this->MusteriGirisSayfasiButton->UseVisualStyleBackColor = false;
			this->MusteriGirisSayfasiButton->Click += gcnew System::EventHandler(this, &KullaniciGirisSayfasi::MusteriGirisSayfasiButton_Click);
			// 
			// MusteriSifreLabel
			// 
			this->MusteriSifreLabel->AutoSize = true;
			this->MusteriSifreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->MusteriSifreLabel->Location = System::Drawing::Point(94, 293);
			this->MusteriSifreLabel->Name = L"MusteriSifreLabel";
			this->MusteriSifreLabel->Size = System::Drawing::Size(82, 29);
			this->MusteriSifreLabel->TabIndex = 16;
			this->MusteriSifreLabel->Text = L"Þifre :";
			// 
			// MusteriSifreTextBox
			// 
			this->MusteriSifreTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->MusteriSifreTextBox->Location = System::Drawing::Point(314, 293);
			this->MusteriSifreTextBox->Name = L"MusteriSifreTextBox";
			this->MusteriSifreTextBox->PasswordChar = '*';
			this->MusteriSifreTextBox->Size = System::Drawing::Size(306, 30);
			this->MusteriSifreTextBox->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 42, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(251, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(493, 85);
			this->label2->TabIndex = 14;
			this->label2->Text = L"KULLANCI GÝRÝÞ ";
			// 
			// MusteriKullaniciAdiLabel
			// 
			this->MusteriKullaniciAdiLabel->AutoSize = true;
			this->MusteriKullaniciAdiLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->MusteriKullaniciAdiLabel->Location = System::Drawing::Point(94, 185);
			this->MusteriKullaniciAdiLabel->Name = L"MusteriKullaniciAdiLabel";
			this->MusteriKullaniciAdiLabel->Size = System::Drawing::Size(172, 29);
			this->MusteriKullaniciAdiLabel->TabIndex = 13;
			this->MusteriKullaniciAdiLabel->Text = L"Kullanýcý Adý :";
			// 
			// MusteriKullaniciAdiTextBox
			// 
			this->MusteriKullaniciAdiTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->MusteriKullaniciAdiTextBox->Location = System::Drawing::Point(314, 185);
			this->MusteriKullaniciAdiTextBox->Name = L"MusteriKullaniciAdiTextBox";
			this->MusteriKullaniciAdiTextBox->Size = System::Drawing::Size(306, 30);
			this->MusteriKullaniciAdiTextBox->TabIndex = 12;
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
			this->KullaniciGeri2Button->TabIndex = 21;
			this->KullaniciGeri2Button->Text = L"Geri";
			this->KullaniciGeri2Button->UseVisualStyleBackColor = false;
			// 
			// KullaniciGirisSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->KullaniciGeri2Button);
			this->Controls->Add(this->MusteriGirisSayfasiButton);
			this->Controls->Add(this->MusteriSifreLabel);
			this->Controls->Add(this->MusteriSifreTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->MusteriKullaniciAdiLabel);
			this->Controls->Add(this->MusteriKullaniciAdiTextBox);
			this->Name = L"KullaniciGirisSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KullaniciGirisSayfasi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MusteriGirisSayfasiButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ kullaniciadi = this->MusteriKullaniciAdiTextBox->Text;
		String^ sifre = this->MusteriSifreTextBox->Text;

		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection con(connectionString);
		con.Open();

		String^ sqlQuery = "SELECT COUNT(1) FROM Kullanici_Giris_Bilgileri WHERE Kullanici_Adi_Musteri='" + kullaniciadi + "' and Musteri_Sifre='" + sifre + "'";
		SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, % con);
		cmd->Parameters->AddWithValue("@Kullanici_Adi_Musteri", kullaniciadi);
		cmd->Parameters->AddWithValue("@Musteri_Sifre", sifre);

		int result = (int)cmd->ExecuteScalar();

		if (result > 0)
		{
			MessageBox::Show("baþarýlý giriþ");
			KullaniciSayfasi^ form5 = gcnew KullaniciSayfasi();
			form5->Show();
			this->Hide();
		}
		else
		{
			MessageBox::Show("baþarýsýz giriþ");
		}
	}
};
}
