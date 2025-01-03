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
	/// Summary for SubeSorgulamaSayfasi
	/// </summary>
	public ref class SubeSorgulamaSayfasi : public System::Windows::Forms::Form
	{
	public:
		SubeSorgulamaSayfasi(void)
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
		~SubeSorgulamaSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ SubeAdi;
	private: System::Windows::Forms::TextBox^ SubeAdresi;
	private: System::Windows::Forms::Button^ button1;
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
			this->SubeAdi = (gcnew System::Windows::Forms::TextBox());
			this->SubeAdresi = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->KullaniciGeri2Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// SubeAdi
			// 
			this->SubeAdi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->SubeAdi->Location = System::Drawing::Point(132, 126);
			this->SubeAdi->Name = L"SubeAdi";
			this->SubeAdi->Size = System::Drawing::Size(209, 34);
			this->SubeAdi->TabIndex = 0;
			// 
			// SubeAdresi
			// 
			this->SubeAdresi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->SubeAdresi->Location = System::Drawing::Point(132, 204);
			this->SubeAdresi->Multiline = true;
			this->SubeAdresi->Name = L"SubeAdresi";
			this->SubeAdresi->Size = System::Drawing::Size(209, 148);
			this->SubeAdresi->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkCyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(132, 387);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 81);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Sorgula";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SubeSorgulamaSayfasi::button1_Click);
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
			this->KullaniciGeri2Button->TabIndex = 22;
			this->KullaniciGeri2Button->Text = L"Geri";
			this->KullaniciGeri2Button->UseVisualStyleBackColor = false;
			this->KullaniciGeri2Button->Click += gcnew System::EventHandler(this, &SubeSorgulamaSayfasi::KullaniciGeri2Button_Click);
			// 
			// SubeSorgulamaSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->KullaniciGeri2Button);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SubeAdresi);
			this->Controls->Add(this->SubeAdi);
			this->Name = L"SubeSorgulamaSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SubeSorgulamaSayfasi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ SubeAdi = this->SubeAdi->Text;

		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection con(connectionString);
		con.Open();

		String^ sqlQuery = "SELECT * FROM SubeAdresleri WHERE Subeler like '" + SubeAdi + "'";
		SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, % con);
		cmd->Parameters->AddWithValue("@Subeler", "%" + SubeAdi + "%");
		SqlDataReader^ read = cmd->ExecuteReader();

		while (read->Read())
		{
			SubeAdresi->Text = read["SubeAdresler"]->ToString();
		}
	}
	private: System::Void KullaniciGeri2Button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
