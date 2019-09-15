#pragma once
#include "Recursividad.h"

namespace Tareaa1MarianaGonzalez1097019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  txtm2;
	private: System::Windows::Forms::TextBox^  txtm1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btncalcularm;
	private: System::Windows::Forms::Label^  resmultisuma;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  btntexto;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  txtnumc;
	private: System::Windows::Forms::TextBox^  txtdestino;
	private: System::Windows::Forms::TextBox^  txtorigen;
	private: System::Windows::Forms::Label^  resc;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtm2 = (gcnew System::Windows::Forms::TextBox());
			this->txtm1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btncalcularm = (gcnew System::Windows::Forms::Button());
			this->resmultisuma = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btntexto = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtnumc = (gcnew System::Windows::Forms::TextBox());
			this->txtdestino = (gcnew System::Windows::Forms::TextBox());
			this->txtorigen = (gcnew System::Windows::Forms::TextBox());
			this->resc = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(410, 327);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtm2);
			this->tabPage1->Controls->Add(this->txtm1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->btncalcularm);
			this->tabPage1->Controls->Add(this->resmultisuma);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(402, 298);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ejercicio 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txtm2
			// 
			this->txtm2->Location = System::Drawing::Point(226, 135);
			this->txtm2->Name = L"txtm2";
			this->txtm2->Size = System::Drawing::Size(59, 22);
			this->txtm2->TabIndex = 7;
			// 
			// txtm1
			// 
			this->txtm1->Location = System::Drawing::Point(109, 135);
			this->txtm1->Name = L"txtm1";
			this->txtm1->Size = System::Drawing::Size(59, 22);
			this->txtm1->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(187, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 17);
			this->label5->TabIndex = 5;
			this->label5->Text = L"X";
			// 
			// btncalcularm
			// 
			this->btncalcularm->Location = System::Drawing::Point(148, 184);
			this->btncalcularm->Name = L"btncalcularm";
			this->btncalcularm->Size = System::Drawing::Size(104, 29);
			this->btncalcularm->TabIndex = 4;
			this->btncalcularm->Text = L"CALCULAR";
			this->btncalcularm->UseVisualStyleBackColor = true;
			this->btncalcularm->Click += gcnew System::EventHandler(this, &MyForm::btncalcularm_Click);
			// 
			// resmultisuma
			// 
			this->resmultisuma->AutoSize = true;
			this->resmultisuma->Location = System::Drawing::Point(259, 234);
			this->resmultisuma->Name = L"resmultisuma";
			this->resmultisuma->Size = System::Drawing::Size(0, 17);
			this->resmultisuma->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(101, 234);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Resultado";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(101, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese los números a multiplicar";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(106, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MULTIPLICACIÓN CON SUMAS";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btntexto);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(402, 298);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ejercicio 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btntexto
			// 
			this->btntexto->Location = System::Drawing::Point(163, 112);
			this->btntexto->Name = L"btntexto";
			this->btntexto->Size = System::Drawing::Size(90, 57);
			this->btntexto->TabIndex = 4;
			this->btntexto->Text = L"LEER ARCHIVO";
			this->btntexto->UseVisualStyleBackColor = true;
			this->btntexto->Click += gcnew System::EventHandler(this, &MyForm::btntexto_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(182, 245);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 3;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(112, 191);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(202, 17);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Las palabras palíndromas son:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(109, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(205, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Palabras separadas por comas";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(112, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(183, 17);
			this->label4->TabIndex = 0;
			this->label4->Text = L"PALABRAS PALÍNDROMAS";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->txtnumc);
			this->tabPage3->Controls->Add(this->txtdestino);
			this->tabPage3->Controls->Add(this->txtorigen);
			this->tabPage3->Controls->Add(this->resc);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(402, 298);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Ejercicio 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(103, 27);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(196, 17);
			this->label14->TabIndex = 8;
			this->label14->Text = L"CONVERSIÓN DE NÚMEROS";
			// 
			// txtnumc
			// 
			this->txtnumc->Location = System::Drawing::Point(161, 170);
			this->txtnumc->Name = L"txtnumc";
			this->txtnumc->Size = System::Drawing::Size(71, 22);
			this->txtnumc->TabIndex = 7;
			// 
			// txtdestino
			// 
			this->txtdestino->Location = System::Drawing::Point(248, 100);
			this->txtdestino->Name = L"txtdestino";
			this->txtdestino->Size = System::Drawing::Size(71, 22);
			this->txtdestino->TabIndex = 6;
			// 
			// txtorigen
			// 
			this->txtorigen->Location = System::Drawing::Point(85, 100);
			this->txtorigen->Name = L"txtorigen";
			this->txtorigen->Size = System::Drawing::Size(71, 22);
			this->txtorigen->TabIndex = 5;
			// 
			// resc
			// 
			this->resc->AutoSize = true;
			this->resc->Location = System::Drawing::Point(245, 244);
			this->resc->Name = L"resc";
			this->resc->Size = System::Drawing::Size(0, 17);
			this->resc->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(92, 244);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(72, 17);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Resultado";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(139, 137);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(131, 17);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Número a Convertir";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(245, 67);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 17);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Base Destino";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(82, 67);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 17);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Base Origen";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 351);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btncalcularm_Click(System::Object^  sender, System::EventArgs^  e) {
		int n1 = System::Convert::ToInt32(txtm1->Text);
		int n2 = System::Convert::ToInt32(txtm2->Text);
		Recursividad^ RecursividadObj = gcnew Recursividad();
		resmultisuma->Text = System::Convert::ToString(RecursividadObj->MultiSuma(n1, n2));
	}
private: System::Void btntexto_Click(System::Object^  sender, System::EventArgs^  e) {
	StreamReader^ streamReader = gcnew StreamReader("..//palabras.txt");
	String^ textoDelArchivo = streamReader->ReadToEnd();
	System::Windows::Forms::MessageBox::Show(textoDelArchivo);
}

};
}
