#pragma once
#include "AdminSayfasi.h"

namespace KargoTakipone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AdminGirisSayfasi
	/// </summary>
	public ref class AdminGirisSayfasi : public System::Windows::Forms::Form
	{
	public:
		AdminGirisSayfasi(void)
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
		~AdminGirisSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AdminGeri2Button;
	protected:
	private: System::Windows::Forms::Button^ AdminGirisSayfasi2Button;
	private: System::Windows::Forms::Label^ AdminSifre2Label;
	private: System::Windows::Forms::TextBox^ AdminSifre2TextBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ AdminKullaniciAdi2Label;
	private: System::Windows::Forms::TextBox^ AdminKullaniciAdi2TextBox;

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
			this->AdminGeri2Button = (gcnew System::Windows::Forms::Button());
			this->AdminGirisSayfasi2Button = (gcnew System::Windows::Forms::Button());
			this->AdminSifre2Label = (gcnew System::Windows::Forms::Label());
			this->AdminSifre2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->AdminKullaniciAdi2Label = (gcnew System::Windows::Forms::Label());
			this->AdminKullaniciAdi2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// AdminGeri2Button
			// 
			this->AdminGeri2Button->BackColor = System::Drawing::Color::DarkCyan;
			this->AdminGeri2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->AdminGeri2Button->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->AdminGeri2Button->Location = System::Drawing::Point(762, 404);
			this->AdminGeri2Button->Name = L"AdminGeri2Button";
			this->AdminGeri2Button->Size = System::Drawing::Size(140, 98);
			this->AdminGeri2Button->TabIndex = 20;
			this->AdminGeri2Button->Text = L"Geri";
			this->AdminGeri2Button->UseVisualStyleBackColor = false;
			// 
			// AdminGirisSayfasi2Button
			// 
			this->AdminGirisSayfasi2Button->BackColor = System::Drawing::Color::DarkCyan;
			this->AdminGirisSayfasi2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold));
			this->AdminGirisSayfasi2Button->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->AdminGirisSayfasi2Button->Location = System::Drawing::Point(314, 404);
			this->AdminGirisSayfasi2Button->Name = L"AdminGirisSayfasi2Button";
			this->AdminGirisSayfasi2Button->Size = System::Drawing::Size(306, 98);
			this->AdminGirisSayfasi2Button->TabIndex = 19;
			this->AdminGirisSayfasi2Button->Text = L"Giriþ";
			this->AdminGirisSayfasi2Button->UseVisualStyleBackColor = false;
			this->AdminGirisSayfasi2Button->Click += gcnew System::EventHandler(this, &AdminGirisSayfasi::AdminGirisSayfasi2Button_Click);
			// 
			// AdminSifre2Label
			// 
			this->AdminSifre2Label->AutoSize = true;
			this->AdminSifre2Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->AdminSifre2Label->Location = System::Drawing::Point(94, 293);
			this->AdminSifre2Label->Name = L"AdminSifre2Label";
			this->AdminSifre2Label->Size = System::Drawing::Size(82, 29);
			this->AdminSifre2Label->TabIndex = 18;
			this->AdminSifre2Label->Text = L"Þifre :";
			// 
			// AdminSifre2TextBox
			// 
			this->AdminSifre2TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->AdminSifre2TextBox->Location = System::Drawing::Point(314, 293);
			this->AdminSifre2TextBox->Name = L"AdminSifre2TextBox";
			this->AdminSifre2TextBox->PasswordChar = '*';
			this->AdminSifre2TextBox->Size = System::Drawing::Size(306, 30);
			this->AdminSifre2TextBox->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 42, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(244, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(408, 85);
			this->label2->TabIndex = 16;
			this->label2->Text = L"ADMÝN GÝRÝÞ ";
			// 
			// AdminKullaniciAdi2Label
			// 
			this->AdminKullaniciAdi2Label->AutoSize = true;
			this->AdminKullaniciAdi2Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->AdminKullaniciAdi2Label->Location = System::Drawing::Point(94, 185);
			this->AdminKullaniciAdi2Label->Name = L"AdminKullaniciAdi2Label";
			this->AdminKullaniciAdi2Label->Size = System::Drawing::Size(172, 29);
			this->AdminKullaniciAdi2Label->TabIndex = 15;
			this->AdminKullaniciAdi2Label->Text = L"Kullanýcý Adý :";
			// 
			// AdminKullaniciAdi2TextBox
			// 
			this->AdminKullaniciAdi2TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->AdminKullaniciAdi2TextBox->Location = System::Drawing::Point(314, 185);
			this->AdminKullaniciAdi2TextBox->Name = L"AdminKullaniciAdi2TextBox";
			this->AdminKullaniciAdi2TextBox->Size = System::Drawing::Size(306, 30);
			this->AdminKullaniciAdi2TextBox->TabIndex = 14;
			// 
			// AdminGirisSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->AdminGeri2Button);
			this->Controls->Add(this->AdminGirisSayfasi2Button);
			this->Controls->Add(this->AdminSifre2Label);
			this->Controls->Add(this->AdminSifre2TextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->AdminKullaniciAdi2Label);
			this->Controls->Add(this->AdminKullaniciAdi2TextBox);
			this->Name = L"AdminGirisSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminGirisSayfasi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdminGirisSayfasi2Button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ kullaniciadi = this->AdminKullaniciAdi2TextBox->Text;
		String^ sifre = this->AdminSifre2TextBox->Text;

		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection con(connectionString);
		con.Open();

		String^ sqlQuery = "SELECT COUNT(1) FROM Kargo_Takip_Admin_Giris_Bilgileri WHERE Kullanici_Adi='" + kullaniciadi + "' and Sifre='" + sifre + "'";
		SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, % con);
		cmd->Parameters->AddWithValue("@Kullanici_Adi", kullaniciadi);
		cmd->Parameters->AddWithValue("@Sifre", sifre);

		int result = (int)cmd->ExecuteScalar();

		if (result > 0)
		{
			MessageBox::Show("baþarýlý giriþ");
			AdminSayfasi^ form3 = gcnew AdminSayfasi();
			form3->Show();
			this->Hide();
		}
		else
		{
			MessageBox::Show("baþarýsýz giriþ");
		}
	}
};
}
