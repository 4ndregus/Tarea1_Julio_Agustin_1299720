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
	/// Resumen de Ejercicio4
	/// </summary>
	public ref class Ejercicio4 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio4(void)
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
		~Ejercicio4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ lResultado;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtNum;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MaskedTextBox^ mtbBaseDestino;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ mtbBaseOrigen;
	private: System::Windows::Forms::Button^ btnConvertir;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ lResultadoRecursivo;
	private: System::Windows::Forms::MaskedTextBox^ mtbBaseDestinoRecursivo;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtNumRecursivo;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ mtbBaseOrigenRecursivo;
	private: System::Windows::Forms::Button^ btnConvertirRecursivo;
	private: System::Windows::Forms::LinkLabel^ lnklStopwatchIterativo;
	private: System::Windows::Forms::LinkLabel^ lnklStopwatchRecursivo;








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
			this->lResultado = (gcnew System::Windows::Forms::Label());
			this->mtbBaseDestino = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNum = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->mtbBaseOrigen = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnConvertir = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lResultadoRecursivo = (gcnew System::Windows::Forms::Label());
			this->mtbBaseDestinoRecursivo = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtNumRecursivo = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->mtbBaseOrigenRecursivo = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnConvertirRecursivo = (gcnew System::Windows::Forms::Button());
			this->lnklStopwatchIterativo = (gcnew System::Windows::Forms::LinkLabel());
			this->lnklStopwatchRecursivo = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DodgerBlue;
			this->groupBox1->Controls->Add(this->lnklStopwatchIterativo);
			this->groupBox1->Controls->Add(this->lResultado);
			this->groupBox1->Controls->Add(this->mtbBaseDestino);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtNum);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->mtbBaseOrigen);
			this->groupBox1->Controls->Add(this->btnConvertir);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(825, 185);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Método Iterativo";
			// 
			// lResultado
			// 
			this->lResultado->AutoSize = true;
			this->lResultado->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lResultado->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lResultado->Location = System::Drawing::Point(6, 111);
			this->lResultado->Name = L"lResultado";
			this->lResultado->Size = System::Drawing::Size(27, 26);
			this->lResultado->TabIndex = 7;
			this->lResultado->Text = L"...";
			this->lResultado->Visible = false;
			// 
			// mtbBaseDestino
			// 
			this->mtbBaseDestino->BackColor = System::Drawing::Color::Green;
			this->mtbBaseDestino->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mtbBaseDestino->ForeColor = System::Drawing::SystemColors::Info;
			this->mtbBaseDestino->Location = System::Drawing::Point(659, 14);
			this->mtbBaseDestino->Mask = L"99";
			this->mtbBaseDestino->Name = L"mtbBaseDestino";
			this->mtbBaseDestino->Size = System::Drawing::Size(37, 36);
			this->mtbBaseDestino->TabIndex = 3;
			this->mtbBaseDestino->ValidatingType = System::Int32::typeid;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(1, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(337, 23);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Ingrese el número que desea convertir";
			// 
			// txtNum
			// 
			this->txtNum->BackColor = System::Drawing::Color::Green;
			this->txtNum->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNum->ForeColor = System::Drawing::SystemColors::Info;
			this->txtNum->Location = System::Drawing::Point(344, 66);
			this->txtNum->Name = L"txtNum";
			this->txtNum->Size = System::Drawing::Size(155, 33);
			this->txtNum->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(354, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ingrese el número de base destino";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(7, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(293, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingrese el número de base origen";
			// 
			// mtbBaseOrigen
			// 
			this->mtbBaseOrigen->BackColor = System::Drawing::Color::Green;
			this->mtbBaseOrigen->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mtbBaseOrigen->ForeColor = System::Drawing::SystemColors::Info;
			this->mtbBaseOrigen->Location = System::Drawing::Point(306, 15);
			this->mtbBaseOrigen->Mask = L"99";
			this->mtbBaseOrigen->Name = L"mtbBaseOrigen";
			this->mtbBaseOrigen->Size = System::Drawing::Size(42, 36);
			this->mtbBaseOrigen->TabIndex = 1;
			this->mtbBaseOrigen->ValidatingType = System::Int32::typeid;
			// 
			// btnConvertir
			// 
			this->btnConvertir->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConvertir->Location = System::Drawing::Point(707, 111);
			this->btnConvertir->Name = L"btnConvertir";
			this->btnConvertir->Size = System::Drawing::Size(112, 33);
			this->btnConvertir->TabIndex = 0;
			this->btnConvertir->Text = L"Convertir";
			this->btnConvertir->UseVisualStyleBackColor = true;
			this->btnConvertir->Click += gcnew System::EventHandler(this, &Ejercicio4::btnConvertir_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::RoyalBlue;
			this->groupBox2->Controls->Add(this->lnklStopwatchRecursivo);
			this->groupBox2->Controls->Add(this->lResultadoRecursivo);
			this->groupBox2->Controls->Add(this->mtbBaseDestinoRecursivo);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->txtNumRecursivo);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->mtbBaseOrigenRecursivo);
			this->groupBox2->Controls->Add(this->btnConvertirRecursivo);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(12, 203);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(825, 191);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Método Recursivo";
			// 
			// lResultadoRecursivo
			// 
			this->lResultadoRecursivo->AutoSize = true;
			this->lResultadoRecursivo->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lResultadoRecursivo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lResultadoRecursivo->Location = System::Drawing::Point(6, 131);
			this->lResultadoRecursivo->Name = L"lResultadoRecursivo";
			this->lResultadoRecursivo->Size = System::Drawing::Size(27, 26);
			this->lResultadoRecursivo->TabIndex = 7;
			this->lResultadoRecursivo->Text = L"...";
			this->lResultadoRecursivo->Visible = false;
			// 
			// mtbBaseDestinoRecursivo
			// 
			this->mtbBaseDestinoRecursivo->BackColor = System::Drawing::Color::Green;
			this->mtbBaseDestinoRecursivo->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mtbBaseDestinoRecursivo->ForeColor = System::Drawing::SystemColors::Info;
			this->mtbBaseDestinoRecursivo->Location = System::Drawing::Point(659, 14);
			this->mtbBaseDestinoRecursivo->Mask = L"99";
			this->mtbBaseDestinoRecursivo->Name = L"mtbBaseDestinoRecursivo";
			this->mtbBaseDestinoRecursivo->Size = System::Drawing::Size(37, 36);
			this->mtbBaseDestinoRecursivo->TabIndex = 3;
			this->mtbBaseDestinoRecursivo->ValidatingType = System::Int32::typeid;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(1, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(337, 23);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ingrese el número que desea convertir";
			// 
			// txtNumRecursivo
			// 
			this->txtNumRecursivo->BackColor = System::Drawing::Color::Green;
			this->txtNumRecursivo->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNumRecursivo->ForeColor = System::Drawing::SystemColors::Info;
			this->txtNumRecursivo->Location = System::Drawing::Point(344, 66);
			this->txtNumRecursivo->Name = L"txtNumRecursivo";
			this->txtNumRecursivo->Size = System::Drawing::Size(155, 33);
			this->txtNumRecursivo->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(354, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(300, 23);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Ingrese el número de base destino";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(7, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(293, 23);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Ingrese el número de base origen";
			// 
			// mtbBaseOrigenRecursivo
			// 
			this->mtbBaseOrigenRecursivo->BackColor = System::Drawing::Color::Green;
			this->mtbBaseOrigenRecursivo->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mtbBaseOrigenRecursivo->ForeColor = System::Drawing::SystemColors::Info;
			this->mtbBaseOrigenRecursivo->Location = System::Drawing::Point(306, 15);
			this->mtbBaseOrigenRecursivo->Mask = L"99";
			this->mtbBaseOrigenRecursivo->Name = L"mtbBaseOrigenRecursivo";
			this->mtbBaseOrigenRecursivo->Size = System::Drawing::Size(42, 36);
			this->mtbBaseOrigenRecursivo->TabIndex = 1;
			this->mtbBaseOrigenRecursivo->ValidatingType = System::Int32::typeid;
			// 
			// btnConvertirRecursivo
			// 
			this->btnConvertirRecursivo->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnConvertirRecursivo->Location = System::Drawing::Point(707, 115);
			this->btnConvertirRecursivo->Name = L"btnConvertirRecursivo";
			this->btnConvertirRecursivo->Size = System::Drawing::Size(112, 33);
			this->btnConvertirRecursivo->TabIndex = 0;
			this->btnConvertirRecursivo->Text = L"Convertir";
			this->btnConvertirRecursivo->UseVisualStyleBackColor = true;
			this->btnConvertirRecursivo->Click += gcnew System::EventHandler(this, &Ejercicio4::btnConvertirRecursivo_Click);
			// 
			// lnklStopwatchIterativo
			// 
			this->lnklStopwatchIterativo->AutoSize = true;
			this->lnklStopwatchIterativo->Location = System::Drawing::Point(8, 151);
			this->lnklStopwatchIterativo->Name = L"lnklStopwatchIterativo";
			this->lnklStopwatchIterativo->Size = System::Drawing::Size(72, 18);
			this->lnklStopwatchIterativo->TabIndex = 8;
			this->lnklStopwatchIterativo->TabStop = true;
			this->lnklStopwatchIterativo->Text = L"linkLabel1";
			// 
			// lnklStopwatchRecursivo
			// 
			this->lnklStopwatchRecursivo->AutoSize = true;
			this->lnklStopwatchRecursivo->Location = System::Drawing::Point(8, 157);
			this->lnklStopwatchRecursivo->Name = L"lnklStopwatchRecursivo";
			this->lnklStopwatchRecursivo->Size = System::Drawing::Size(72, 18);
			this->lnklStopwatchRecursivo->TabIndex = 9;
			this->lnklStopwatchRecursivo->TabStop = true;
			this->lnklStopwatchRecursivo->Text = L"linkLabel1";
			// 
			// Ejercicio4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(849, 396);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Ejercicio4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ejercicio4";
			this->Load += gcnew System::EventHandler(this, &Ejercicio4::Ejercicio4_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Ejercicio4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnConvertir_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ tiempo = Stopwatch::StartNew();
	tiempo->Start();
	try{
		int NumeroAConvertir = Convert::ToInt32(txtNum->Text);
		int VectordeNumeroAConvertir = (txtNum->Text)->Length;
		int NumeroDeBaseDestino = Convert::ToInt32(mtbBaseDestino->Text);
		int NumeroDeBaseOrigen = Convert::ToInt32(mtbBaseOrigen->Text);
		String^ NumerodeOrigen = Convert::ToString(NumeroDeBaseOrigen);
		String^ Caracter;
		String^ BaseOrigen = "";
		
		if (NumeroDeBaseOrigen > 10 || NumeroDeBaseOrigen < 2 || NumeroDeBaseDestino > 10 || NumeroDeBaseDestino<2) {
			MessageBox::Show("Error detectado ", " El número de base que ingresó no está disponible ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		if (NumeroDeBaseOrigen == 10 && NumeroDeBaseDestino < 10) {
			//Convierte de decimal a base N			

			while (NumeroAConvertir > 0) {

				BaseOrigen = NumeroAConvertir % NumeroDeBaseDestino + BaseOrigen;
				NumeroAConvertir = NumeroAConvertir / NumeroDeBaseDestino;
			}
			lResultado->Visible = true;
			lResultado->Text = "EL NÚMERO CONVERTIDO A BASE " + NumeroDeBaseDestino + " ES = " + BaseOrigen;
			tiempo->Stop();
			lnklStopwatchIterativo->Text = "" + tiempo->ElapsedMilliseconds;
			//Termina acá
		}

		else if (NumeroDeBaseOrigen < 10 && NumeroDeBaseDestino == 10) {

			String^ NumeroOrigenn = Convert::ToString(NumeroDeBaseOrigen);
			String^ n="";
			String^ cadena;		
			
		int VerificacarNumeroDeBase = NumeroDeBaseOrigen - 1;

		//Convierte base N a decimal
		int Residuo = 0, PotenciaDeNumeroOrigen = 0, NumeroConvertidoEnDecimal = 0;
		while (NumeroAConvertir > 0) {
		Residuo = NumeroAConvertir % 10;
		NumeroAConvertir = NumeroAConvertir / 10;
		NumeroConvertidoEnDecimal += Convert::ToInt32(Residuo * System::Math::Pow(NumeroDeBaseOrigen, PotenciaDeNumeroOrigen));
		PotenciaDeNumeroOrigen++;
		}
		lResultado->Visible = true;
		lResultado->Text = "EL NÚMERO CONVERTIDO A BASE " + NumeroDeBaseDestino + " ES = " + NumeroConvertidoEnDecimal;
		tiempo->Stop();
		lnklStopwatchIterativo->Text = "" + tiempo->ElapsedMilliseconds;
		//Termina acá
								
		}
		//Base N a Base N
		int Residuo2 = 0, PotenciaDeNumeroOrigen2 = 0, NumeroConvertidoEnDecimal2 = 0;
		while (NumeroAConvertir > 0) {
			Residuo2 = NumeroAConvertir % 10;
			NumeroAConvertir = NumeroAConvertir / 10;
			NumeroConvertidoEnDecimal2 += Convert::ToInt32(Residuo2 * System::Math::Pow(NumeroDeBaseOrigen, PotenciaDeNumeroOrigen2));
			PotenciaDeNumeroOrigen2++;
			tiempo->Stop();
			lnklStopwatchIterativo->Text = "" + tiempo->ElapsedMilliseconds;
		}
		String^ BaseOrigen2 = "";
		while (NumeroConvertidoEnDecimal2 > 0) {

			BaseOrigen2 = NumeroConvertidoEnDecimal2 % NumeroDeBaseDestino + BaseOrigen2;
			NumeroConvertidoEnDecimal2 = NumeroConvertidoEnDecimal2 / NumeroDeBaseDestino;
			tiempo->Stop();
			lnklStopwatchIterativo->Text = "" + tiempo->ElapsedMilliseconds;
		}
		if (NumeroDeBaseDestino < 10 && NumeroDeBaseOrigen < 10) {
			lResultado->Visible = true;
			lResultado->Text = "EL NÚMERO CONVERTIDO A BASE " + NumeroDeBaseDestino + " ES " + BaseOrigen2;
			tiempo->Stop();
			lnklStopwatchIterativo->Text = "" + tiempo->ElapsedMilliseconds;

		}
	}
	catch(Exception^ e)
	{
		MessageBox::Show("Error detectado ", " No ha ingresado un valor de manera correcta ", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
	
	
	
}
private: System::Void btnConvertirRecursivo_Click(System::Object^ sender, System::EventArgs^ e) {
	Stopwatch^ tiempo2 = Stopwatch::StartNew();
	tiempo2->Start();
	try{
	int numBaseOrigen = Convert::ToInt32(mtbBaseOrigenRecursivo->Text);
	int numBaseDestino = Convert::ToInt32(mtbBaseDestinoRecursivo->Text);
	if (numBaseOrigen > 10 || numBaseOrigen < 2 || numBaseDestino>10 || numBaseDestino<2) {
		tiempo2->Stop();
		lnklStopwatchRecursivo->Text = "" + tiempo2->ElapsedMilliseconds;
		MessageBox::Show("Error detectado ", " El número de base que ingresó no está disponible ", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
	if (numBaseOrigen == 10 && numBaseDestino < 10) {
		lResultadoRecursivo->Text = "EL NÚMERO CONVERTIDO A BASE " + Convert::ToInt32(mtbBaseDestinoRecursivo->Text) + " ES " + Convertir_Base_Decimal_a_Base_N(Convert::ToInt32(txtNumRecursivo->Text), 1);
		tiempo2->Stop();
		lnklStopwatchRecursivo->Text = "" + tiempo2->ElapsedMilliseconds;
	}
	if (numBaseOrigen < 10 && numBaseDestino == 10) {	
		lResultadoRecursivo->Text = "EL NÚMERO CONVERTIDO A BASE " + Convert::ToInt32(mtbBaseDestinoRecursivo->Text) + " ES " + Convertir_Base_N_a_Decimal(Convert::ToInt32(txtNumRecursivo->Text), 1);
		tiempo2->Stop();
		lnklStopwatchRecursivo->Text = "" + tiempo2->ElapsedMilliseconds;
	}
	if (numBaseOrigen < 10 && numBaseDestino < 10) {
		int NumeroenDecimal = Convertir_Base_N_a_Decimal(Convert::ToInt32(txtNumRecursivo->Text), 1);
		int NumeroConvertidodeDecimalABaseN = Convertir_Base_Decimal_a_Base_N(Convert::ToInt32(NumeroenDecimal), 1);
		lResultadoRecursivo->Text = "EL NÚMERO CONVERTIDO A BASE " + Convert::ToInt32(mtbBaseDestinoRecursivo->Text) + " ES " + NumeroConvertidodeDecimalABaseN;
		tiempo2->Stop();
		lnklStopwatchRecursivo->Text = "" + tiempo2->ElapsedMilliseconds;
	}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error detectado ", " No ha ingresado un valor de manera correcta ", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
	   int Convertir_Base_Decimal_a_Base_N(int NumAConvertir, int factor) {		   
		   if (NumAConvertir <= 1 && NumAConvertir>=0) {
			   return NumAConvertir * factor;
		   }
		   else {
			   lResultadoRecursivo->Visible = true;
			   return Convertir_Base_Decimal_a_Base_N(NumAConvertir / Convert::ToInt32(mtbBaseDestinoRecursivo->Text), factor * 10) + (NumAConvertir % Convert::ToInt32(mtbBaseDestinoRecursivo->Text)) * factor;
		   }
		   
	   }
	   int Convertir_Base_N_a_Decimal(int NumAConvertir, int factor) {
		   if (NumAConvertir <= 1 && NumAConvertir >= 0) {
			   return NumAConvertir * factor;
		   }
		   else {
			   lResultadoRecursivo->Visible = true;
			   return  Convertir_Base_N_a_Decimal(NumAConvertir / 10, factor * Convert::ToInt32(mtbBaseOrigenRecursivo->Text)) + (NumAConvertir % 10) * factor;
		   }
	   }


};
}
