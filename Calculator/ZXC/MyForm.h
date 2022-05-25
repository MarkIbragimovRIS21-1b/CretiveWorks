#pragma once
#include <cmath>
#include <complex>

namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(78, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите коэффициенты уравнения";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(80, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"a";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(265, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"b";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(439, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"c";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(208, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"ax^2 + bx + c = 0";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(34, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 48);
			this->button1->TabIndex = 8;
			this->button1->Text = L"СБРОСИТЬ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(395, 341);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 48);
			this->button2->TabIndex = 9;
			this->button2->Text = L"ЗАКРЫТЬ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(183, 338);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(179, 51);
			this->button3->TabIndex = 10;
			this->button3->Text = L"РЕШИТЬ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(188, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(174, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Корни уравнения:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 223);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"X1 = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(73, 220);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(87, 22);
			this->textBox4->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(266, 223);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"X2 =";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(309, 220);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(87, 22);
			this->textBox5->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(120, 268);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(301, 25);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Калькулятор готов к работе";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(63, 125);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(71, 22);
			this->numericUpDown1->TabIndex = 17;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(240, 124);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(72, 22);
			this->numericUpDown2->TabIndex = 18;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(410, 124);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, System::Int32::MinValue });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(72, 22);
			this->numericUpDown3->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 403);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор квадратных уравнений";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Кнопка решения, после нажатия на кнопку начинается работа калькулятора
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double a, b, c, x1, x2, dei, mni, z1, z2;

		//Перед алгоритмом очищаем ячейки ответов и оповещаем пользователя о готовности работы калькулятора
		label9->Text = L"Калькулятор готов к работе";
		textBox4->Text = L"";
		textBox5->Text = L"";

		//Конвертируем введённые пользователем значения из String в Double
		a = System::Convert::ToDouble(numericUpDown1->Value);
		b = System::Convert::ToDouble(numericUpDown2->Value);
		c = System::Convert::ToDouble(numericUpDown3->Value);

		//Вводим переменную Д (дискриминант) и начинаем анализ коэффициентов, в зависимости от типа уравнения считаем по формулам,
		//конвертируем в строчный тип и выводим в ячейки ответов, оповещая пользователя
		double D;
		if (a != 0)
		{
			D = b * b - 4 * a * c;
			if (sqrt(D) > 0) //Если корни действительные и их 2
			{
				x1 = (-b + sqrt(D)) / (2 * a);
				x2 = (-b - sqrt(D)) / (2 * a);

				textBox4->Text = Convert::ToString(Math::Round(x1, 4));
				textBox5->Text = Convert::ToString(Math::Round(x2, 4));
				label9->Text = L"Уравнение имеет\n действительные корни";
			}
			if (sqrt(D) == 0) //Если корень действителен и он 2 порядка
			{
				x1 = -b / (2 * a);

				textBox4->Text = Convert::ToString(Math::Round(x1,4));
				label9->Text = L"Уравнение имеет\n действительный корень";
			}
			if (D < 0) //Если корни комплексные
			{
				dei = -b / (2 * a);
				mni = sqrt(abs(D)) / (2 * a);
				textBox4->Text = Convert::ToString(Math::Round(dei, 2)) + "+" + Convert::ToString(Math::Round(mni, 2)) + "*i";
				textBox5->Text = Convert::ToString(Math::Round(dei, 2)) + "-" + Convert::ToString(Math::Round(mni, 2)) + "*i";
				label9->Text = L"Уравнение имеет\n комплексные корни";
			}
		}
	}
	//Кнопка очистки полей, после нажатия каждая текстовое окно очищается
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
		numericUpDown1->Text = L"";
		numericUpDown2->Text = L"";
		numericUpDown3->Text = L"";
		textBox4->Text = L"";
		textBox5->Text = L"";
	}
	//Кнопка закрытия окна, после нажатия закрывает калькулятор
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
