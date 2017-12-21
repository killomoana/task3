#pragma once

namespace Forms_ex_3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox;
	protected:

	protected:
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox
			// 
			this->groupBox->Controls->Add(this->radioButton3);
			this->groupBox->Controls->Add(this->radioButton2);
			this->groupBox->Controls->Add(this->radioButton1);
			this->groupBox->Location = System::Drawing::Point(12, 12);
			this->groupBox->Name = L"groupBox";
			this->groupBox->Size = System::Drawing::Size(260, 100);
			this->groupBox->TabIndex = 0;
			this->groupBox->TabStop = false;
			this->groupBox->Text = L"Gonna have some studies\?";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 65);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(84, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"Probably no.";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::radioButton3_MouseClick);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 42);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(42, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"No.";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::radioButton2_MouseClick);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(86, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"Definitely no.";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::radioButton1_MouseClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 132);
			this->Controls->Add(this->groupBox);
			this->MaximumSize = System::Drawing::Size(300, 170);
			this->MinimumSize = System::Drawing::Size(300, 170);
			this->Name = L"MyForm";
			this->Text = L"Wierd Question";
			this->groupBox->ResumeLayout(false);
			this->groupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void radioButton2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		MessageBox::Show("Wrong, go educate yourself.");
	}
private: System::Void radioButton3_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	MessageBox::Show("Nah, go learn smth you need.");
}
private: System::Void radioButton1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	MessageBox::Show("You are bad dude. Go study immediately!");
}
};
}
