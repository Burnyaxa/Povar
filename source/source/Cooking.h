#pragma once
#include "recipe.h"
namespace source {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cooking
	/// </summary>
	public ref class Cooking : public System::Windows::Forms::Form
	{
	public:
		recipe *rec;
		Cooking(recipe *reci)
		{
			
			InitializeComponent();
			this->rec = reci;
		}
		recipe* getRecip() {
			return this->rec;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Cooking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(84, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HELLO";
			// 
			// Cooking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 326);
			this->Controls->Add(this->label1);
			this->Name = L"Cooking";
			this->Text = L"Cooking";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
