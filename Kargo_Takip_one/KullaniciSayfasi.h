#pragma once
#include "SubeSorgulamaSayfasi.h"

namespace KargoTakipone {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for KullaniciSayfasi
	/// </summary>
	public ref class KullaniciSayfasi : public System::Windows::Forms::Form
	{
	public:
		KullaniciSayfasi(void)
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
		~KullaniciSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ KargoIptalButton;
	protected:
	private: System::Windows::Forms::Button^ KuryeCagýrButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ SubeSorgulamaButton;
	private: System::Windows::Forms::Button^ KargoTakipButton;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
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
			this->KargoIptalButton = (gcnew System::Windows::Forms::Button());
			this->KuryeCagýrButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SubeSorgulamaButton = (gcnew System::Windows::Forms::Button());
			this->KargoTakipButton = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->KullaniciGeri2Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
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
			this->KargoIptalButton->TabIndex = 10;
			this->KargoIptalButton->UseVisualStyleBackColor = false;
			// 
			// KuryeCagýrButton
			// 
			this->KuryeCagýrButton->BackColor = System::Drawing::Color::DarkCyan;
			this->KuryeCagýrButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KuryeCagýrButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KuryeCagýrButton->Location = System::Drawing::Point(58, 304);
			this->KuryeCagýrButton->Name = L"KuryeCagýrButton";
			this->KuryeCagýrButton->Size = System::Drawing::Size(234, 149);
			this->KuryeCagýrButton->TabIndex = 9;
			this->KuryeCagýrButton->Text = L"Kurye Çaðýr";
			this->KuryeCagýrButton->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(692, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(246, 149);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Gönderi Oluþturma";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// SubeSorgulamaButton
			// 
			this->SubeSorgulamaButton->BackColor = System::Drawing::Color::DarkCyan;
			this->SubeSorgulamaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->SubeSorgulamaButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->SubeSorgulamaButton->Location = System::Drawing::Point(373, 82);
			this->SubeSorgulamaButton->Name = L"SubeSorgulamaButton";
			this->SubeSorgulamaButton->Size = System::Drawing::Size(245, 149);
			this->SubeSorgulamaButton->TabIndex = 7;
			this->SubeSorgulamaButton->Text = L"Þube Sorgulama";
			this->SubeSorgulamaButton->UseVisualStyleBackColor = false;
			this->SubeSorgulamaButton->Click += gcnew System::EventHandler(this, &KullaniciSayfasi::SubeSorgulamaButton_Click);
			// 
			// KargoTakipButton
			// 
			this->KargoTakipButton->BackColor = System::Drawing::Color::DarkCyan;
			this->KargoTakipButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KargoTakipButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KargoTakipButton->Location = System::Drawing::Point(58, 82);
			this->KargoTakipButton->Name = L"KargoTakipButton";
			this->KargoTakipButton->Size = System::Drawing::Size(234, 149);
			this->KargoTakipButton->TabIndex = 6;
			this->KargoTakipButton->Text = L"Kargo Takip";
			this->KargoTakipButton->UseVisualStyleBackColor = false;
			this->KargoTakipButton->Click += gcnew System::EventHandler(this, &KullaniciSayfasi::KargoTakipButton_Click);
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
			this->KullaniciGeri2Button->TabIndex = 23;
			this->KullaniciGeri2Button->Text = L"Geri";
			this->KullaniciGeri2Button->UseVisualStyleBackColor = false;
			this->KullaniciGeri2Button->Click += gcnew System::EventHandler(this, &KullaniciSayfasi::KullaniciGeri2Button_Click);
			// 
			// KullaniciSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->KullaniciGeri2Button);
			this->Controls->Add(this->KargoIptalButton);
			this->Controls->Add(this->KuryeCagýrButton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SubeSorgulamaButton);
			this->Controls->Add(this->KargoTakipButton);
			this->Name = L"KullaniciSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KullaniciSayfasi";
			this->Load += gcnew System::EventHandler(this, &KullaniciSayfasi::KullaniciSayfasi_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SubeSorgulamaButton_Click(System::Object^ sender, System::EventArgs^ e) {
		SubeSorgulamaSayfasi^ c = gcnew SubeSorgulamaSayfasi();
		c->Show();
		
	}
private: System::Void KullaniciSayfasi_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void KullaniciGeri2Button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void KargoTakipButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
