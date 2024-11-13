#pragma once
#include "AdminGirisSayfasi.h"
#include "KullaniciGirisSayfasi.h"

namespace KargoTakipone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AnaSayfa
	/// </summary>
	public ref class AnaSayfa : public System::Windows::Forms::Form
	{
	public:
		AnaSayfa(void)
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
		~AnaSayfa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AdminGirisButton;
	protected:
	private: System::Windows::Forms::Button^ KullaniciGirisButton;
	private: System::Windows::Forms::Label^ label1;

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
			this->AdminGirisButton = (gcnew System::Windows::Forms::Button());
			this->KullaniciGirisButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// AdminGirisButton
			// 
			this->AdminGirisButton->BackColor = System::Drawing::Color::DarkCyan;
			this->AdminGirisButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->AdminGirisButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->AdminGirisButton->Location = System::Drawing::Point(116, 297);
			this->AdminGirisButton->Name = L"AdminGirisButton";
			this->AdminGirisButton->Size = System::Drawing::Size(349, 149);
			this->AdminGirisButton->TabIndex = 6;
			this->AdminGirisButton->Text = L"Admin Giriþ";
			this->AdminGirisButton->UseVisualStyleBackColor = false;
			this->AdminGirisButton->Click += gcnew System::EventHandler(this, &AnaSayfa::AdminGirisButton_Click);
			// 
			// KullaniciGirisButton
			// 
			this->KullaniciGirisButton->BackColor = System::Drawing::Color::DarkCyan;
			this->KullaniciGirisButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KullaniciGirisButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KullaniciGirisButton->Location = System::Drawing::Point(535, 297);
			this->KullaniciGirisButton->Name = L"KullaniciGirisButton";
			this->KullaniciGirisButton->Size = System::Drawing::Size(349, 149);
			this->KullaniciGirisButton->TabIndex = 5;
			this->KullaniciGirisButton->Text = L"Kullanýcý Giriþ";
			this->KullaniciGirisButton->UseVisualStyleBackColor = false;
			this->KullaniciGirisButton->Click += gcnew System::EventHandler(this, &AnaSayfa::KullaniciGirisButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 42, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(101, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(795, 85);
			this->label1->TabIndex = 4;
			this->label1->Text = L"KARGO TAKÝP UYGULAMASI ";
			// 
			// AnaSayfa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->AdminGirisButton);
			this->Controls->Add(this->KullaniciGirisButton);
			this->Controls->Add(this->label1);
			this->Name = L"AnaSayfa";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AnaSayfa";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdminGirisButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminGirisSayfasi^ a = gcnew AdminGirisSayfasi();
		a->Show();
		this->Hide();
	}
	private: System::Void KullaniciGirisButton_Click(System::Object^ sender, System::EventArgs^ e) {
		KullaniciGirisSayfasi^ b = gcnew KullaniciGirisSayfasi();
		b->Show();
		this->Hide();
	}
};
}
