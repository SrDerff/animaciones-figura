#pragma once
#include "GestorFiguras.h"



namespace AnimacionesFigura {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmFiguras
	/// </summary>
	public ref class FrmFiguras : public System::Windows::Forms::Form
	{
	public:
		FrmFiguras(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			gestor = new GestorFiguras();
			g = pnlFiguras->CreateGraphics();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmFiguras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ btnMover;

	private: System::Windows::Forms::Button^ btnDibujar;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ pnlFiguras;

	private: System::Windows::Forms::TextBox^ txtRadio;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtLado1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtLado2;
	private: System::Windows::Forms::Label^ lblAreaCirculo;
	private: System::Windows::Forms::Label^ lblAreaRectangulo;
	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		GestorFiguras* gestor;
	private: System::Windows::Forms::Timer^ timerMovimiento;
	private: System::Windows::Forms::ComboBox^ cboFigura;

		   Graphics^ g;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cboFigura = (gcnew System::Windows::Forms::ComboBox());
			this->btnMover = (gcnew System::Windows::Forms::Button());
			this->btnDibujar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lblAreaRectangulo = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtLado2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtLado1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblAreaCirculo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtRadio = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlFiguras = (gcnew System::Windows::Forms::GroupBox());
			this->timerMovimiento = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cboFigura);
			this->groupBox1->Controls->Add(this->btnMover);
			this->groupBox1->Controls->Add(this->btnDibujar);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->groupBox1->Location = System::Drawing::Point(23, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1220, 198);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleccionar Figuras";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &FrmFiguras::groupBox1_Enter);
			// 
			// cboFigura
			// 
			this->cboFigura->FormattingEnabled = true;
			this->cboFigura->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Circulo", L"Rectangulo" });
			this->cboFigura->Location = System::Drawing::Point(194, 84);
			this->cboFigura->Name = L"cboFigura";
			this->cboFigura->Size = System::Drawing::Size(252, 28);
			this->cboFigura->TabIndex = 4;
			// 
			// btnMover
			// 
			this->btnMover->Location = System::Drawing::Point(701, 104);
			this->btnMover->Name = L"btnMover";
			this->btnMover->Size = System::Drawing::Size(402, 44);
			this->btnMover->TabIndex = 3;
			this->btnMover->Text = L"Mover";
			this->btnMover->UseVisualStyleBackColor = true;
			this->btnMover->Click += gcnew System::EventHandler(this, &FrmFiguras::btnMover_Click);
			// 
			// btnDibujar
			// 
			this->btnDibujar->Location = System::Drawing::Point(701, 36);
			this->btnDibujar->Name = L"btnDibujar";
			this->btnDibujar->Size = System::Drawing::Size(402, 44);
			this->btnDibujar->TabIndex = 2;
			this->btnDibujar->Text = L"Dibujar";
			this->btnDibujar->UseVisualStyleBackColor = true;
			this->btnDibujar->Click += gcnew System::EventHandler(this, &FrmFiguras::btnDibujar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(115, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Figura: ";
			this->label1->Click += gcnew System::EventHandler(this, &FrmFiguras::label1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblAreaRectangulo);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->txtLado2);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->txtLado1);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->groupBox3->Location = System::Drawing::Point(23, 484);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(265, 194);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Rectangulo";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &FrmFiguras::groupBox3_Enter);
			// 
			// lblAreaRectangulo
			// 
			this->lblAreaRectangulo->AutoSize = true;
			this->lblAreaRectangulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lblAreaRectangulo->Location = System::Drawing::Point(93, 132);
			this->lblAreaRectangulo->Name = L"lblAreaRectangulo";
			this->lblAreaRectangulo->Size = System::Drawing::Size(14, 20);
			this->lblAreaRectangulo->TabIndex = 7;
			this->lblAreaRectangulo->Text = L"-";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(36, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Area";
			// 
			// txtLado2
			// 
			this->txtLado2->Location = System::Drawing::Point(96, 85);
			this->txtLado2->Name = L"txtLado2";
			this->txtLado2->Size = System::Drawing::Size(120, 26);
			this->txtLado2->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(28, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Lado 2:";
			// 
			// txtLado1
			// 
			this->txtLado1->Location = System::Drawing::Point(94, 46);
			this->txtLado1->Name = L"txtLado1";
			this->txtLado1->Size = System::Drawing::Size(120, 26);
			this->txtLado1->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(28, 49);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Lado 1:";
			this->label4->Click += gcnew System::EventHandler(this, &FrmFiguras::label4_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblAreaCirculo);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->txtRadio);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->groupBox2->Location = System::Drawing::Point(23, 253);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(265, 197);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Circulo";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &FrmFiguras::groupBox2_Enter);
			// 
			// lblAreaCirculo
			// 
			this->lblAreaCirculo->AutoSize = true;
			this->lblAreaCirculo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lblAreaCirculo->Location = System::Drawing::Point(93, 92);
			this->lblAreaCirculo->Name = L"lblAreaCirculo";
			this->lblAreaCirculo->Size = System::Drawing::Size(14, 20);
			this->lblAreaCirculo->TabIndex = 6;
			this->lblAreaCirculo->Text = L"-";
			this->lblAreaCirculo->Click += gcnew System::EventHandler(this, &FrmFiguras::label7_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(36, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Area: ";
			this->label3->Click += gcnew System::EventHandler(this, &FrmFiguras::label3_Click);
			// 
			// txtRadio
			// 
			this->txtRadio->Location = System::Drawing::Point(94, 45);
			this->txtRadio->Name = L"txtRadio";
			this->txtRadio->Size = System::Drawing::Size(120, 26);
			this->txtRadio->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(28, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Radio";
			this->label2->Click += gcnew System::EventHandler(this, &FrmFiguras::label2_Click);
			// 
			// pnlFiguras
			// 
			this->pnlFiguras->BackColor = System::Drawing::Color::White;
			this->pnlFiguras->ForeColor = System::Drawing::Color::White;
			this->pnlFiguras->Location = System::Drawing::Point(319, 253);
			this->pnlFiguras->Name = L"pnlFiguras";
			this->pnlFiguras->Size = System::Drawing::Size(924, 425);
			this->pnlFiguras->TabIndex = 2;
			this->pnlFiguras->TabStop = false;
			this->pnlFiguras->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FrmFiguras::pnlFiguras_Paint);
			this->pnlFiguras->Enter += gcnew System::EventHandler(this, &FrmFiguras::pnlFiguras_Enter);
			// 
			// timerMovimiento
			// 
			this->timerMovimiento->Tick += gcnew System::EventHandler(this, &FrmFiguras::timerMovimiento_Tick);
			// 
			// FrmFiguras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1268, 742);
			this->Controls->Add(this->pnlFiguras);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"FrmFiguras";
			this->Text = L"FrmFiguras";
			this->Load += gcnew System::EventHandler(this, &FrmFiguras::FrmFiguras_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FrmFiguras_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pnlFiguras_Enter(System::Object^ sender, System::EventArgs^ e) {
}
		private: System::Void btnDibujar_Click(System::Object^ sender, System::EventArgs^ e) {

			String^ tipoFigura = cboFigura->Text;

			if (tipoFigura == "Circulo") {
				double radio = Convert::ToDouble(txtRadio->Text);
				int x = 1 + rand() % (pnlFiguras->Width - int(radio) * 2 - 1 + 1);
				int y = 1 + rand() % (pnlFiguras->Height - int(radio) * 2 - 1 + 1);
				Figura* circulo = new Circulo(x, y, radio);
				gestor->agregarFigura(circulo);
				lblAreaCirculo->Text = Convert::ToString(circulo->area());
			}
			else if (tipoFigura == "Rectangulo") {
				double lado1 = Convert::ToDouble(txtLado1->Text);
				double lado2 = Convert::ToDouble(txtLado2->Text);
				int x = 1 + rand() % (pnlFiguras->Width - int(lado1) - 1 + 1);
				int y = 1 + rand() % (pnlFiguras->Height - int(lado2) - 1 + 1);
				Figura* rectangulo = new Rectangulo(x, y, lado1, lado2);
				gestor->agregarFigura(rectangulo);
				lblAreaRectangulo->Text = Convert::ToString(rectangulo->area());
			}

			pnlFiguras->Invalidate();
		}
	private: System::Void pnlFiguras_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
		gestor->dibujarFiguras(g);
	
	}
private: System::Void timerMovimiento_Tick(System::Object^ sender, System::EventArgs^ e) {
	gestor->moverFiguras(pnlFiguras->Width, pnlFiguras->Height);
	pnlFiguras->Invalidate();
}
private: System::Void btnMover_Click(System::Object^ sender, System::EventArgs^ e) {
	timerMovimiento->Enabled = !timerMovimiento->Enabled;

	if (timerMovimiento->Enabled) {
		btnMover->Text = "Detener";
	}
	else {
		btnMover->Text = "Mover";
	}
}
};
}
