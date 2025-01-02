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
	/// Summary for RaporlamaSayfasi
	/// </summary>
	public ref class RaporlamaSayfasi : public System::Windows::Forms::Form
	{
	public:
		RaporlamaSayfasi(void)
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
		~RaporlamaSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ BaslangýcTarih;
	private: System::Windows::Forms::DateTimePicker^ BitisTarih;


	private: System::Windows::Forms::Button^ TarihBulButton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label3;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BaslangýcTarih = (gcnew System::Windows::Forms::DateTimePicker());
			this->BitisTarih = (gcnew System::Windows::Forms::DateTimePicker());
			this->TarihBulButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(23, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Baþlangýç";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(418, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Bitiþ";
			// 
			// BaslangýcTarih
			// 
			this->BaslangýcTarih->Location = System::Drawing::Point(146, 27);
			this->BaslangýcTarih->Name = L"BaslangýcTarih";
			this->BaslangýcTarih->Size = System::Drawing::Size(200, 22);
			this->BaslangýcTarih->TabIndex = 2;
			this->BaslangýcTarih->ValueChanged += gcnew System::EventHandler(this, &RaporlamaSayfasi::BaslangýcTarih_ValueChanged);
			// 
			// BitisTarih
			// 
			this->BitisTarih->Location = System::Drawing::Point(514, 29);
			this->BitisTarih->Name = L"BitisTarih";
			this->BitisTarih->Size = System::Drawing::Size(200, 22);
			this->BitisTarih->TabIndex = 3;
			this->BitisTarih->ValueChanged += gcnew System::EventHandler(this, &RaporlamaSayfasi::BitisTarih_ValueChanged);
			// 
			// TarihBulButton
			// 
			this->TarihBulButton->BackColor = System::Drawing::Color::DarkCyan;
			this->TarihBulButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->TarihBulButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->TarihBulButton->Location = System::Drawing::Point(760, 24);
			this->TarihBulButton->Name = L"TarihBulButton";
			this->TarihBulButton->Size = System::Drawing::Size(212, 59);
			this->TarihBulButton->TabIndex = 94;
			this->TarihBulButton->Text = L"Bul";
			this->TarihBulButton->UseVisualStyleBackColor = false;
			this->TarihBulButton->Click += gcnew System::EventHandler(this, &RaporlamaSayfasi::TarihBulButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(28, 110);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(944, 310);
			this->dataGridView1->TabIndex = 95;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(418, 449);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 25);
			this->label3->TabIndex = 96;
			// 
			// RaporlamaSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1015, 534);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->TarihBulButton);
			this->Controls->Add(this->BitisTarih);
			this->Controls->Add(this->BaslangýcTarih);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RaporlamaSayfasi";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RaporlamaSayfasi";
			this->Load += gcnew System::EventHandler(this, &RaporlamaSayfasi::RaporlamaSayfasi_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RaporlamaSayfasi_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BaslangýcTarih_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BitisTarih_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TarihBulButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Baþlangýç ve bitiþ tarihlerini al
		DateTime baslangicTarihi = BaslangýcTarih->Value;
		DateTime bitisTarihi = BitisTarih->Value;

		if (baslangicTarihi > bitisTarihi) {
			MessageBox::Show("Baþlangýç tarihi bitiþ tarihinden büyük olamaz!", "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Veritabaný baðlantýsý
		String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
		SqlConnection^ con = gcnew SqlConnection(connectionString);
		con->Open();

		// **1. Adým: DataGridView'e verileri getirme**
		String^ queryForGrid = "SELECT * FROM Gonderi_Olusturma WHERE Tarih BETWEEN @BaslangicTarihi AND @BitisTarihi";
		SqlCommand^ cmdGrid = gcnew SqlCommand(queryForGrid, con);

		// Parametreler
		cmdGrid->Parameters->AddWithValue("@BaslangicTarihi", baslangicTarihi.ToString("yyyy-MM-dd"));
		cmdGrid->Parameters->AddWithValue("@BitisTarihi", bitisTarihi.ToString("yyyy-MM-dd"));

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmdGrid);
		DataTable^ dataTable = gcnew DataTable();
		adapter->Fill(dataTable);

		// DataGridView'e veriyi baðlama
		dataGridView1->DataSource = dataTable;

		// **2. Adým: Toplam ciroyu hesaplama**
		String^ queryForCiro = "SELECT SUM(CAST(UrunUcret AS FLOAT)) AS ToplamCiro FROM Gonderi_Olusturma WHERE Tarih BETWEEN @BaslangicTarihi AND @BitisTarihi";
		SqlCommand^ cmdCiro = gcnew SqlCommand(queryForCiro, con);

		// Parametreler (ayný tarih aralýðýný kullanýyoruz)
		cmdCiro->Parameters->AddWithValue("@BaslangicTarihi", baslangicTarihi.ToString("yyyy-MM-dd"));
		cmdCiro->Parameters->AddWithValue("@BitisTarihi", bitisTarihi.ToString("yyyy-MM-dd"));

		Object^ result = cmdCiro->ExecuteScalar();

		if (result != nullptr && result != DBNull::Value) {
			double toplamCiro = Convert::ToDouble(result);
			label3->Text = "Ciro: " + toplamCiro.ToString("C2");
		}
		else {
			label3->Text = "Ciro: 0";
		}

		// Baðlantýyý kapatma
		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
