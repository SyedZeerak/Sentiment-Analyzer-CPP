#pragma once
#include "SentimentForm.h" 
#include "CreditsForm.h" 
#include "DictionaryForm.h" 

namespace SentiAay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System ::Speech::Synthesis; //  ** For text to voice
	using namespace System::Speech::Recognition;
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ AnalyseButton;
	private: System::Windows::Forms::Button^ CreditsButton;
	private: System::Windows::Forms::Button^ dictionaryButton;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->AnalyseButton = (gcnew System::Windows::Forms::Button());
			this->CreditsButton = (gcnew System::Windows::Forms::Button());
			this->dictionaryButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// AnalyseButton
			// 
			resources->ApplyResources(this->AnalyseButton, L"AnalyseButton");
			this->AnalyseButton->BackColor = System::Drawing::Color::Transparent;
			this->AnalyseButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AnalyseButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->AnalyseButton->Name = L"AnalyseButton";
			this->AnalyseButton->UseVisualStyleBackColor = false;
			this->AnalyseButton->Click += gcnew System::EventHandler(this, &MainForm::AnalyseButton_Click);
			// 
			// CreditsButton
			// 
			resources->ApplyResources(this->CreditsButton, L"CreditsButton");
			this->CreditsButton->BackColor = System::Drawing::Color::Transparent;
			this->CreditsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CreditsButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(188)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->CreditsButton->Name = L"CreditsButton";
			this->CreditsButton->UseVisualStyleBackColor = false;
			this->CreditsButton->Click += gcnew System::EventHandler(this, &MainForm::CreditsButton_Click);
			// 
			// dictionaryButton
			// 
			resources->ApplyResources(this->dictionaryButton, L"dictionaryButton");
			this->dictionaryButton->BackColor = System::Drawing::Color::Transparent;
			this->dictionaryButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dictionaryButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->dictionaryButton->Name = L"dictionaryButton";
			this->dictionaryButton->UseVisualStyleBackColor = false;
			this->dictionaryButton->Click += gcnew System::EventHandler(this, &MainForm::dictionaryButton_Click);
			// 
			// MainForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dictionaryButton);
			this->Controls->Add(this->CreditsButton);
			this->Controls->Add(this->AnalyseButton);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->TopMost = true;
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AnalyseButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\click.wav");

		splayer->Play();
		this->Hide(); // Hides mainmenu
		SentimentForm^ objS = gcnew SentimentForm(this);
		objS->ShowDialog();

	}



	private: System::Void CreditsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\click.wav");

		splayer->Play();
		this->Hide(); // Hides mainmenu
		CreditsForm ^obj1 = gcnew CreditsForm(this);
		obj1->ShowDialog();
	}
	private: System::Void dictionaryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\click.wav");
		
		splayer->Play();
		this->Hide(); // Hides mainmenu
		DictionaryForm^ objD = gcnew DictionaryForm(this);
		objD->ShowDialog();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//string
	/*String^ newText = newWordBox->Text + ",";
	String^ newTextValue = newWordValueBox->Text;




	StreamWriter^ file = gcnew StreamWriter("dictionary.txt", true);
	file->WriteLine(newText + newTextValue);
	file->Close();
	*/

}
};
}
