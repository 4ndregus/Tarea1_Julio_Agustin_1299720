#pragma once

namespace Tarea1JulioAgustin1299720 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de Ejercicio2
	/// </summary>
	public ref class Ejercicio2 : public System::Windows::Forms::Form
	{
	public:
		Ejercicio2(void)
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
		~Ejercicio2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:

	private: System::Windows::Forms::RichTextBox^ rtbMostrarPalabras;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::TextBox^ txtValorN;
	private: System::Windows::Forms::Button^ btnGenerar;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::LinkLabel^ lnklTipodepalabra;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnImportar;
	private: System::Windows::Forms::TextBox^ txtPath;
	private: System::Windows::Forms::Button^ btnExportar;
	private: System::Windows::Forms::SaveFileDialog^ sfdExportar;
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	private: System::Windows::Forms::DataGridView^ dgvMatriz;




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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rtbMostrarPalabras = (gcnew System::Windows::Forms::RichTextBox());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->txtValorN = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lnklTipodepalabra = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnImportar = (gcnew System::Windows::Forms::Button());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->btnExportar = (gcnew System::Windows::Forms::Button());
			this->sfdExportar = (gcnew System::Windows::Forms::SaveFileDialog());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->groupBox2->Controls->Add(this->rtbMostrarPalabras);
			this->groupBox2->Controls->Add(this->linkLabel2);
			this->groupBox2->Controls->Add(this->linkLabel1);
			this->groupBox2->Controls->Add(this->btnBuscar);
			this->groupBox2->Controls->Add(this->txtValorN);
			this->groupBox2->Controls->Add(this->btnGenerar);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->dgvMatriz);
			this->groupBox2->Controls->Add(this->lnklTipodepalabra);
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Location = System::Drawing::Point(3, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(772, 407);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &Ejercicio2::groupBox2_Enter);
			// 
			// rtbMostrarPalabras
			// 
			this->rtbMostrarPalabras->BackColor = System::Drawing::Color::IndianRed;
			this->rtbMostrarPalabras->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->rtbMostrarPalabras->Font = (gcnew System::Drawing::Font(L"Tw Cen MT", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtbMostrarPalabras->ForeColor = System::Drawing::SystemColors::Window;
			this->rtbMostrarPalabras->Location = System::Drawing::Point(461, 104);
			this->rtbMostrarPalabras->Name = L"rtbMostrarPalabras";
			this->rtbMostrarPalabras->Size = System::Drawing::Size(272, 190);
			this->rtbMostrarPalabras->TabIndex = 15;
			this->rtbMostrarPalabras->Text = L"";
			// 
			// linkLabel2
			// 
			this->linkLabel2->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::Navy;
			this->linkLabel2->Location = System::Drawing::Point(406, 339);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(205, 23);
			this->linkLabel2->TabIndex = 14;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"palabras palíndromas";
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Navy;
			this->linkLabel1->Location = System::Drawing::Point(10, 337);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(364, 23);
			this->linkLabel1->TabIndex = 13;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Según nuestros cálculos, se encuentran ";
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(178, 301);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(75, 23);
			this->btnBuscar->TabIndex = 12;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &Ejercicio2::btnBuscar_Click_1);
			// 
			// txtValorN
			// 
			this->txtValorN->Location = System::Drawing::Point(109, 19);
			this->txtValorN->Name = L"txtValorN";
			this->txtValorN->Size = System::Drawing::Size(100, 20);
			this->txtValorN->TabIndex = 11;
			// 
			// btnGenerar
			// 
			this->btnGenerar->Location = System::Drawing::Point(119, 53);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(75, 23);
			this->btnGenerar->TabIndex = 10;
			this->btnGenerar->Text = L"Generar";
			this->btnGenerar->UseVisualStyleBackColor = true;
			this->btnGenerar->Click += gcnew System::EventHandler(this, &Ejercicio2::btnGenerar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ingrese valor de n:";
			// 
			// lnklTipodepalabra
			// 
			this->lnklTipodepalabra->ActiveLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lnklTipodepalabra->AutoSize = true;
			this->lnklTipodepalabra->Font = (gcnew System::Drawing::Font(L"Century", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnklTipodepalabra->LinkColor = System::Drawing::Color::White;
			this->lnklTipodepalabra->Location = System::Drawing::Point(371, 329);
			this->lnklTipodepalabra->Name = L"lnklTipodepalabra";
			this->lnklTipodepalabra->Size = System::Drawing::Size(39, 33);
			this->lnklTipodepalabra->TabIndex = 6;
			this->lnklTipodepalabra->TabStop = true;
			this->lnklTipodepalabra->Text = L"...";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnImportar);
			this->groupBox1->Controls->Add(this->txtPath);
			this->groupBox1->Controls->Add(this->btnExportar);
			this->groupBox1->Location = System::Drawing::Point(250, 9);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(392, 80);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Importar archivo de texto";
			// 
			// btnImportar
			// 
			this->btnImportar->Location = System::Drawing::Point(18, 19);
			this->btnImportar->Name = L"btnImportar";
			this->btnImportar->Size = System::Drawing::Size(75, 23);
			this->btnImportar->TabIndex = 1;
			this->btnImportar->Text = L"Importar";
			this->btnImportar->UseVisualStyleBackColor = true;
			this->btnImportar->Click += gcnew System::EventHandler(this, &Ejercicio2::btnImportar_Click_1);
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(149, 28);
			this->txtPath->Name = L"txtPath";
			this->txtPath->Size = System::Drawing::Size(237, 20);
			this->txtPath->TabIndex = 3;
			// 
			// btnExportar
			// 
			this->btnExportar->Location = System::Drawing::Point(18, 48);
			this->btnExportar->Name = L"btnExportar";
			this->btnExportar->Size = System::Drawing::Size(75, 23);
			this->btnExportar->TabIndex = 2;
			this->btnExportar->Text = L"Exportar";
			this->btnExportar->UseVisualStyleBackColor = true;
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"ofdImportar";
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->AllowUserToAddRows = false;
			this->dgvMatriz->AllowUserToDeleteRows = false;
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(11, 105);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->ReadOnly = true;
			this->dgvMatriz->Size = System::Drawing::Size(427, 190);
			this->dgvMatriz->TabIndex = 8;
			// 
			// Ejercicio2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 410);
			this->Controls->Add(this->groupBox2);
			this->Name = L"Ejercicio2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ejercicio2";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: void ReestablecerMatriz() {
			dgvMatriz->Rows->Clear();
			dgvMatriz->Columns->Clear();
			dgvMatriz->ColumnHeadersVisible = false;
			dgvMatriz->RowHeadersVisible = false;

		};

			   array<String^>^ fila;

private: System::Void btnImportar_Click(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void btnExportar_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((dgvMatriz->Columns->Count > 0) && (dgvMatriz->Rows->Count > 0)) {
		sfdExportar->Filter = "Archivos separados por coma (txt) | *.txt";
		if (sfdExportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

			//Guardo el contenido del DataGridView en una sola cadena
			String^ linea = "";
			for (int i = 0; i < dgvMatriz->Rows->Count; i++) {
				for (int j = 0; j < dgvMatriz->Columns->Count; j++) {
					if (j == dgvMatriz->Columns->Count - 1)
						linea += "" + dgvMatriz->Rows[i]->Cells[j]->Value + "\r\n";
					else
						linea += "" + dgvMatriz->Rows[i]->Cells[j]->Value + ",";
				}
			}

			//Utilizo el objeto System::IO::File para guardar el texto
			//Importante haber llamado al namespace System::IO antes de usar File
			File::WriteAllText(sfdExportar->FileName, linea);
			MessageBox::Show("Archivo guardado exitosamente"
				, "Operación exitosa"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se exportó el archivo"
				, "Archivo no seleccionado"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
	}
}

private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void lnklTipodepalabra_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

}


private: System::Void btnEjercicio3_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void btnGenerar_Click(System::Object^ sender, System::EventArgs^ e) {
	int numFilas = 0;
	int numColumnas = 0;
	try {
		numFilas = Convert::ToInt32(txtValorN->Text);
		numColumnas = Convert::ToInt32(txtValorN->Text);
	}
	catch (Exception^ e) {
		MessageBox::Show("Error detectado: " + e->Message
			, "Valores incorrectos"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Error);
	}

	ReestablecerMatriz();	//Método que borra el contenido de la matriz

	//Se crean las columnas de la matriz
	if (numColumnas > 0) {
		for (int i = 0; i < numColumnas; i++) {
			//Se crea una columna
			DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
			nuevacolumna->Width = 100;

			//Se le agrega el tipo de columna que será
			DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
			nuevacolumna->CellTemplate = cellTemplate;

			//Se agrega la columna al Datagrid
			dgvMatriz->Columns->Add(nuevacolumna);
		}
	}

	//Se agregan las filas a la matriz
	if (numFilas > 0) {
		for (int i = 0; i < numFilas; i++) {
			dgvMatriz->Rows->Add();
		}
	}
}
private: System::Void btnImportar_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//Se agregan los filtros al OpenFileDialog
	ofdImportar->Filter = "Archivos separados por coma (txt) | *.txt";
	ofdImportar->FileName = "";


	//Unicamente si el reultado de la apertura del archivo es exitosa se carga el archivo
	if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
		txtPath->Text = ofdImportar->FileName;

		//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
		//Importante haber llamado al namespace System::IO antes de usar File
		array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);

		if (archivoLineas->Length > 0) {

			//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
			array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
			if (archivoColumna->Length > 0) {
				int cantidadColumnas = archivoColumna->Length;

				//Agrega las columnas
				for (int i = 0; i < cantidadColumnas; i++) {
					//Crea una columna
					DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
					nuevacolumna->Width = 60;
					//Le agrega el tipo de columna que será
					DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
					nuevacolumna->CellTemplate = cellTemplate;
					//Inserta la columna
					dgvMatriz->Columns->Add(nuevacolumna);
				}
				//Agrega las filas de manera dinámica
				for (int i = 0; i < archivoLineas->Length; i++) {
					dgvMatriz->Rows->Add();
				}
				//Llena el Datagridview
				for (int i = 0; i < archivoLineas->Length; i++) {
					fila = archivoLineas[i]->Split(',');
					int j = 0;
			
					//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
					while ((j < cantidadColumnas) && (j < fila->Length)) {
						dgvMatriz->Rows[i]->Cells[j]->Value = fila[j];
						j++;

					}
				}



			}
		}

	}
	else {
		// Si no se selecciona correctamente un elemento entonces falla
		MessageBox::Show("No se seleccionó ningún archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
}
private: System::Void btnBuscar_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try{
	int numerodepalabras = 0;
	int palabra = fila->Length - 1;
	for (int i = 0; i < dgvMatriz->RowCount + palabra; i++)
	{	
		int totalletras = fila[i]->Length;

		String^ inverso = "";
		String^ caracter;

		for (int x = totalletras - 1; x >= 0; x--)
		{
			caracter = fila[i]->Substring(x, 1);
			inverso = inverso + caracter;

		}
		if (fila[i] == inverso) {

			rtbMostrarPalabras->Text += "-LA PALABRA [" + fila[i]->ToUpper() + "] ES PALÍNDROMA\n\n";
			numerodepalabras++;
		}
		else {
			rtbMostrarPalabras->Text += "-LA PALABRA [" + fila[i]->ToUpper() + "] NO ES PALÍNDROMA\n\n";
		}
	}
	if (numerodepalabras == 1) {
		lnklTipodepalabra->Text = "" + numerodepalabras;
	}
	else {
		lnklTipodepalabra->Text = "" + numerodepalabras;
	}
	}
	catch (Exception^ e) {
		MessageBox::Show("Error detectado " + e->Message, " Opción no válida", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
