#pragma once
#include <iostream>
#include "AddLinkForm.h"
#include "AddType.h"
#include "AlekCrypto.h"
#include <msclr/marshal_cppstd.h>



namespace Encrypto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	///
	/// own
	/// 
	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		ref class PanelData {
		public:
			String^ FilePath;
			String^ AdditionalData;

			PanelData(String^ filePath, String^ additionalData) {
				FilePath = filePath;
				AdditionalData = additionalData;
			}
		};


	public:
		System::String^ password = "";
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(415, 200);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(450, 200);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->label1->Location = System::Drawing::Point(31, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Password";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(25, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(400, 32);
			this->textBox1->TabIndex = 1;
			this->textBox1->UseSystemPasswordChar = true;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->button1->Location = System::Drawing::Point(270, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->flowLayoutPanel1);
			this->panel2->Controls->Add(this->tableLayoutPanel1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(2, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1262, 683);
			this->panel2->TabIndex = 1;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->flowLayoutPanel1->Location = System::Drawing::Point(133, 70);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1100, 600);
			this->flowLayoutPanel1->TabIndex = 3;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 7;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5.050505F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.37374F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5.050505F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5.050505F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5.050505F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5.050505F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.37374F)));
			this->tableLayoutPanel1->Controls->Add(this->button2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button5, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->button6, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->button7, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button8, 6, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1262, 64);
			this->tableLayoutPanel1->TabIndex = 2;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(57, 58);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Location = System::Drawing::Point(537, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(57, 58);
			this->button3->TabIndex = 1;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button4->Location = System::Drawing::Point(600, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(57, 58);
			this->button4->TabIndex = 2;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Location = System::Drawing::Point(663, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(57, 58);
			this->button5->TabIndex = 3;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Location = System::Drawing::Point(726, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(57, 58);
			this->button6->TabIndex = 4;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->Location = System::Drawing::Point(25, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(25, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"label2";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(66, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(58, 58);
			this->button7->TabIndex = 5;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Right;
			this->button8->Location = System::Drawing::Point(1201, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(58, 58);
			this->button8->TabIndex = 6;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Encrypto";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   std::wstring sysStringToStdWString(System::String^ input) {
			   msclr::interop::marshal_context context;
			   return context.marshal_as<std::wstring>(input);
		   }

		   System::String^ stdWStringToSysString(const std::wstring& input) {
			   return gcnew System::String(input.c_str());
		   }
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	this->password = textBox1->Text->ToString();
	label2->Text = this->password;
	panel2->Visible = true;
	textBox1->Text = "";
	String^ path = "./localdb.enc";
	// Próbuj odczytaæ zawartoœæ pliku
	StreamReader^ sr = gcnew StreamReader(path);
	String^ line;
	flowLayoutPanel1->Controls->Clear();
	while ((line = sr->ReadLine()) != nullptr) {
		std::wstring toCode = this->sysStringToStdWString(line);
		std::wstring stringPassword = this->sysStringToStdWString(this->password);
		std::wstring decrypted = AlekCrypto::caesarSlidingDec(toCode, stringPassword);
		line = this->stdWStringToSysString(decrypted);
		array<String^>^ parts = line->Split(';');
		if (parts->Length >= 4) {
			String^ name = parts[0];
			String^ text = parts[1];
			String^ imagePath = parts[2];
			String^ filePath = parts[3];

			Panel^ panel = gcnew Panel();
			panel->Width = 150; // Szerokoœæ panelu
			panel->Height = 200; // Wysokoœæ panelu
			panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			panel->BackColor = System::Drawing::Color::FromArgb(255, 0xC5, 0xC6, 0xC7);
			panel->Click += gcnew System::EventHandler(this, &MyForm::Panel_Click);
			PanelData^ data = gcnew PanelData(filePath, text);
			panel->Tag = data;	
			
			SetPanelFontAndColor(panel);


			Label^ nameLabel = gcnew Label();
			nameLabel->Text = name;
			nameLabel->Width = 140;
			nameLabel->Height = 20;
			nameLabel->Location = System::Drawing::Point(5, 5);

			PictureBox^ pictureBox = gcnew PictureBox();
			if (System::IO::File::Exists(imagePath)) {
				pictureBox->ImageLocation = imagePath; // Je¿eli plik istnieje, ustaw œcie¿kê
			}
			else {
				pictureBox->ImageLocation = "./noimage.png"; // Je¿eli plik nie istnieje, ustaw alternatywny obraz
			}
			pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox->Size = System::Drawing::Size(140, 140);  // Rozmiar obrazu
			pictureBox->Location = System::Drawing::Point(5, 30);

			Label^ textLabel = gcnew Label();
			textLabel->Text = text;
			//textLabel->Dock = DockStyle::Top;
			textLabel->Visible = false;


			Button^ deleteButton = gcnew Button();
			deleteButton->Text = "Usuñ";
			deleteButton->Dock = DockStyle::Bottom;
			deleteButton->Tag = line; // Zapisz ca³¹ liniê jako Tag, aby u¿yæ przy usuwaniu
			deleteButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteButton_Click);
			deleteButton->BackColor = System::Drawing::Color::FromArgb(255, 0xa2, 0x50, 0x29);
			deleteButton->Height = 30;
			deleteButton->Margin = System::Windows::Forms::Padding(0, 0, 0, 0);

			// Dodanie kontrolek do panelu
			panel->Controls->Add(nameLabel);
			panel->Controls->Add(pictureBox);

			// Dodanie panelu do FlowLayoutPanel
			for each (Control ^ control in panel->Controls) {
				control->Click += gcnew System::EventHandler(this, &MyForm::Panel_Click);
				control->Tag = panel->Tag;
			}
			panel->Controls->Add(deleteButton);
			flowLayoutPanel1->Controls->Add(panel);

		}
	}
	sr->Close();

}
private: System::Void SetPanelFontAndColor(Panel^ panel) {
	// Ustawienie nowego fontu
	FontStyle style = FontStyle::Bold;  // Ustawienie stylu czcionki na pogrubiony
	float fontSize = 12.0f;  // Rozmiar czcionki
	String^ fontFamily = "Arial";  // Rodzina czcionek

	// Tworzenie nowego fontu
	System::Drawing::Font^ newFont = gcnew System::Drawing::Font(fontFamily, fontSize, style);
	panel->Font = newFont;

	// Ustawienie koloru tekstu na panelu
	Color textColor = ColorTranslator::FromHtml("#1f2833");  // Przekszta³canie koloru HTML na obiekt Color
	panel->ForeColor = textColor;
}

private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = dynamic_cast<Button^>(sender);
	if (button == nullptr) return;

	String^ line = safe_cast<String^>(button->Tag);
	String^ name = line->Split(';')[0]; // Zak³adaj¹c, ¿e nazwa jest pierwszym elementem w linii.
	String^ filePath = line->Split(';')[3];

	// Wyœwietl okno dialogowe z pytaniem o potwierdzenie
	System::Windows::Forms::DialogResult result = MessageBox::Show("Czy na pewno chcesz usun¹æ " + name + "?", "Potwierdzenie", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		// Jeœli u¿ytkownik kliknie "Tak", usuñ element
		RemoveLineFromFile(line); // Metoda usuwaj¹ca liniê z pliku
		if (System::IO::File::Exists(filePath)) {
			try {
				System::IO::File::Delete(filePath);
			}
			catch (System::IO::IOException^ ex) {
				MessageBox::Show("Nie mo¿na usun¹æ pliku: " + ex->Message, "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; // Zakoñcz, jeœli nie uda³o siê usun¹æ pliku
			}
		}
		flowLayoutPanel1->Controls->Remove(button->Parent); // Usuñ panel z FlowLayoutPanel
	}
}
private: System::Void RemoveLineFromFile(String^ lineToDelete) {
	String^ tempFile = System::IO::Path::GetTempFileName();
	StreamReader^ reader = gcnew StreamReader("./localdb.enc");
	StreamWriter^ writer = gcnew StreamWriter(tempFile);

	String^ line;
	while ((line = reader->ReadLine()) != nullptr) {
		if (line != lineToDelete)
			writer->WriteLine(line);
	}

	reader->Close();
	writer->Close();

	System::IO::File::Delete("./localdb.enc");
	System::IO::File::Move(tempFile, "./localdb.enc");
}
private: System::Void Panel_Click(System::Object^ sender, System::EventArgs^ e) {
	Control^ control = dynamic_cast<Control^>(sender);
	if (control == nullptr) return;

	PanelData^ data = dynamic_cast<PanelData^>(control->Tag);

	if (data != nullptr) {
		String^ filePath = data->FilePath;
		String^ additionalData = data->AdditionalData;
			
		if (additionalData == "link")
		{
			flowLayoutPanel1->Controls->Clear();
			StreamReader^ fileReader = gcnew StreamReader(filePath);
			String^ line;

			button8->Tag = filePath;
			button8->Click += gcnew System::EventHandler(this, &MyForm::AddLink_Click);

			while ((line = fileReader->ReadLine()) != nullptr) {
				array<String^>^ parts = line->Split(';');
				if (parts->Length >= 3) {
					String^ name = parts[0];
					String^ imagePath = parts[1];
					String^ webPath = parts[2];

					Panel^ panel = gcnew Panel();
					panel->Width = 400;
					panel->Height = 150;
					panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
					panel->BackColor = System::Drawing::Color::FromArgb(255, 0xC5, 0xC6, 0xC7);
					panel->Click += gcnew System::EventHandler(this, &MyForm::Link_Click);
					panel->Tag = webPath;
					SetPanelFontAndColor(panel);

					PictureBox^ pictureBox = gcnew PictureBox();
					if (System::IO::File::Exists(imagePath)) {
						pictureBox->ImageLocation = imagePath; // Je¿eli plik istnieje, ustaw œcie¿kê
					}
					else {
						pictureBox->ImageLocation = "./noimage.png"; // Je¿eli plik nie istnieje, ustaw alternatywny obraz
					}
					pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
					pictureBox->Size = System::Drawing::Size(150, 150);  // Rozmiar obrazu
					pictureBox->Location = System::Drawing::Point(0, 0);

					Label^ textLabel = gcnew Label();
					textLabel->Text = name;
					textLabel->Location = System::Drawing::Point(155, 10); // Ustawienie po prawej stronie obrazu
					textLabel->Width = 225;

					LinkLabel^ linkLabel = gcnew LinkLabel();
					linkLabel->Text = webPath;
					linkLabel->Location = System::Drawing::Point(155, 40);  // Pod tekstem
					linkLabel->Width = 225;  // Szerokoœæ mo¿e byæ dostosowana

					Button^ deleteButton = gcnew Button();
					deleteButton->Text = "U";
					deleteButton->Size = System::Drawing::Size(40, 40);  // Wymiary przycisku
					deleteButton->Location = System::Drawing::Point(360, 110);  // Prawy dolny róg
					PanelData^ dataToDelete = gcnew PanelData(filePath, line);
					deleteButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteButtonUni_Click);
					deleteButton->Tag = dataToDelete;

					panel->Controls->Add(textLabel);
					panel->Controls->Add(linkLabel);
					panel->Controls->Add(pictureBox);

					flowLayoutPanel1->Controls->Add(panel);
					for each (Control ^ control in panel->Controls) {
						control->Click += gcnew System::EventHandler(this, &MyForm::Link_Click);
						control->Tag = panel->Tag;
					}
					panel->Controls->Add(deleteButton);

				}
			}
			fileReader->Close();
		}
		
	}
}
private: System::Void AddLink_Click(System::Object^ sender, System::EventArgs^ e) {
	Control^ control = dynamic_cast<Control^>(sender);
	if (control == nullptr) return;
	String^ filePath = safe_cast<String^>(control->Tag);
	if (String::IsNullOrEmpty(filePath)) return;

	AddLinkForm^ form = gcnew AddLinkForm();
	form->Tag = filePath; 
	form->ShowDialog();
	flowLayoutPanel1->Controls->Clear();
	StreamReader^ fileReader = gcnew StreamReader(filePath);
	String^ line;
	while ((line = fileReader->ReadLine()) != nullptr) {
		array<String^>^ parts = line->Split(';');
		if (parts->Length >= 3) {
			String^ name = parts[0];
			String^ imagePath = parts[1];
			String^ webPath = parts[2];

			Panel^ panel = gcnew Panel();
			panel->Width = 400;
			panel->Height = 150;
			panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			panel->BackColor = System::Drawing::Color::FromArgb(255, 0xC5, 0xC6, 0xC7);
			panel->Click += gcnew System::EventHandler(this, &MyForm::Link_Click);
			panel->Tag = webPath;
			SetPanelFontAndColor(panel);

			PictureBox^ pictureBox = gcnew PictureBox();
			if (System::IO::File::Exists(imagePath)) {
				pictureBox->ImageLocation = imagePath; // Je¿eli plik istnieje, ustaw œcie¿kê
			}
			else {
				pictureBox->ImageLocation = "./noimage.png"; // Je¿eli plik nie istnieje, ustaw alternatywny obraz
			}
			pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox->Size = System::Drawing::Size(150, 150);  // Rozmiar obrazu
			pictureBox->Location = System::Drawing::Point(0, 0);

			Label^ textLabel = gcnew Label();
			textLabel->Text = name;
			textLabel->Location = System::Drawing::Point(155, 10); // Ustawienie po prawej stronie obrazu
			textLabel->Width = 225;

			LinkLabel^ linkLabel = gcnew LinkLabel();
			linkLabel->Text = webPath;
			linkLabel->Location = System::Drawing::Point(155, 40);  // Pod tekstem
			linkLabel->Width = 225;  // Szerokoœæ mo¿e byæ dostosowana

			Button^ deleteButton = gcnew Button();
			deleteButton->Text = "U";
			deleteButton->Size = System::Drawing::Size(40, 40);  // Wymiary przycisku
			deleteButton->Location = System::Drawing::Point(360, 110);  // Prawy dolny róg
			PanelData^ dataToDelete = gcnew PanelData(filePath, line);
			deleteButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteButtonUni_Click);
			deleteButton->Tag = dataToDelete;

			panel->Controls->Add(textLabel);
			panel->Controls->Add(linkLabel);
			panel->Controls->Add(pictureBox);

			flowLayoutPanel1->Controls->Add(panel);
			for each (Control ^ control in panel->Controls) {
				control->Click += gcnew System::EventHandler(this, &MyForm::Link_Click);
				control->Tag = panel->Tag;
			}
			panel->Controls->Add(deleteButton);

		}
	}
	fileReader->Close();
}
private: System::Void Link_Click(System::Object^ sender, System::EventArgs^ e) {
	Control^ control = dynamic_cast<Control^>(sender);
	if (control == nullptr) return;

	String^ webPath = safe_cast<String^>(control->Tag);
	if (String::IsNullOrEmpty(webPath)) return;

	try {
		System::Diagnostics::Process::Start(webPath); // Otwiera URL w domyœlnej przegl¹darce
	}
	catch (System::ComponentModel::Win32Exception^ ex) {
		MessageBox::Show("Nie mo¿na otworzyæ przegl¹darki: " + ex->Message);
	}
}
private: System::Void DeleteButtonUni_Click(System::Object^ sender, System::EventArgs^ e) {
	Control^ control = dynamic_cast<Control^>(sender);
	if (control == nullptr) return;

	PanelData^ data = dynamic_cast<PanelData^>(control->Tag);

	if (data != nullptr) {
		String^ filePath = data->FilePath;
		String^ name = data->AdditionalData;
		System::Windows::Forms::DialogResult result = MessageBox::Show("Czy na pewno chcesz usun¹æ?", "Potwierdzenie", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			// Jeœli u¿ytkownik kliknie "Tak", usuñ element
			String^ tempFile = System::IO::Path::GetTempFileName();
			StreamReader^ reader = gcnew StreamReader(filePath);
			StreamWriter^ writer = gcnew StreamWriter(tempFile);

			String^ line;
			while ((line = reader->ReadLine()) != nullptr) {
				if (line != name)
					writer->WriteLine(line);
			}

			reader->Close();
			writer->Close();

			System::IO::File::Delete(filePath);
			System::IO::File::Move(tempFile, filePath);

			flowLayoutPanel1->Controls->Remove(control->Parent); // Usuñ panel z FlowLayoutPanel
		}
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
	this->password = "";
	panel2->Visible = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	AddType^ form = gcnew AddType();
	form->Tag = password;
	form->ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	panel2->Visible = true;
	String^ path = "./localdb.enc";
	// Próbuj odczytaæ zawartoœæ pliku
	StreamReader^ sr = gcnew StreamReader(path);
	String^ line;
	flowLayoutPanel1->Controls->Clear();
	while ((line = sr->ReadLine()) != nullptr) {
		array<String^>^ parts = line->Split(';');
		if (parts->Length >= 4) {
			String^ name = parts[0];
			String^ text = parts[1];
			String^ imagePath = parts[2];
			String^ filePath = parts[3];

			Panel^ panel = gcnew Panel();
			panel->Width = 150; // Szerokoœæ panelu
			panel->Height = 200; // Wysokoœæ panelu
			panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			panel->BackColor = System::Drawing::Color::FromArgb(255, 0xC5, 0xC6, 0xC7);
			panel->Click += gcnew System::EventHandler(this, &MyForm::Panel_Click);
			PanelData^ data = gcnew PanelData(filePath, text);
			panel->Tag = data;

			SetPanelFontAndColor(panel);


			Label^ nameLabel = gcnew Label();
			nameLabel->Text = name;
			nameLabel->Dock = DockStyle::Top;
			nameLabel->Padding = System::Windows::Forms::Padding(10, 5, 0, 0);


			PictureBox^ pictureBox = gcnew PictureBox();
			if (System::IO::File::Exists(imagePath)) {
				pictureBox->ImageLocation = imagePath; // Je¿eli plik istnieje, ustaw œcie¿kê
			}
			else {
				pictureBox->ImageLocation = "./noimage.png"; // Je¿eli plik nie istnieje, ustaw alternatywny obraz
			}
			pictureBox->SizeMode = PictureBoxSizeMode::CenterImage;
			pictureBox->Height = 160;
			pictureBox->Width = 150;
			pictureBox->Dock = DockStyle::Top;

			Label^ textLabel = gcnew Label();
			textLabel->Text = text;
			textLabel->Dock = DockStyle::Top;

			Button^ deleteButton = gcnew Button();
			deleteButton->Text = "Usuñ";
			deleteButton->Dock = DockStyle::Bottom;
			deleteButton->Tag = line; // Zapisz ca³¹ liniê jako Tag, aby u¿yæ przy usuwaniu
			deleteButton->Click += gcnew System::EventHandler(this, &MyForm::DeleteButton_Click);
			deleteButton->BackColor = System::Drawing::Color::FromArgb(255, 0xa2, 0x50, 0x29);
			deleteButton->Height = 30;
			deleteButton->Margin = System::Windows::Forms::Padding(10, 0, 10, 20);

			// Dodanie kontrolek do panelu
			panel->Controls->Add(deleteButton);
			panel->Controls->Add(textLabel);
			panel->Controls->Add(pictureBox);
			panel->Controls->Add(nameLabel);

			// Dodanie panelu do FlowLayoutPanel
			flowLayoutPanel1->Controls->Add(panel);
			for each (Control ^ control in panel->Controls) {
				control->Click += gcnew System::EventHandler(this, &MyForm::Panel_Click);
				control->Tag = panel->Tag;
			}
		}
	}
	sr->Close();
}
};

}



