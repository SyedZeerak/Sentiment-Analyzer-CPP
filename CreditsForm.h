#pragma once

namespace SentiAay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Summary for CreditsForm
	/// </summary>
	public ref class CreditsForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		CreditsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}	
		CreditsForm(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreditsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ backButton;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreditsForm::typeid));
			this->backButton = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backButton))->BeginInit();
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->backButton->BackColor = System::Drawing::Color::Transparent;
			this->backButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.Image")));
			this->backButton->Location = System::Drawing::Point(83, 668);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(100, 50);
			this->backButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->backButton->TabIndex = 1;
			this->backButton->TabStop = false;
			this->backButton->Click += gcnew System::EventHandler(this, &CreditsForm::backButton_Click);
			// 
			// CreditsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->backButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"CreditsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreditsForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backButton))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		SoundPlayer^ splayer = gcnew SoundPlayer("G:\\_University Work\\Programming Fundamentals\\Sentiment Analysis\\The SentiAYY APP - Final\\click.wav");

		splayer->Play();
		this->Hide();
		obj->Show();
	}
	};
}
