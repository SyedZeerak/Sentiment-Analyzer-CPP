#pragma once
#include "SentimentAnalyzer.h"
#include <msclr/marshal_cppstd.h>



namespace SentiAay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	//using namespace std;

	/// <summary>
	/// Summary for SentimentForm
	/// </summary>
	public ref class SentimentForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		int sentimentValue;
		int confidenceValue;
	private: System::Windows::Forms::PictureBox^ positive;
	private: System::Windows::Forms::PictureBox^ negative;
	private: System::Windows::Forms::PictureBox^ neutral;
	private: System::Windows::Forms::Label^ confidenceLabel;

	public:
		String^ sSV;
	private: System::Windows::Forms::ProgressBar^ confidenceBar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ positiveWordsText;
	private: System::Windows::Forms::Label^ negativeWordsText;
	public:
		String^ sCV;

		//Variables for showing stats
		int posTextCount = 0;
		int negTextCount = 0;

		SentimentForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//setDictionary();
			//
		}	
		SentimentForm(Form ^objS)
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
		~SentimentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ sentimentTextBox;
	private: System::Windows::Forms::Button^ analyseText;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SentimentForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->sentimentTextBox = (gcnew System::Windows::Forms::TextBox());
			this->analyseText = (gcnew System::Windows::Forms::Button());
			this->positive = (gcnew System::Windows::Forms::PictureBox());
			this->negative = (gcnew System::Windows::Forms::PictureBox());
			this->neutral = (gcnew System::Windows::Forms::PictureBox());
			this->confidenceLabel = (gcnew System::Windows::Forms::Label());
			this->confidenceBar = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->positiveWordsText = (gcnew System::Windows::Forms::Label());
			this->negativeWordsText = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->positive))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->negative))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->neutral))->BeginInit();
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
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SentimentForm::pictureBox1_Click);
			// 
			// sentimentTextBox
			// 
			this->sentimentTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->sentimentTextBox->BackColor = System::Drawing::Color::Black;
			this->sentimentTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->sentimentTextBox->Font = (gcnew System::Drawing::Font(L"Lato", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sentimentTextBox->ForeColor = System::Drawing::Color::White;
			this->sentimentTextBox->Location = System::Drawing::Point(96, 274);
			this->sentimentTextBox->MaximumSize = System::Drawing::Size(665, 312);
			this->sentimentTextBox->Multiline = true;
			this->sentimentTextBox->Name = L"sentimentTextBox";
			this->sentimentTextBox->Size = System::Drawing::Size(638, 283);
			this->sentimentTextBox->TabIndex = 1;
			this->sentimentTextBox->TextChanged += gcnew System::EventHandler(this, &SentimentForm::textBox1_TextChanged);
			// 
			// analyseText
			// 
			this->analyseText->BackColor = System::Drawing::Color::Transparent;
			this->analyseText->Cursor = System::Windows::Forms::Cursors::Hand;
			this->analyseText->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->analyseText->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->analyseText->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"analyseText.Image")));
			this->analyseText->Location = System::Drawing::Point(577, 595);
			this->analyseText->Name = L"analyseText";
			this->analyseText->Size = System::Drawing::Size(157, 43);
			this->analyseText->TabIndex = 2;
			this->analyseText->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->analyseText->UseVisualStyleBackColor = false;
			this->analyseText->Click += gcnew System::EventHandler(this, &SentimentForm::analyseText_Click);
			// 
			// positive
			// 
			this->positive->BackColor = System::Drawing::Color::Transparent;
			this->positive->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"positive.Image")));
			this->positive->Location = System::Drawing::Point(898, 217);
			this->positive->Name = L"positive";
			this->positive->Size = System::Drawing::Size(410, 130);
			this->positive->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->positive->TabIndex = 3;
			this->positive->TabStop = false;
			this->positive->Click += gcnew System::EventHandler(this, &SentimentForm::positive_Click);
			// 
			// negative
			// 
			this->negative->BackColor = System::Drawing::Color::Transparent;
			this->negative->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"negative.Image")));
			this->negative->Location = System::Drawing::Point(898, 217);
			this->negative->Name = L"negative";
			this->negative->Size = System::Drawing::Size(410, 130);
			this->negative->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->negative->TabIndex = 4;
			this->negative->TabStop = false;
			// 
			// neutral
			// 
			this->neutral->BackColor = System::Drawing::Color::Transparent;
			this->neutral->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"neutral.Image")));
			this->neutral->Location = System::Drawing::Point(898, 217);
			this->neutral->Name = L"neutral";
			this->neutral->Size = System::Drawing::Size(410, 130);
			this->neutral->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->neutral->TabIndex = 5;
			this->neutral->TabStop = false;
			this->neutral->Click += gcnew System::EventHandler(this, &SentimentForm::neutral_Click);
			// 
			// confidenceLabel
			// 
			this->confidenceLabel->AutoSize = true;
			this->confidenceLabel->BackColor = System::Drawing::Color::Transparent;
			this->confidenceLabel->Font = (gcnew System::Drawing::Font(L"Lato Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confidenceLabel->ForeColor = System::Drawing::Color::White;
			this->confidenceLabel->Location = System::Drawing::Point(1159, 437);
			this->confidenceLabel->Name = L"confidenceLabel";
			this->confidenceLabel->Size = System::Drawing::Size(36, 25);
			this->confidenceLabel->TabIndex = 6;
			this->confidenceLabel->Text = L"00";
			this->confidenceLabel->Click += gcnew System::EventHandler(this, &SentimentForm::label1_Click);
			// 
			// confidenceBar
			// 
			this->confidenceBar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->confidenceBar->ForeColor = System::Drawing::Color::Teal;
			this->confidenceBar->Location = System::Drawing::Point(941, 634);
			this->confidenceBar->Name = L"confidenceBar";
			this->confidenceBar->Size = System::Drawing::Size(325, 35);
			this->confidenceBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->confidenceBar->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lato Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(1210, 437);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"%";
			this->label1->Click += gcnew System::EventHandler(this, &SentimentForm::label1_Click_1);
			// 
			// positiveWordsText
			// 
			this->positiveWordsText->AutoSize = true;
			this->positiveWordsText->BackColor = System::Drawing::Color::Transparent;
			this->positiveWordsText->Font = (gcnew System::Drawing::Font(L"Lato Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->positiveWordsText->ForeColor = System::Drawing::Color::White;
			this->positiveWordsText->Location = System::Drawing::Point(1159, 495);
			this->positiveWordsText->Name = L"positiveWordsText";
			this->positiveWordsText->Size = System::Drawing::Size(36, 25);
			this->positiveWordsText->TabIndex = 9;
			this->positiveWordsText->Text = L"00";
			// 
			// negativeWordsText
			// 
			this->negativeWordsText->AutoSize = true;
			this->negativeWordsText->BackColor = System::Drawing::Color::Transparent;
			this->negativeWordsText->Font = (gcnew System::Drawing::Font(L"Lato Black", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->negativeWordsText->ForeColor = System::Drawing::Color::White;
			this->negativeWordsText->Location = System::Drawing::Point(1159, 552);
			this->negativeWordsText->Name = L"negativeWordsText";
			this->negativeWordsText->Size = System::Drawing::Size(36, 25);
			this->negativeWordsText->TabIndex = 10;
			this->negativeWordsText->Text = L"00";
			// 
			// SentimentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->negativeWordsText);
			this->Controls->Add(this->positiveWordsText);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->confidenceBar);
			this->Controls->Add(this->confidenceLabel);
			this->Controls->Add(this->neutral);
			this->Controls->Add(this->negative);
			this->Controls->Add(this->positive);
			this->Controls->Add(this->analyseText);
			this->Controls->Add(this->sentimentTextBox);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"SentimentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &SentimentForm::SentimentForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->positive))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->negative))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->neutral))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SentimentForm_Load(System::Object^ sender, System::EventArgs^ e) {
		positive->Hide();
		negative->Hide();
		neutral->Hide();


	}
	private: System::Void pictureBox1_Click(System::Object^
		sender, System::EventArgs^ e) {
		SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\click.wav");

		splayer->Play();
		this->Hide();
		obj->Show();

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void analyseText_Click(System::Object^ sender, System::EventArgs^ e) {
		SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\click.wav");

		splayer->Play();
		positive->Hide();
		negative->Hide();
		neutral->Hide();


		clearAll();
		confidenceValue = 0;
		confidenceBar->Value = 0;
		sentimentValue = 0;
		//String to System String
		String^ enteredText = sentimentTextBox->Text;
		msclr::interop::marshal_context context;
		std::string input = context.marshal_as<std::string>(enteredText);
		std::string converted = input;
		sentimentValue = getSentimentValue(input);

		//sSV = System::Convert::ToString(sentimentValue);

		if (sentimentValue > 0)
		{	
			SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\pos.wav");

			splayer->Play();
			positive->Show();
			confidenceValue = int(((positiveWords.size() * (100 / sCounter))));

			sCV = System::Convert::ToString(confidenceValue);
			confidenceLabel->Text = sCV;
			confidenceBar->Value = confidenceValue;
		}	
		if (sentimentValue == 0)
		{
			SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\neutral.wav");

			splayer->Play();
			neutral->Show();
			confidenceValue = int((((negativeWords.size() + positiveWords.size()) / 2) * (100 / sCounter)));

			sCV = System::Convert::ToString(confidenceValue);
			confidenceLabel->Text = sCV;
			confidenceBar->Value = confidenceValue;
		
		}	
		if (sentimentValue < 0)
		{	
			SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\neg.wav");

			splayer->Play();
			negative->Show();
			confidenceValue = int((negativeWords.size() * (100 / sCounter)));
			sCV = System::Convert::ToString(confidenceValue);
			confidenceLabel->Text = sCV;
			confidenceBar->Value = confidenceValue;
		}
		//displaying Stats
		posTextCount = positiveWords.size();
		negTextCount = negativeWords.size();

		positiveWordsText->Text = System::Convert::ToString(posTextCount);
		negativeWordsText->Text = System::Convert::ToString(negTextCount);



		
	}
private: System::Void positive_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void neutral_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}
