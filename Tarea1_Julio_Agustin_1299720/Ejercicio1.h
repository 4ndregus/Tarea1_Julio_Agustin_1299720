#pragma once

namespace Tarea1JulioAgustin1299720 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de Ejercicio1
	/// </summary>
	public ref class Ejercicio1 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Ejercicio1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::LinkLabel^ lnlResultado2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtNumero2Iterativo;
	private: System::Windows::Forms::TextBox^ txtNumero1Iterativo;
	private: System::Windows::Forms::Button^ btnCalcular2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btonCalcular;
	private: System::Windows::Forms::LinkLabel^ linklResultado;
	private: System::Windows::Forms::TextBox^ txtNumero2;
	private: System::Windows::Forms::TextBox^ txtNumero1;
	private: System::Windows::Forms::Label^ labelNumero2;
	private: System::Windows::Forms::Label^ labelNumero1;
	private: System::Windows::Forms::LinkLabel^ lnklTiempoIterativo;
	private: System::Windows::Forms::LinkLabel^ lnklTiempoRecursivo;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lnlResultado2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNumero2Iterativo = (gcnew System::Windows::Forms::TextBox());
			this->txtNumero1Iterativo = (gcnew System::Windows::Forms::TextBox());
			this->btnCalcular2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btonCalcular = (gcnew System::Windows::Forms::Button());
			this->linklResultado = (gcnew System::Windows::Forms::LinkLabel());
			this->txtNumero2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNumero1 = (gcnew System::Windows::Forms::TextBox());
			this->labelNumero2 = (gcnew System::Windows::Forms::Label());
			this->labelNumero1 = (gcnew System::Windows::Forms::Label());
			this->lnklTiempoRecursivo = (gcnew System::Windows::Forms::LinkLabel());
			this->lnklTiempoIterativo = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lnklTiempoIterativo);
			this->groupBox1->Controls->Add(this->lnklTiempoRecursivo);
			this->groupBox1->Controls->Add(this->lnlResultado2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtNumero2Iterativo);
			this->groupBox1->Controls->Add(this->txtNumero1Iterativo);
			this->groupBox1->Controls->Add(this->btnCalcular2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btonCalcular);
			this->groupBox1->Controls->Add(this->linklResultado);
			this->groupBox1->Controls->Add(this->txtNumero2);
			this->groupBox1->Controls->Add(this->txtNumero1);
			this->groupBox1->Controls->Add(this->labelNumero2);
			this->groupBox1->Controls->Add(this->labelNumero1);
			this->groupBox1->Location = System::Drawing::Point(15, 20);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(715, 290);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			// 
			// lnlResultado2
			// 
			this->lnlResultado2->AutoSize = true;
			this->lnlResultado2->Location = System::Drawing::Point(393, 182);
			this->lnlResultado2->Name = L"lnlResultado2";
			this->lnlResultado2->Size = System::Drawing::Size(195, 13);
			this->lnlResultado2->TabIndex = 13;
			this->lnlResultado2->TabStop = true;
			this->lnlResultado2->Text = L"El resultado de la operación iterativa es:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(442, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Ingrese el número 02";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(442, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Ingresa el número 01";
			// 
			// txtNumero2Iterativo
			// 
			this->txtNumero2Iterativo->Location = System::Drawing::Point(591, 104);
			this->txtNumero2Iterativo->Name = L"txtNumero2Iterativo";
			this->txtNumero2Iterativo->Size = System::Drawing::Size(100, 20);
			this->txtNumero2Iterativo->TabIndex = 10;
			// 
			// txtNumero1Iterativo
			// 
			this->txtNumero1Iterativo->Location = System::Drawing::Point(591, 42);
			this->txtNumero1Iterativo->Name = L"txtNumero1Iterativo";
			this->txtNumero1Iterativo->Size = System::Drawing::Size(100, 20);
			this->txtNumero1Iterativo->TabIndex = 9;
			// 
			// btnCalcular2
			// 
			this->btnCalcular2->Location = System::Drawing::Point(601, 140);
			this->btnCalcular2->Name = L"btnCalcular2";
			this->btnCalcular2->Size = System::Drawing::Size(75, 23);
			this->btnCalcular2->TabIndex = 8;
			this->btnCalcular2->Text = L"Calcular";
			this->btnCalcular2->UseVisualStyleBackColor = true;
			this->btnCalcular2->Click += gcnew System::EventHandler(this, &Ejercicio1::btnCalcular2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(522, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"FORMA ITERATIVA";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(115, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"FORMA RECURSIVA";
			// 
			// btonCalcular
			// 
			this->btonCalcular->Location = System::Drawing::Point(128, 140);
			this->btonCalcular->Name = L"btonCalcular";
			this->btonCalcular->Size = System::Drawing::Size(75, 23);
			this->btonCalcular->TabIndex = 5;
			this->btonCalcular->Text = L"Calcular";
			this->btonCalcular->UseVisualStyleBackColor = true;
			this->btonCalcular->Click += gcnew System::EventHandler(this, &Ejercicio1::btonCalcular_Click);
			// 
			// linklResultado
			// 
			this->linklResultado->AutoSize = true;
			this->linklResultado->Location = System::Drawing::Point(6, 182);
			this->linklResultado->Name = L"linklResultado";
			this->linklResultado->Size = System::Drawing::Size(201, 13);
			this->linklResultado->TabIndex = 4;
			this->linklResultado->TabStop = true;
			this->linklResultado->Text = L"El resultado de la operación recursiva es:";
			// 
			// txtNumero2
			// 
			this->txtNumero2->Location = System::Drawing::Point(117, 104);
			this->txtNumero2->Name = L"txtNumero2";
			this->txtNumero2->Size = System::Drawing::Size(100, 20);
			this->txtNumero2->TabIndex = 3;
			// 
			// txtNumero1
			// 
			this->txtNumero1->Location = System::Drawing::Point(117, 46);
			this->txtNumero1->Name = L"txtNumero1";
			this->txtNumero1->Size = System::Drawing::Size(100, 20);
			this->txtNumero1->TabIndex = 2;
			// 
			// labelNumero2
			// 
			this->labelNumero2->AutoSize = true;
			this->labelNumero2->Location = System::Drawing::Point(5, 104);
			this->labelNumero2->Name = L"labelNumero2";
			this->labelNumero2->Size = System::Drawing::Size(106, 13);
			this->labelNumero2->TabIndex = 1;
			this->labelNumero2->Text = L"Ingrese el número 02";
			// 
			// labelNumero1
			// 
			this->labelNumero1->AutoSize = true;
			this->labelNumero1->Location = System::Drawing::Point(5, 53);
			this->labelNumero1->Name = L"labelNumero1";
			this->labelNumero1->Size = System::Drawing::Size(106, 13);
			this->labelNumero1->TabIndex = 0;
			this->labelNumero1->Text = L"Ingresa el número 01";
			// 
			// lnklTiempoRecursivo
			// 
			this->lnklTiempoRecursivo->AutoSize = true;
			this->lnklTiempoRecursivo->Location = System::Drawing::Point(9, 238);
			this->lnklTiempoRecursivo->Name = L"lnklTiempoRecursivo";
			this->lnklTiempoRecursivo->Size = System::Drawing::Size(55, 13);
			this->lnklTiempoRecursivo->TabIndex = 14;
			this->lnklTiempoRecursivo->TabStop = true;
			this->lnklTiempoRecursivo->Text = L"linkLabel1";
			// 
			// lnklTiempoIterativo
			// 
			this->lnklTiempoIterativo->AutoSize = true;
			this->lnklTiempoIterativo->Location = System::Drawing::Point(393, 238);
			this->lnklTiempoIterativo->Name = L"lnklTiempoIterativo";
			this->lnklTiempoIterativo->Size = System::Drawing::Size(55, 13);
			this->lnklTiempoIterativo->TabIndex = 15;
			this->lnklTiempoIterativo->TabStop = true;
			this->lnklTiempoIterativo->Text = L"linkLabel2";
			// 
			// Ejercicio1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(745, 322);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Ejercicio1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ejercicio1";
			this->Load += gcnew System::EventHandler(this, &Ejercicio1::Ejercicio1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Ejercicio1_Load(System::Object^ sender, System::EventArgs^ e) {
		
		   }
private: System::Void btonCalcular_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ tiempo = Stopwatch::StartNew();
	tiempo->Start();
	try
	{

		linklResultado->Text = "El resultado de la operación recursiva es: " + SumaRecursiva(Convert::ToInt32(txtNumero1->Text), Convert::ToInt32(txtNumero2->Text));
		tiempo->Stop();
		lnklTiempoRecursivo->Text = "" + tiempo->ElapsedMilliseconds;
		MessageBox::Show("Operación realizada exitosamente", "Operación multiplicación de sumas sucesivas", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error detectado" + e->Message, "Operación multiplicación de sumas sucesivas", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
	   int SumaRecursiva(int numero1, int numero2) {

		   if (numero1 == 0 || numero2 == 0) {
			   return 0;
		   }
		   else {
			   return numero1 + SumaRecursiva(numero1, numero2 - 1);
		   }
}
private: System::Void btnCalcular2_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ tiempo2 = Stopwatch::StartNew();
	tiempo2->Start();
	try
	{
		int Suma_Iterativa = 0;
		for (int i = 0; i < (Convert::ToInt32(txtNumero2Iterativo->Text)); i++)
		{
			Suma_Iterativa += (Convert::ToInt32(txtNumero1Iterativo->Text));

		}
		tiempo2->Stop();
		lnklTiempoIterativo->Text = "" + tiempo2->ElapsedMilliseconds;
		lnlResultado2->Text = "El resultado de la operación iterativa es: " + Suma_Iterativa;
		MessageBox::Show("Operación realizada exitosamente ", "Operación multiplicación de sumas sucesivas", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error detectado " + e->Message, "Operación multiplicación de sumas sucesivas", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
	
}
};
}
