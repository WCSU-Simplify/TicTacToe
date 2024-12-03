#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace TicTacToeApp {

	/// <summary>
	/// Summary for MatchGameplayPage
	/// </summary>
	public ref class MatchGameplayPage : public System::Windows::Forms::UserControl
	{
	public:
		MatchGameplayPage(bool whoGoesFirst, int themeStyle)
		{
			currentPlayer = whoGoesFirst;
			board = gcnew array<int>(9) { -1, -1, -1, -1, -1, -1, -1, -1, -1 };
			replayBoard = gcnew array<int>(10) { currentPlayer, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
			winningCombinations = gcnew array<array<int>^>
			{
				gcnew array<int>{0, 1, 2}, gcnew array<int>{3, 4, 5}, gcnew array<int>{6, 7, 8},
					gcnew array<int>{0, 3, 6}, gcnew array<int>{1, 4, 7}, gcnew array<int>{2, 5, 8},
					gcnew array<int>{0, 4, 8}, gcnew array<int>{2, 4, 6}
			};

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MatchGameplayPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: array<int>^ board;// Holds "X", "O", or nullptr
	private: array<int>^ replayBoard; // Holds replay match formated data
	private: bool currentPlayer;// means player1 is X
	private:     array<array<int>^>^ winningCombinations;
	private: System::Windows::Forms::PictureBox^ symbolBox0;
	private: System::Windows::Forms::PictureBox^ symbolBox1;
	private: System::Windows::Forms::PictureBox^ symbolBox2;
	private: System::Windows::Forms::PictureBox^ symbolBox5;


	protected:



	private: System::Windows::Forms::PictureBox^ symbolBox4;

	private: System::Windows::Forms::PictureBox^ symbolBox3;
	private: System::Windows::Forms::PictureBox^ symbolBox8;


	private: System::Windows::Forms::PictureBox^ symbolBox7;

	private: System::Windows::Forms::PictureBox^ symbolBox6;

	private: System::Windows::Forms::Label^ matchHeadingLabel;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->symbolBox0 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->symbolBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->matchHeadingLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// symbolBox0
			// 
			this->symbolBox0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox0->Location = System::Drawing::Point(175, 164);
			this->symbolBox0->Name = L"symbolBox0";
			this->symbolBox0->Size = System::Drawing::Size(100, 100);
			this->symbolBox0->TabIndex = 0;
			this->symbolBox0->TabStop = false;
			this->symbolBox0->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox0_Click);
			// 
			// symbolBox1
			// 
			this->symbolBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox1->Location = System::Drawing::Point(271, 164);
			this->symbolBox1->Name = L"symbolBox1";
			this->symbolBox1->Size = System::Drawing::Size(100, 100);
			this->symbolBox1->TabIndex = 1;
			this->symbolBox1->TabStop = false;
			this->symbolBox1->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox1_Click);
			// 
			// symbolBox2
			// 
			this->symbolBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox2->Location = System::Drawing::Point(368, 164);
			this->symbolBox2->Name = L"symbolBox2";
			this->symbolBox2->Size = System::Drawing::Size(100, 100);
			this->symbolBox2->TabIndex = 2;
			this->symbolBox2->TabStop = false;
			this->symbolBox2->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox2_Click);
			// 
			// symbolBox5
			// 
			this->symbolBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox5->Location = System::Drawing::Point(368, 264);
			this->symbolBox5->Name = L"symbolBox5";
			this->symbolBox5->Size = System::Drawing::Size(100, 100);
			this->symbolBox5->TabIndex = 5;
			this->symbolBox5->TabStop = false;
			this->symbolBox5->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox5_Click);
			// 
			// symbolBox4
			// 
			this->symbolBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox4->Location = System::Drawing::Point(271, 264);
			this->symbolBox4->Name = L"symbolBox4";
			this->symbolBox4->Size = System::Drawing::Size(100, 100);
			this->symbolBox4->TabIndex = 4;
			this->symbolBox4->TabStop = false;
			this->symbolBox4->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox4_Click);
			// 
			// symbolBox3
			// 
			this->symbolBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox3->Location = System::Drawing::Point(175, 264);
			this->symbolBox3->Name = L"symbolBox3";
			this->symbolBox3->Size = System::Drawing::Size(100, 100);
			this->symbolBox3->TabIndex = 3;
			this->symbolBox3->TabStop = false;
			this->symbolBox3->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox3_Click);
			// 
			// symbolBox8
			// 
			this->symbolBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox8->Location = System::Drawing::Point(368, 359);
			this->symbolBox8->Name = L"symbolBox8";
			this->symbolBox8->Size = System::Drawing::Size(100, 100);
			this->symbolBox8->TabIndex = 8;
			this->symbolBox8->TabStop = false;
			this->symbolBox8->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox8_Click);
			// 
			// symbolBox7
			// 
			this->symbolBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox7->Location = System::Drawing::Point(271, 359);
			this->symbolBox7->Name = L"symbolBox7";
			this->symbolBox7->Size = System::Drawing::Size(100, 100);
			this->symbolBox7->TabIndex = 7;
			this->symbolBox7->TabStop = false;
			this->symbolBox7->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox7_Click);
			// 
			// symbolBox6
			// 
			this->symbolBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->symbolBox6->Location = System::Drawing::Point(175, 359);
			this->symbolBox6->Name = L"symbolBox6";
			this->symbolBox6->Size = System::Drawing::Size(100, 100);
			this->symbolBox6->TabIndex = 6;
			this->symbolBox6->TabStop = false;
			this->symbolBox6->Click += gcnew System::EventHandler(this, &MatchGameplayPage::symbolBox6_Click);
			// 
			// matchHeadingLabel
			// 
			this->matchHeadingLabel->AutoSize = true;
			this->matchHeadingLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->matchHeadingLabel->Location = System::Drawing::Point(124, 88);
			this->matchHeadingLabel->Name = L"matchHeadingLabel";
			this->matchHeadingLabel->Size = System::Drawing::Size(131, 29);
			this->matchHeadingLabel->TabIndex = 9;
			this->matchHeadingLabel->Text = L"P1 [0-0] P2";
			this->matchHeadingLabel->Click += gcnew System::EventHandler(this, &MatchGameplayPage::matchHeadingLabel_Click);
			// 
			// MatchGameplayPage
			// 
			this->Controls->Add(this->matchHeadingLabel);
			this->Controls->Add(this->symbolBox8);
			this->Controls->Add(this->symbolBox7);
			this->Controls->Add(this->symbolBox6);
			this->Controls->Add(this->symbolBox5);
			this->Controls->Add(this->symbolBox4);
			this->Controls->Add(this->symbolBox3);
			this->Controls->Add(this->symbolBox2);
			this->Controls->Add(this->symbolBox1);
			this->Controls->Add(this->symbolBox0);
			this->Name = L"MatchGameplayPage";
			this->Size = System::Drawing::Size(600, 600);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->symbolBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void matchHeadingLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void symbolBox0_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(0);
	}
	private: System::Void symbolBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(1);
	}
	private: System::Void symbolBox2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(2);
	}
	private: System::Void symbolBox3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(3);
	}
	private: System::Void symbolBox4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(4);
	}
	private: System::Void symbolBox5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(5);
	}
	private: System::Void symbolBox6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(6);
	}
	private: System::Void symbolBox7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(7);
	}
	private: System::Void symbolBox8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HandleClick(8);
	}


	private: System::Void HandleClick(int index)
	{
		// 0 -> 1,1 
		replayBoard[index +1 ] = index +1; 

		if (board[index] != -1)
		{
			MessageBox::Show("This square is already taken!");
			return;
		}

		// Place the current player's symbol
		if (currentPlayer)
		{
			board[index] = 1;
		}
		else {
			board[index] = 0;
		}
		

		// Update the PictureBox to display the symbol
		UpdateSymbol(index);

		// Check if the game is over
		if (CheckWinner())
		{
			MessageBox::Show(currentPlayer + " wins!");
			ResetGame();
			return;
		}

		// Check for a draw
		if (IsBoardFull())
		{
			MessageBox::Show("It's a draw!");
			ResetGame();
			return;
		}

		// Switch to the next player
		currentPlayer = !currentPlayer; // Toggle between true (X) and false (O)
		//currentPlayer = false;
	}

	private:
		System::Boolean IsBoardFull()
		{
			for each (int cell in board)
			{
				if (cell == -1)
				{
					return false;
				}
			}
			return true;
		}

	private:
		System::Void UpdateSymbol(int index)
		{
			PictureBox^ box = nullptr;
			switch (index)
			{
			case 0: box = symbolBox0; break;
			case 1: box = symbolBox1; break;
			case 2: box = symbolBox2; break;
			case 3: box = symbolBox3; break;
			case 4: box = symbolBox4; break;
			case 5: box = symbolBox5; break;
			case 6: box = symbolBox6; break;
			case 7: box = symbolBox7; break;
			case 8: box = symbolBox8; break;
				// Repeat for other PictureBoxes (symbolBox2, symbolBox3, ...)
			}

			if (box != nullptr)
			{
				
				if (currentPlayer)
				{

					box->Image = Image::FromFile(Application::StartupPath + "\\Resources\\xIcon.png");
				}
				else if(!currentPlayer)
				{
					box->Image = Image::FromFile(Application::StartupPath + "\\Resources\\oIcon.png");
				}
			}
		}


	private:
		System::Void ResetGame()
		{

			// Create a string to hold the joined elements
			String^ result = "";

			// Iterate over the array and append each element to the result string
			for (int i = 0; i < replayBoard->Length; i++)
			{
				result += replayBoard[i].ToString() + " ";
			}

			// Print all the contents at once

			MessageBox::Show(result);

			board = gcnew array<int>(9) { -1, -1, -1, -1, -1, -1, -1, -1, -1 };
			//currentPlayer = true;

			// Clear PictureBoxes
			symbolBox0->Image = nullptr;
			symbolBox1->Image = nullptr;
			symbolBox2->Image = nullptr;
			symbolBox3->Image = nullptr;
			symbolBox4->Image = nullptr;
			symbolBox5->Image = nullptr;
			symbolBox6->Image = nullptr;
			symbolBox7->Image = nullptr;
			symbolBox8->Image = nullptr;
			// Repeat for other PictureBoxes (symbolBox2, symbolBox3, ...)
		}




	private:
		System::Boolean CheckWinner()
		{
			// Check each winning combination
			for each (array<int> ^ combo in winningCombinations)
			{
				// Ensure that all three positions in the combination are the same player and not -1 (empty)
				if (board[combo[0]] != -1 &&
					board[combo[0]] == board[combo[1]] &&
					board[combo[1]] == board[combo[2]])
				{
					return true;  // A winner has been found
				}
			}
			return false;  // No winner
		}

	};
}
