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
	/// Summary for KargoTakipSayfasi
	/// </summary>
	public ref class KargoTakipSayfasi : public System::Windows::Forms::Form
	{
	public:
		KargoTakipSayfasi(void)
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
		~KargoTakipSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ MusteriKullaniciAdiLabel;
	private: System::Windows::Forms::TextBox^ KargoNoTextBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ KargoDurumuLabel;
	private: System::Windows::Forms::Button^ KargoNoSorgulaButton;
	private: System::Windows::Forms::Button^ KargoTakipGeriButton;

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
			this->MusteriKullaniciAdiLabel = (gcnew System::Windows::Forms::Label());
			this->KargoNoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->KargoDurumuLabel = (gcnew System::Windows::Forms::Label());
			this->KargoNoSorgulaButton = (gcnew System::Windows::Forms::Button());
			this->KargoTakipGeriButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 42, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(296, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(406, 85);
			this->label2->TabIndex = 15;
			this->label2->Text = L"KARGO TAKÝP";
			// 
			// MusteriKullaniciAdiLabel
			// 
			this->MusteriKullaniciAdiLabel->AutoSize = true;
			this->MusteriKullaniciAdiLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->MusteriKullaniciAdiLabel->Location = System::Drawing::Point(94, 185);
			this->MusteriKullaniciAdiLabel->Name = L"MusteriKullaniciAdiLabel";
			this->MusteriKullaniciAdiLabel->Size = System::Drawing::Size(143, 29);
			this->MusteriKullaniciAdiLabel->TabIndex = 17;
			this->MusteriKullaniciAdiLabel->Text = L"Kargo NO :";
			// 
			// KargoNoTextBox
			// 
			this->KargoNoTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KargoNoTextBox->Location = System::Drawing::Point(273, 185);
			this->KargoNoTextBox->Name = L"KargoNoTextBox";
			this->KargoNoTextBox->Size = System::Drawing::Size(306, 30);
			this->KargoNoTextBox->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(43, 309);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 29);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Kargo Durumu :";
			// 
			// KargoDurumuLabel
			// 
			this->KargoDurumuLabel->AutoSize = true;
			this->KargoDurumuLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KargoDurumuLabel->Location = System::Drawing::Point(306, 309);
			this->KargoDurumuLabel->Name = L"KargoDurumuLabel";
			this->KargoDurumuLabel->Size = System::Drawing::Size(0, 29);
			this->KargoDurumuLabel->TabIndex = 19;
			// 
			// KargoNoSorgulaButton
			// 
			this->KargoNoSorgulaButton->BackColor = System::Drawing::Color::DarkCyan;
			this->KargoNoSorgulaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold));
			this->KargoNoSorgulaButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KargoNoSorgulaButton->Location = System::Drawing::Point(311, 406);
			this->KargoNoSorgulaButton->Name = L"KargoNoSorgulaButton";
			this->KargoNoSorgulaButton->Size = System::Drawing::Size(391, 98);
			this->KargoNoSorgulaButton->TabIndex = 20;
			this->KargoNoSorgulaButton->Text = L"Sorgula";
			this->KargoNoSorgulaButton->UseVisualStyleBackColor = false;
			this->KargoNoSorgulaButton->Click += gcnew System::EventHandler(this, &KargoTakipSayfasi::KargoNoSorgulaButton_Click);
			// 
			// KargoTakipGeriButton
			// 
			this->KargoTakipGeriButton->BackColor = System::Drawing::Color::DarkCyan;
			this->KargoTakipGeriButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->KargoTakipGeriButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->KargoTakipGeriButton->Location = System::Drawing::Point(794, 406);
			this->KargoTakipGeriButton->Name = L"KargoTakipGeriButton";
			this->KargoTakipGeriButton->Size = System::Drawing::Size(140, 98);
			this->KargoTakipGeriButton->TabIndex = 22;
			this->KargoTakipGeriButton->Text = L"Geri";
			this->KargoTakipGeriButton->UseVisualStyleBackColor = false;
			this->KargoTakipGeriButton->Click += gcnew System::EventHandler(this, &KargoTakipSayfasi::KargoTakipGeriButton_Click);
			// 
			// KargoTakipSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->KargoTakipGeriButton);
			this->Controls->Add(this->KargoNoSorgulaButton);
			this->Controls->Add(this->KargoDurumuLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MusteriKullaniciAdiLabel);
			this->Controls->Add(this->KargoNoTextBox);
			this->Controls->Add(this->label2);
			this->Name = L"KargoTakipSayfasi";
			this->Text = L"KargoTakipSayfasi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void KargoNoSorgulaButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Kullanýcýnýn takip numarasý girip girmediðini kontrol edin
			String^ takipNo = this->KargoNoTextBox->Text;

			if (String::IsNullOrWhiteSpace(takipNo)) {
				this->KargoDurumuLabel->Text = "Lütfen takip numarasý giriniz.";
				return;
			}

			// Veritabaný baðlantýsý
			String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
			SqlConnection^ con = gcnew SqlConnection(connectionString);
			con->Open();

			// Veritabanýndan takip numarasýný kontrol et
			String^ sqlQuery = "SELECT COUNT(*) FROM Gonderi_Olusturma WHERE UrunTakipNo = @UrunTakipNo";
			SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@UrunTakipNo", takipNo);

			int sonuc = Convert::ToInt32(cmd->ExecuteScalar());
			con->Close();

			if (sonuc > 0) {
				// Rastgele bir kargo durumu oluþtur
				array<String^>^ kargoDurumlari = gcnew array<String^> {
					"Þubede", "Daðýtým Merkezinde", "Yolda", "Kuryede", "Teslim Edildi"
				};

				Random^ random = gcnew Random();
				int rastgeleIndex = random->Next(0, kargoDurumlari->Length);

				// Kargo durumunu label'a yazdýr
				this->KargoDurumuLabel->Text = "Durum: " + kargoDurumlari[rastgeleIndex];
			}
			else {
				// Kayýt bulunamazsa uyarý ver
				this->KargoDurumuLabel->Text = "Bu takip numarasýna ait bir kargo bulunamadý.";
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Bir hata oluþtu: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void KargoTakipGeriButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
