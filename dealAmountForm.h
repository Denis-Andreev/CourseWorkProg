#include "functions.h"
#pragma once

namespace CourseWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для dealAmountForm
	/// </summary>
	public ref class dealAmountForm : public System::Windows::Forms::Form
	{
	public:
		dealAmountForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~dealAmountForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	public: System::Windows::Forms::TextBox^ dealAmountEdit;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ dealDataEdit;
	public: System::Windows::Forms::TextBox^ dealUserEdit;
	private: System::Windows::Forms::Button^ dealResult;
	public:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dealAmountEdit = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dealDataEdit = (gcnew System::Windows::Forms::TextBox());
			this->dealUserEdit = (gcnew System::Windows::Forms::TextBox());
			this->dealResult = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Сумма сделки (руб):";
			// 
			// dealAmountEdit
			// 
			this->dealAmountEdit->Location = System::Drawing::Point(28, 34);
			this->dealAmountEdit->Name = L"dealAmountEdit";
			this->dealAmountEdit->Size = System::Drawing::Size(172, 20);
			this->dealAmountEdit->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Дата сделки (формат ДД.ММ.ГГ):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Вторая сторона сделки:";
			// 
			// dealDataEdit
			// 
			this->dealDataEdit->Location = System::Drawing::Point(28, 88);
			this->dealDataEdit->Name = L"dealDataEdit";
			this->dealDataEdit->Size = System::Drawing::Size(172, 20);
			this->dealDataEdit->TabIndex = 4;
			// 
			// dealUserEdit
			// 
			this->dealUserEdit->Location = System::Drawing::Point(28, 142);
			this->dealUserEdit->Name = L"dealUserEdit";
			this->dealUserEdit->Size = System::Drawing::Size(317, 20);
			this->dealUserEdit->TabIndex = 5;
			// 
			// dealResult
			// 
			this->dealResult->Location = System::Drawing::Point(292, 182);
			this->dealResult->Name = L"dealResult";
			this->dealResult->Size = System::Drawing::Size(115, 37);
			this->dealResult->TabIndex = 6;
			this->dealResult->Text = L"ОК";
			this->dealResult->UseVisualStyleBackColor = true;
			this->dealResult->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &dealAmountForm::DealResult_MouseClick);
			// 
			// dealAmountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 231);
			this->Controls->Add(this->dealResult);
			this->Controls->Add(this->dealUserEdit);
			this->Controls->Add(this->dealDataEdit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dealAmountEdit);
			this->Controls->Add(this->label1);
			this->Name = L"dealAmountForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Фиксирование сделки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DealResult_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		bool error = false;
		if (!dateValidation(dealDataEdit->Text)) {
			error = true;
			dealDataEdit->Text = "";
		}
		if (numberValidation(dealAmountEdit->Text, 1)) {
			error = true;
			dealAmountEdit->Text = "";
		}
		// Если не возникло ошибок при валидации полей ввода, окно диалога завершается успешно
		if (!error) { this->DialogResult = System::Windows::Forms::DialogResult::OK; };
	}
};
}
