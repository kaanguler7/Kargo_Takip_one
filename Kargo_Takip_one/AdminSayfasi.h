#pragma once
#include "PersonelEkleCikarSayfasi.h"
#include "KargoYonetimSayfasi.h"
#include "RaporlamaSayfasi.h"
#include "KargoDurumSayfasi.h"
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>


#include "ExcelleAktarSayfasi.h"

namespace KargoTakipone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminSayfasi
	/// </summary>
	public ref class AdminSayfasi : public System::Windows::Forms::Form
	{
	public:
		AdminSayfasi(void)
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
		~AdminSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ KullaniciGeri2Button;
	protected:
	private: System::Windows::Forms::Button^ KargoIptalButton;
	private: System::Windows::Forms::Button^ RaporlamaButton;
	private: System::Windows::Forms::Button^ MusteriYonetim;




	private: System::Windows::Forms::Button^ KargoYonetimButton;

	private: System::Windows::Forms::Button^ PersonelEkleCýkarButton;


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
			this->KullaniciGeri2Button = (gcnew System::Windows::Forms::Button());
			this->KargoIptalButton = (gcnew System::Windows::Forms::Button());
			this->RaporlamaButton = (gcnew System::Windows::Forms::Button());
			this->MusteriYonetim = (gcnew System::Windows::Forms::Button());
			this->KargoYonetimButton = (gcnew System::Windows::Forms::Button());
			this->PersonelEkleCýkarButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// KullaniciGeri2Button
			// 
			this->KullaniciGeri2Button->BackColor = System::Drawing::Color::DarkCyan;
			this->KullaniciGeri2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KullaniciGeri2Button->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KullaniciGeri2Button->Location = System::Drawing::Point(692, 304);
			this->KullaniciGeri2Button->Name = L"KullaniciGeri2Button";
			this->KullaniciGeri2Button->Size = System::Drawing::Size(246, 149);
			this->KullaniciGeri2Button->TabIndex = 29;
			this->KullaniciGeri2Button->Text = L"Geri";
			this->KullaniciGeri2Button->UseVisualStyleBackColor = false;
			this->KullaniciGeri2Button->Click += gcnew System::EventHandler(this, &AdminSayfasi::KullaniciGeri2Button_Click);
			// 
			// KargoIptalButton
			// 
			this->KargoIptalButton->BackColor = System::Drawing::Color::DarkCyan;
			this->KargoIptalButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KargoIptalButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KargoIptalButton->Location = System::Drawing::Point(373, 304);
			this->KargoIptalButton->Name = L"KargoIptalButton";
			this->KargoIptalButton->Size = System::Drawing::Size(245, 149);
			this->KargoIptalButton->TabIndex = 28;
			this->KargoIptalButton->Text = L"Adres Yazdýr";
			this->KargoIptalButton->UseVisualStyleBackColor = false;
			this->KargoIptalButton->Click += gcnew System::EventHandler(this, &AdminSayfasi::KargoIptalButton_Click);
			// 
			// RaporlamaButton
			// 
			this->RaporlamaButton->BackColor = System::Drawing::Color::DarkCyan;
			this->RaporlamaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->RaporlamaButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->RaporlamaButton->Location = System::Drawing::Point(58, 304);
			this->RaporlamaButton->Name = L"RaporlamaButton";
			this->RaporlamaButton->Size = System::Drawing::Size(234, 149);
			this->RaporlamaButton->TabIndex = 27;
			this->RaporlamaButton->Text = L"Raporlama";
			this->RaporlamaButton->UseVisualStyleBackColor = false;
			this->RaporlamaButton->Click += gcnew System::EventHandler(this, &AdminSayfasi::RaporlamaButton_Click);
			// 
			// MusteriYonetim
			// 
			this->MusteriYonetim->BackColor = System::Drawing::Color::DarkCyan;
			this->MusteriYonetim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->MusteriYonetim->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->MusteriYonetim->Location = System::Drawing::Point(692, 82);
			this->MusteriYonetim->Name = L"MusteriYonetim";
			this->MusteriYonetim->Size = System::Drawing::Size(246, 149);
			this->MusteriYonetim->TabIndex = 26;
			this->MusteriYonetim->Text = L"Kargo Durum";
			this->MusteriYonetim->UseVisualStyleBackColor = false;
			this->MusteriYonetim->Click += gcnew System::EventHandler(this, &AdminSayfasi::MusteriYonetim_Click);
			// 
			// KargoYonetimButton
			// 
			this->KargoYonetimButton->BackColor = System::Drawing::Color::DarkCyan;
			this->KargoYonetimButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KargoYonetimButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KargoYonetimButton->Location = System::Drawing::Point(373, 82);
			this->KargoYonetimButton->Name = L"KargoYonetimButton";
			this->KargoYonetimButton->Size = System::Drawing::Size(245, 149);
			this->KargoYonetimButton->TabIndex = 25;
			this->KargoYonetimButton->Text = L"Kargo Yönetimi";
			this->KargoYonetimButton->UseVisualStyleBackColor = false;
			this->KargoYonetimButton->Click += gcnew System::EventHandler(this, &AdminSayfasi::KargoYonetimButton_Click);
			// 
			// PersonelEkleCýkarButton
			// 
			this->PersonelEkleCýkarButton->BackColor = System::Drawing::Color::DarkCyan;
			this->PersonelEkleCýkarButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->PersonelEkleCýkarButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->PersonelEkleCýkarButton->Location = System::Drawing::Point(58, 82);
			this->PersonelEkleCýkarButton->Name = L"PersonelEkleCýkarButton";
			this->PersonelEkleCýkarButton->Size = System::Drawing::Size(234, 149);
			this->PersonelEkleCýkarButton->TabIndex = 24;
			this->PersonelEkleCýkarButton->Text = L"Personel Ekle/Çýkar";
			this->PersonelEkleCýkarButton->UseVisualStyleBackColor = false;
			this->PersonelEkleCýkarButton->Click += gcnew System::EventHandler(this, &AdminSayfasi::PersonelEkleCýkarButton_Click);
			// 
			// AdminSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->KullaniciGeri2Button);
			this->Controls->Add(this->KargoIptalButton);
			this->Controls->Add(this->RaporlamaButton);
			this->Controls->Add(this->MusteriYonetim);
			this->Controls->Add(this->KargoYonetimButton);
			this->Controls->Add(this->PersonelEkleCýkarButton);
			this->Name = L"AdminSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminSayfasi";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PersonelEkleCýkarButton_Click(System::Object^ sender, System::EventArgs^ e) {
		PersonelEkleCikarSayfasi^ form83 = gcnew PersonelEkleCikarSayfasi();
		form83->Show();
		
	}
private: System::Void KargoYonetimButton_Click(System::Object^ sender, System::EventArgs^ e) {
	KargoYonetimSayfasi^ form103 = gcnew KargoYonetimSayfasi();
	form103->Show();
}
private: System::Void RaporlamaButton_Click(System::Object^ sender, System::EventArgs^ e) {
	RaporlamaSayfasi^ form113 = gcnew RaporlamaSayfasi();
	form113->Show();
}
private: System::Void KargoIptalButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ExcelleAktarSayfasi^ form123 = gcnew ExcelleAktarSayfasi();
	form123->Show();
}
private: System::Void MusteriYonetim_Click(System::Object^ sender, System::EventArgs^ e) {
	
		KargoDurumSayfasi^ form223 = gcnew KargoDurumSayfasi();
	form223->Show();
}
private: System::Void KullaniciGeri2Button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
