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
	/// Summary for PersonelEkleCikarSayfasi
	/// </summary>
	public ref class PersonelEkleCikarSayfasi : public System::Windows::Forms::Form
	{
	public:
		PersonelEkleCikarSayfasi(void)
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
		~PersonelEkleCikarSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ PersonelEkleButton;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ MusteriSifreLabel;
	private: System::Windows::Forms::TextBox^ PersonelKayitSoyadiTextBox;

	private: System::Windows::Forms::Label^ MusteriKullaniciAdiLabel;
	private: System::Windows::Forms::TextBox^ PersonelKayitAdiTextBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ PersonelYasiTextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ PersonelMeslekcomboBox1;

	private: System::Windows::Forms::Button^ PersonelGeriButton;
	private: System::Windows::Forms::Button^ PersonelCikarButton;




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
			this->PersonelEkleButton = (gcnew System::Windows::Forms::Button());
			this->MusteriSifreLabel = (gcnew System::Windows::Forms::Label());
			this->PersonelKayitSoyadiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MusteriKullaniciAdiLabel = (gcnew System::Windows::Forms::Label());
			this->PersonelKayitAdiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PersonelYasiTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PersonelMeslekcomboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->PersonelGeriButton = (gcnew System::Windows::Forms::Button());
			this->PersonelCikarButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// PersonelEkleButton
			// 
			this->PersonelEkleButton->BackColor = System::Drawing::Color::DarkCyan;
			this->PersonelEkleButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold));
			this->PersonelEkleButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->PersonelEkleButton->Location = System::Drawing::Point(143, 404);
			this->PersonelEkleButton->Name = L"PersonelEkleButton";
			this->PersonelEkleButton->Size = System::Drawing::Size(306, 98);
			this->PersonelEkleButton->TabIndex = 28;
			this->PersonelEkleButton->Text = L"Ekle";
			this->PersonelEkleButton->UseVisualStyleBackColor = false;
			this->PersonelEkleButton->Click += gcnew System::EventHandler(this, &PersonelEkleCikarSayfasi::PersonelEkleButton_Click);
			// 
			// MusteriSifreLabel
			// 
			this->MusteriSifreLabel->AutoSize = true;
			this->MusteriSifreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->MusteriSifreLabel->Location = System::Drawing::Point(30, 188);
			this->MusteriSifreLabel->Name = L"MusteriSifreLabel";
			this->MusteriSifreLabel->Size = System::Drawing::Size(219, 29);
			this->MusteriSifreLabel->TabIndex = 27;
			this->MusteriSifreLabel->Text = L"Personel Soyadý :";
			// 
			// PersonelKayitSoyadiTextBox
			// 
			this->PersonelKayitSoyadiTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->PersonelKayitSoyadiTextBox->Location = System::Drawing::Point(281, 188);
			this->PersonelKayitSoyadiTextBox->Name = L"PersonelKayitSoyadiTextBox";
			this->PersonelKayitSoyadiTextBox->Size = System::Drawing::Size(306, 30);
			this->PersonelKayitSoyadiTextBox->TabIndex = 26;
			// 
			// MusteriKullaniciAdiLabel
			// 
			this->MusteriKullaniciAdiLabel->AutoSize = true;
			this->MusteriKullaniciAdiLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->MusteriKullaniciAdiLabel->Location = System::Drawing::Point(72, 118);
			this->MusteriKullaniciAdiLabel->Name = L"MusteriKullaniciAdiLabel";
			this->MusteriKullaniciAdiLabel->Size = System::Drawing::Size(177, 29);
			this->MusteriKullaniciAdiLabel->TabIndex = 25;
			this->MusteriKullaniciAdiLabel->Text = L"Personel Adý :";
			// 
			// PersonelKayitAdiTextBox
			// 
			this->PersonelKayitAdiTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->PersonelKayitAdiTextBox->Location = System::Drawing::Point(281, 118);
			this->PersonelKayitAdiTextBox->Name = L"PersonelKayitAdiTextBox";
			this->PersonelKayitAdiTextBox->Size = System::Drawing::Size(306, 30);
			this->PersonelKayitAdiTextBox->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 42, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(144, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(660, 85);
			this->label2->TabIndex = 23;
			this->label2->Text = L"PERSONEL EKLE/ÇIKAR";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(59, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 29);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Personel Yaþý :";
			// 
			// PersonelYasiTextBox
			// 
			this->PersonelYasiTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->PersonelYasiTextBox->Location = System::Drawing::Point(281, 265);
			this->PersonelYasiTextBox->Name = L"PersonelYasiTextBox";
			this->PersonelYasiTextBox->Size = System::Drawing::Size(306, 30);
			this->PersonelYasiTextBox->TabIndex = 30;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(138, 340);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 29);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Meslek :";
			// 
			// PersonelMeslekcomboBox1
			// 
			this->PersonelMeslekcomboBox1->FormattingEnabled = true;
			this->PersonelMeslekcomboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Kurye", L"Þoför", L"Müdür", L"Müdür Yardýmcýsý" });
			this->PersonelMeslekcomboBox1->Location = System::Drawing::Point(281, 344);
			this->PersonelMeslekcomboBox1->Name = L"PersonelMeslekcomboBox1";
			this->PersonelMeslekcomboBox1->Size = System::Drawing::Size(306, 24);
			this->PersonelMeslekcomboBox1->TabIndex = 32;
			// 
			// PersonelGeriButton
			// 
			this->PersonelGeriButton->BackColor = System::Drawing::Color::DarkCyan;
			this->PersonelGeriButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->PersonelGeriButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->PersonelGeriButton->Location = System::Drawing::Point(844, 12);
			this->PersonelGeriButton->Name = L"PersonelGeriButton";
			this->PersonelGeriButton->Size = System::Drawing::Size(140, 98);
			this->PersonelGeriButton->TabIndex = 33;
			this->PersonelGeriButton->Text = L"Geri";
			this->PersonelGeriButton->UseVisualStyleBackColor = false;
			this->PersonelGeriButton->Click += gcnew System::EventHandler(this, &PersonelEkleCikarSayfasi::PersonelGeriButton_Click);
			// 
			// PersonelCikarButton
			// 
			this->PersonelCikarButton->BackColor = System::Drawing::Color::DarkCyan;
			this->PersonelCikarButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold));
			this->PersonelCikarButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->PersonelCikarButton->Location = System::Drawing::Point(550, 404);
			this->PersonelCikarButton->Name = L"PersonelCikarButton";
			this->PersonelCikarButton->Size = System::Drawing::Size(306, 98);
			this->PersonelCikarButton->TabIndex = 34;
			this->PersonelCikarButton->Text = L"Çýkar";
			this->PersonelCikarButton->UseVisualStyleBackColor = false;
			this->PersonelCikarButton->Click += gcnew System::EventHandler(this, &PersonelEkleCikarSayfasi::PersonelCikarButton_Click);
			// 
			// PersonelEkleCikarSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(996, 534);
			this->Controls->Add(this->PersonelCikarButton);
			this->Controls->Add(this->PersonelGeriButton);
			this->Controls->Add(this->PersonelMeslekcomboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->PersonelYasiTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PersonelEkleButton);
			this->Controls->Add(this->MusteriSifreLabel);
			this->Controls->Add(this->PersonelKayitSoyadiTextBox);
			this->Controls->Add(this->MusteriKullaniciAdiLabel);
			this->Controls->Add(this->PersonelKayitAdiTextBox);
			this->Controls->Add(this->label2);
			this->Name = L"PersonelEkleCikarSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PersonelEkleCikarSayfasi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PersonelGeriButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void PersonelEkleButton_Click(System::Object^ sender, System::EventArgs^ e) { // TextBox'lardan alýnan personel bilgileri
	String^ ad = this->PersonelKayitAdiTextBox->Text;
	String^ soyad = this->PersonelKayitSoyadiTextBox->Text;
	String^ yas = this->PersonelYasiTextBox->Text;
	String^ meslek = this->PersonelMeslekcomboBox1->Text;

	// Veritabaný baðlantý dizesi
	String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";

	try {
		// Veritabaný baðlantýsýný oluþtur ve aç
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		// Parametreli sorgu oluþtur
		String^ sqlQuery = "INSERT INTO Personel_Ekle (Ad, Soyad, Yas, Meslek) VALUES (@Ad, @Soyad, @Yas, @Meslek)";
		SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, con);

		// Parametreleri sorguya ekle
		cmd->Parameters->AddWithValue("@Ad", ad);
		cmd->Parameters->AddWithValue("@Soyad", soyad);
		cmd->Parameters->AddWithValue("@Yas", yas);
		cmd->Parameters->AddWithValue("@Meslek", meslek);

		// Sorguyu çalýþtýr
		cmd->ExecuteNonQuery();

		// TextBox'larý temizle
		this->PersonelKayitAdiTextBox->Text = "";
		this->PersonelKayitSoyadiTextBox->Text = "";
		this->PersonelYasiTextBox->Text = "";
		this->PersonelMeslekcomboBox1->Text = "";

		// Kullanýcýya baþarý mesajý göster
		MessageBox::Show("Personel baþarýyla eklendi!");

		// Veritabaný baðlantýsýný kapat
		con->Close();
	}
	catch (Exception^ ex) {
		// Hata durumunda kullanýcýyý bilgilendir
		MessageBox::Show("Bir hata oluþtu: " + ex->Message);
	}

}
private: System::Void PersonelCikarButton_Click(System::Object^ sender, System::EventArgs^ e) {// Kullanýcýdan alýnan Ad ve Soyad bilgileri
	String^ ad = this->PersonelKayitAdiTextBox->Text;
	String^ soyad = this->PersonelKayitSoyadiTextBox->Text;

	// Veritabaný baðlantý dizesi
	String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";

	try {
		// Veritabaný baðlantýsýný oluþtur ve aç
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		// Parametreli sorgu ile personel bilgilerini veritabanýndan al
		String^ sqlQuery = "SELECT Yas, Meslek FROM Personel_Ekle WHERE Ad = @Ad AND Soyad = @Soyad";
		SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, con);

		// Parametreleri sorguya ekle
		cmd->Parameters->AddWithValue("@Ad", ad);
		cmd->Parameters->AddWithValue("@Soyad", soyad);

		// Veriyi çek
		SqlDataReader^ reader = cmd->ExecuteReader();

		if (reader->Read()) {
			// Kiþi bulunduysa Yaþ ve Meslek bilgilerini TextBox'lara yaz
			this->PersonelYasiTextBox->Text = reader->GetString(0);  // Yaþ
			this->PersonelMeslekcomboBox1->Text = reader->GetString(1);         // Meslek

			// Personeli silmek için ikinci bir sorgu
			reader->Close();  // Silme iþleminden önce reader'ý kapatýyoruz
			String^ deleteQuery = "DELETE FROM Personel_Ekle WHERE Ad = @Ad AND Soyad = @Soyad";
			SqlCommand^ deleteCmd = gcnew SqlCommand(deleteQuery, con);
			deleteCmd->Parameters->AddWithValue("@Ad", ad);
			deleteCmd->Parameters->AddWithValue("@Soyad", soyad);

			// Personeli veritabanýndan sil
			deleteCmd->ExecuteNonQuery();

			// Silme iþlemi baþarýyla tamamlandýktan sonra kullanýcýyý bilgilendir
			MessageBox::Show("Personel baþarýyla silindi!");

			// Metin kutularýný temizle
			this->PersonelKayitAdiTextBox->Text = "";
			this->PersonelKayitSoyadiTextBox->Text = "";
			this->PersonelYasiTextBox->Text = "";
			this->PersonelMeslekcomboBox1->Text = "";
		}
		else {
			// Kiþi bulunamazsa kullanýcýya bilgilendirme mesajý
			MessageBox::Show("Bu isim ve soyadla personel bulunamadý.");
		}

		// Veritabaný baðlantýsýný kapat
		con->Close();
	}
	catch (Exception^ ex) {
		// Hata durumunda kullanýcýyý bilgilendir
		MessageBox::Show("Bir hata oluþtu: " + ex->Message);
	}
}
};
}
