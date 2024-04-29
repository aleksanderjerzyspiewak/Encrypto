#pragma once
#include "AlekCrypto.h"
#include <msclr/marshal_cppstd.h>


namespace Encrypto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o AddType
	/// </summary>
	public ref class AddType : public System::Windows::Forms::Form
	{
	public:
		AddType(void)
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
		~AddType()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddType::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nazwa";
			this->label1->Click += gcnew System::EventHandler(this, &AddType::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(59, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 20);
			this->textBox1->TabIndex = 1;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(178, 42);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(56, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Ukryty";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &AddType::checkBox1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Folder";
			this->label2->Click += gcnew System::EventHandler(this, &AddType::label2_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->button1->Location = System::Drawing::Point(59, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(52, 20);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Szukaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddType::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->button2->Location = System::Drawing::Point(14, 130);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Anuluj";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AddType::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(158)));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->button3->Location = System::Drawing::Point(159, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Dodaj";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AddType::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(218, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Zdiêcie";
			// 
			// button4
			// 
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->button4->Location = System::Drawing::Point(59, 91);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(20, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AddType::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(86, 93);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 20);
			this->textBox3->TabIndex = 10;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &AddType::saveFileDialog1_FileOk);
			// 
			// AddType
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(249, 170);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(197)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddType";
			this->Text = L"AddType";
			this->Load += gcnew System::EventHandler(this, &AddType::AddType_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddType_Load(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	FolderBrowserDialog^ folderBrowserDialog = gcnew FolderBrowserDialog();
	folderBrowserDialog->ShowNewFolderButton = true; // Umo¿liwia u¿ytkownikowi stworzenie nowego folderu w dialogu

	if (folderBrowserDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		textBox2->Text = folderBrowserDialog->SelectedPath; // Zapisuje œcie¿kê wybranego folderu
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Image Files|*.jpg;*.jpeg;*.png|All files (*.*)|*.*";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		textBox3->Text = openFileDialog->FileName;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ password = safe_cast<String^>(this->Tag);
	String^ filePath = textBox2->Text;		// Ustaw to w miejscu gdzie tworzysz form
	String^ imagePath = textBox3->Text;	
	String^ name = textBox1->Text;
	String^ dbPath = "./localdb.enc";
	String^ type = "link";

	if (String::IsNullOrEmpty(filePath)) return;
	String^ newFilePath = System::IO::Path::Combine(filePath, name + ".enc");

	try {
		// Tworzenie nowego pustego pliku
		System::IO::FileStream^ fs = System::IO::File::Create(newFilePath);
		fs->Close();  // Zamkniêcie strumienia, co jest konieczne aby uwolniæ plik

		// Ustawienie atrybutu ukrytego, jeœli checkBox jest zaznaczony
		CheckBox^ checkBox = dynamic_cast<CheckBox^>(this->Controls->Find("checkBox1", true)[0]);
		if (checkBox != nullptr && checkBox->Checked) {
			System::IO::File::SetAttributes(newFilePath, System::IO::FileAttributes::Hidden);
		}
		String^ newCodedLine = System::IO::Path::Combine(name + ";" + type + ";" + imagePath + ";" + newFilePath);
		std::wstring toCode = this->sysStringToStdWString(newCodedLine);
		std::wstring stringPassword = this->sysStringToStdWString(password);
		std::wstring encrypted = AlekCrypto::caesarSliding(toCode, stringPassword);
		newCodedLine = this->stdWStringToSysString(encrypted);
		// Dodanie linii do pliku lokalnej bazy danych
		System::IO::StreamWriter^ sw = System::IO::File::AppendText(dbPath);
		sw->WriteLine(newCodedLine);
		sw->Close();  // Zamkniêcie pliku bazy danych
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Wyst¹pi³ b³¹d: " + ex->Message);
		return;
	}
	this->Close();
}
};
}
