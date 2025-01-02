#pragma once


namespace KargoTakipone {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	
	using namespace System::Reflection;
	using namespace System::Drawing::Printing;
	
     

	

	/// <summary>
	/// Summary for ExcelleAktarSayfasi
	/// </summary>
	public ref class ExcelleAktarSayfasi : public System::Windows::Forms::Form
	{
	public:
		ExcelleAktarSayfasi(void)
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
		~ExcelleAktarSayfasi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ TarihBulExcelButton;
	private: System::Windows::Forms::DateTimePicker^ BitisExcelTarih;
	private: System::Windows::Forms::DateTimePicker^ BaslangýcExcelTarih;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ YazdirButton;


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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->TarihBulExcelButton = (gcnew System::Windows::Forms::Button());
			this->BitisExcelTarih = (gcnew System::Windows::Forms::DateTimePicker());
			this->BaslangýcExcelTarih = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->YazdirButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(428, 467);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 25);
			this->label3->TabIndex = 103;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(38, 128);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(944, 310);
			this->dataGridView1->TabIndex = 102;
			// 
			// TarihBulExcelButton
			// 
			this->TarihBulExcelButton->BackColor = System::Drawing::Color::DarkCyan;
			this->TarihBulExcelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->TarihBulExcelButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->TarihBulExcelButton->Location = System::Drawing::Point(770, 42);
			this->TarihBulExcelButton->Name = L"TarihBulExcelButton";
			this->TarihBulExcelButton->Size = System::Drawing::Size(212, 59);
			this->TarihBulExcelButton->TabIndex = 101;
			this->TarihBulExcelButton->Text = L"Bul";
			this->TarihBulExcelButton->UseVisualStyleBackColor = false;
			this->TarihBulExcelButton->Click += gcnew System::EventHandler(this, &ExcelleAktarSayfasi::TarihBulExcelButton_Click);
			// 
			// BitisExcelTarih
			// 
			this->BitisExcelTarih->Location = System::Drawing::Point(524, 47);
			this->BitisExcelTarih->Name = L"BitisExcelTarih";
			this->BitisExcelTarih->Size = System::Drawing::Size(200, 22);
			this->BitisExcelTarih->TabIndex = 100;
			// 
			// BaslangýcExcelTarih
			// 
			this->BaslangýcExcelTarih->Location = System::Drawing::Point(156, 45);
			this->BaslangýcExcelTarih->Name = L"BaslangýcExcelTarih";
			this->BaslangýcExcelTarih->Size = System::Drawing::Size(200, 22);
			this->BaslangýcExcelTarih->TabIndex = 99;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(428, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 25);
			this->label2->TabIndex = 98;
			this->label2->Text = L"Bitiþ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(33, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 25);
			this->label1->TabIndex = 97;
			this->label1->Text = L"Baþlangýç";
			// 
			// YazdirButton
			// 
			this->YazdirButton->BackColor = System::Drawing::Color::DarkCyan;
			this->YazdirButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->YazdirButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->YazdirButton->Location = System::Drawing::Point(346, 463);
			this->YazdirButton->Name = L"YazdirButton";
			this->YazdirButton->Size = System::Drawing::Size(347, 59);
			this->YazdirButton->TabIndex = 104;
			this->YazdirButton->Text = L"Yazdýr";
			this->YazdirButton->UseVisualStyleBackColor = false;
			this->YazdirButton->Click += gcnew System::EventHandler(this, &ExcelleAktarSayfasi::YazdirButton_Click);
			// 
			// ExcelleAktarSayfasi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1015, 534);
			this->Controls->Add(this->YazdirButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->TarihBulExcelButton);
			this->Controls->Add(this->BitisExcelTarih);
			this->Controls->Add(this->BaslangýcExcelTarih);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ExcelleAktarSayfasi";
			this->Text = L"ExcelleAktarSayfasi";
			this->Load += gcnew System::EventHandler(this, &ExcelleAktarSayfasi::ExcelleAktarSayfasi_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TarihBulExcelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Baþlangýç ve bitiþ tarihlerini al
			DateTime baslangicTarihi = BaslangýcExcelTarih->Value;
			DateTime bitisTarihi = BitisExcelTarih->Value;

			if (baslangicTarihi > bitisTarihi) {
				MessageBox::Show("Baþlangýç tarihi bitiþ tarihinden büyük olamaz!", "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Veritabaný baðlantýsý
			String^ connectionString = "Data Source=localhost;Initial Catalog=Kargo_Takip;Integrated Security=True";
			SqlConnection^ con = gcnew SqlConnection(connectionString);
			con->Open();

			// **Þubede olan kargolarý tarih aralýðýna göre getirme**
			String^ query = "SELECT * FROM Gonderi_Olusturma WHERE Tarih BETWEEN @BaslangicTarihi AND @BitisTarihi AND kargoDurum = 'Þubede'";
			SqlCommand^ cmd = gcnew SqlCommand(query, con);

			// Parametreler
			cmd->Parameters->AddWithValue("@BaslangicTarihi", baslangicTarihi.ToString("yyyy-MM-dd"));
			cmd->Parameters->AddWithValue("@BitisTarihi", bitisTarihi.ToString("yyyy-MM-dd"));

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(cmd);
			DataTable^ dataTable = gcnew DataTable();
			adapter->Fill(dataTable);

			// DataGridView'e veriyi baðlama
			dataGridView1->DataSource = dataTable;

			// Baðlantýyý kapatma
			con->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Hata: " + ex->Message, "Hata", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void ExcelleAktarSayfasi_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void YazdirButton_Click(System::Object^ sender, System::EventArgs^ e) {
	PrintDocument^ printDocument = gcnew PrintDocument();
	printDocument->PrintPage += gcnew PrintPageEventHandler(this, &ExcelleAktarSayfasi::PrintDocument_PrintPage);

	PrintPreviewDialog^ printPreviewDialog = gcnew PrintPreviewDialog();
	printPreviewDialog->Document = printDocument;

	// Yazdýrma önizleme ekranýný göster
	printPreviewDialog->ShowDialog();
}

private: System::Void PrintDocument_PrintPage(System::Object^ sender, PrintPageEventArgs^ e) {
	// Baþlangýç pozisyonu
	int yPosition = 0;
	int xPosition = 10;
	int lineHeight = 30;

	// DataGridView baþlýklarýný yazdýr
	for (int col = 0; col < dataGridView1->Columns->Count; col++) {
		String^ headerText = dataGridView1->Columns[col]->HeaderText;
		e->Graphics->DrawString(headerText, gcnew System::Drawing::Font("Arial", 12, FontStyle::Bold), Brushes::Black, xPosition, yPosition);
		xPosition += 150; // Sütun geniþliði
	}

	// Baþlýklar altýnda bir çizgi çiz
	yPosition += lineHeight;
	e->Graphics->DrawLine(Pens::Black, 10, yPosition, e->PageBounds.Width - 10, yPosition);
	yPosition += 10; // Çizgiden sonra boþluk

	// DataGridView verilerini yazdýr
	for (int row = 0; row < dataGridView1->Rows->Count - 1; row++) {
		xPosition = 10; // Her satýr için baþlangýç pozisyonunu sýfýrla
		for (int col = 0; col < dataGridView1->Columns->Count; col++) {
			Object^ cellValue = dataGridView1->Rows[row]->Cells[col]->Value;
			String^ text = cellValue == nullptr ? "" : cellValue->ToString();
			e->Graphics->DrawString(text, gcnew System::Drawing::Font("Arial", 10), Brushes::Black, xPosition, yPosition);
			xPosition += 150; // Sütun geniþliði
		}
		yPosition += lineHeight;

		// Sayfa sýnýrýna ulaþýldýysa yazdýrmayý durdur
		if (yPosition > e->PageBounds.Height - 50) {
			e->HasMorePages = true;
			return;
		}
	}

	e->HasMorePages = false;
}
};
}
