#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TicTacToeApp {

	/// <summary>
	/// Summary for ViewReplayOptionPage
	/// </summary>
	public ref class ViewReplayOptionPage : public System::Windows::Forms::UserControl
	{
	public:
		event EventHandler^ GoToHome;
		ViewReplayOptionPage(void)
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
		~ViewReplayOptionPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGoToHome;
	private: System::Windows::Forms::Label^ simplifyLabel;
	private: System::Windows::Forms::Label^ tictactoeHeaderLabel;
	private: System::Windows::Forms::Label^ selectReplayLabel;




	private: System::Windows::Forms::Button^ watchReplayBtn;
	private: System::Windows::Forms::Button^ deleteReplayBtn;
	private: System::Windows::Forms::Button^ editMemoBtn;
	private: System::Windows::Forms::ComboBox^ selectReplayComboBox1;
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
			this->btnGoToHome = (gcnew System::Windows::Forms::Button());
			this->simplifyLabel = (gcnew System::Windows::Forms::Label());
			this->tictactoeHeaderLabel = (gcnew System::Windows::Forms::Label());
			this->selectReplayLabel = (gcnew System::Windows::Forms::Label());
			this->watchReplayBtn = (gcnew System::Windows::Forms::Button());
			this->deleteReplayBtn = (gcnew System::Windows::Forms::Button());
			this->editMemoBtn = (gcnew System::Windows::Forms::Button());
			this->selectReplayComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// btnGoToHome
			// 
			this->btnGoToHome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGoToHome->Location = System::Drawing::Point(75, 57);
			this->btnGoToHome->Name = L"btnGoToHome";
			this->btnGoToHome->Size = System::Drawing::Size(94, 37);
			this->btnGoToHome->TabIndex = 1;
			this->btnGoToHome->Text = L"Return";
			this->btnGoToHome->Click += gcnew System::EventHandler(this, &ViewReplayOptionPage::btnGoToHome_Click);
			// 
			// simplifyLabel
			// 
			this->simplifyLabel->AutoSize = true;
			this->simplifyLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->simplifyLabel->Location = System::Drawing::Point(254, 116);
			this->simplifyLabel->Name = L"simplifyLabel";
			this->simplifyLabel->Size = System::Drawing::Size(156, 32);
			this->simplifyLabel->TabIndex = 31;
			this->simplifyLabel->Text = L"By Simplify";
			// 
			// tictactoeHeaderLabel
			// 
			this->tictactoeHeaderLabel->AutoSize = true;
			this->tictactoeHeaderLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tictactoeHeaderLabel->Location = System::Drawing::Point(207, 57);
			this->tictactoeHeaderLabel->Name = L"tictactoeHeaderLabel";
			this->tictactoeHeaderLabel->Size = System::Drawing::Size(276, 55);
			this->tictactoeHeaderLabel->TabIndex = 30;
			this->tictactoeHeaderLabel->Text = L"Tic Tac Toe";
			// 
			// selectReplayLabel
			// 
			this->selectReplayLabel->AutoSize = true;
			this->selectReplayLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->selectReplayLabel->Location = System::Drawing::Point(255, 178);
			this->selectReplayLabel->Name = L"selectReplayLabel";
			this->selectReplayLabel->Size = System::Drawing::Size(181, 29);
			this->selectReplayLabel->TabIndex = 32;
			this->selectReplayLabel->Text = L"Select a Replay";
			this->selectReplayLabel->Click += gcnew System::EventHandler(this, &ViewReplayOptionPage::label1_Click);
			// 
			// watchReplayBtn
			// 
			this->watchReplayBtn->Location = System::Drawing::Point(284, 272);
			this->watchReplayBtn->Name = L"watchReplayBtn";
			this->watchReplayBtn->Size = System::Drawing::Size(75, 50);
			this->watchReplayBtn->TabIndex = 33;
			this->watchReplayBtn->Text = L"Watch Replay";
			this->watchReplayBtn->UseVisualStyleBackColor = true;
			// 
			// deleteReplayBtn
			// 
			this->deleteReplayBtn->Location = System::Drawing::Point(284, 345);
			this->deleteReplayBtn->Name = L"deleteReplayBtn";
			this->deleteReplayBtn->Size = System::Drawing::Size(75, 50);
			this->deleteReplayBtn->TabIndex = 34;
			this->deleteReplayBtn->Text = L"Delete Replay";
			this->deleteReplayBtn->UseVisualStyleBackColor = true;
			// 
			// editMemoBtn
			// 
			this->editMemoBtn->Location = System::Drawing::Point(284, 417);
			this->editMemoBtn->Name = L"editMemoBtn";
			this->editMemoBtn->Size = System::Drawing::Size(75, 50);
			this->editMemoBtn->TabIndex = 35;
			this->editMemoBtn->Text = L"Edit Memo";
			this->editMemoBtn->UseVisualStyleBackColor = true;
			// 
			// selectReplayComboBox1
			// 
			this->selectReplayComboBox1->FormattingEnabled = true;
			this->selectReplayComboBox1->Location = System::Drawing::Point(260, 219);
			this->selectReplayComboBox1->Name = L"selectReplayComboBox1";
			this->selectReplayComboBox1->Size = System::Drawing::Size(121, 28);
			this->selectReplayComboBox1->TabIndex = 36;
			// 
			// ViewReplayOptionPage
			// 
			this->Controls->Add(this->selectReplayComboBox1);
			this->Controls->Add(this->editMemoBtn);
			this->Controls->Add(this->deleteReplayBtn);
			this->Controls->Add(this->watchReplayBtn);
			this->Controls->Add(this->selectReplayLabel);
			this->Controls->Add(this->simplifyLabel);
			this->Controls->Add(this->tictactoeHeaderLabel);
			this->Controls->Add(this->btnGoToHome);
			this->Name = L"ViewReplayOptionPage";
			this->Size = System::Drawing::Size(600, 600);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGoToHome_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		GoToHome(this, EventArgs::Empty);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
