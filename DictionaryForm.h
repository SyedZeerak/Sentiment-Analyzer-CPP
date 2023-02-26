#pragma once


namespace SentiAay {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System ::Speech::Synthesis; //  ** For text to voice
	using namespace System::Speech::Recognition;// Voice to text
	using namespace System::Media;

	/// <summary>
	/// Summary for DictionaryForm
	/// </summary>
	public ref class DictionaryForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
	public:
		DictionaryForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DictionaryForm(Form^ objS)
		{
			obj = objS;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DictionaryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ newWordBox;
	private: System::Windows::Forms::TextBox^ newWordValueBox;
	private: System::Windows::Forms::PictureBox^ addText;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DictionaryForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->newWordBox = (gcnew System::Windows::Forms::TextBox());
			this->newWordValueBox = (gcnew System::Windows::Forms::TextBox());
			this->addText = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addText))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(83, 668);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &DictionaryForm::pictureBox1_Click);
			// 
			// newWordBox
			// 
			this->newWordBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->newWordBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->newWordBox->Font = (gcnew System::Drawing::Font(L"Lato", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newWordBox->ForeColor = System::Drawing::Color::White;
			this->newWordBox->Location = System::Drawing::Point(894, 280);
			this->newWordBox->Name = L"newWordBox";
			this->newWordBox->Size = System::Drawing::Size(280, 23);
			this->newWordBox->TabIndex = 2;
			this->newWordBox->TextChanged += gcnew System::EventHandler(this, &DictionaryForm::newWordBox_TextChanged);
			// 
			// newWordValueBox
			// 
			this->newWordValueBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->newWordValueBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->newWordValueBox->Font = (gcnew System::Drawing::Font(L"Lato", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newWordValueBox->ForeColor = System::Drawing::Color::White;
			this->newWordValueBox->Location = System::Drawing::Point(1255, 279);
			this->newWordValueBox->Name = L"newWordValueBox";
			this->newWordValueBox->Size = System::Drawing::Size(41, 23);
			this->newWordValueBox->TabIndex = 3;
			// 
			// addText
			// 
			this->addText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->addText->BackColor = System::Drawing::Color::Transparent;
			this->addText->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addText->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addText.Image")));
			this->addText->Location = System::Drawing::Point(891, 343);
			this->addText->Name = L"addText";
			this->addText->Size = System::Drawing::Size(405, 23);
			this->addText->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->addText->TabIndex = 4;
			this->addText->TabStop = false;
			this->addText->Click += gcnew System::EventHandler(this, &DictionaryForm::addText_Click);
			// 
			// DictionaryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->addText);
			this->Controls->Add(this->newWordValueBox);
			this->Controls->Add(this->newWordBox);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"DictionaryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DictionaryForm";
			this->Load += gcnew System::EventHandler(this, &DictionaryForm::DictionaryForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addText))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

		SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\click.wav");

		splayer->Play();

		this->Hide();
		obj->Show();
	}
	private: System::Void newWordBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void addText_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ newText = newWordBox->Text + ",";
	String^ newTextValue = newWordValueBox ->Text;
	
			

			
	StreamWriter^ file = gcnew StreamWriter("dictionary.txt", true);
	file->WriteLine(newText + newTextValue);
	file->Close();
	/*
	SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\Hamza\\Theword.wav");

	splayer->Play();
	*/
	//  **Code for Text into Speech
	SpeechSynthesizer^ ss = gcnew SpeechSynthesizer();
	//ss->Speak("The"->Text);
	ss->Speak(newWordBox->Text); // Text box ka text
	
	SoundPlayer^ xplayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\isadd.wav");

	xplayer->Play();
	
	MessageBox::Show("Word Added Successfully!");
	newWordBox->Text = " ";
	newWordValueBox->Text = " ";
}
private: System::Void DictionaryForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
