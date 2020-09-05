#include "Ejercicio1.h";
#include"Ejercicio2.h";
#include"Ejercicio3.h";
#include"Ejercicio4.h";

#pragma once


namespace Tarea1JulioAgustin1299720 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuDeEjercicios
	/// </summary>
	public ref class MenuDeEjercicios : public System::Windows::Forms::Form
	{
	public:
		MenuDeEjercicios(void)
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
		~MenuDeEjercicios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnEjercicio1;
	private: System::Windows::Forms::Button^ btnEjercicio2;
	private: System::Windows::Forms::Button^ btnEjercicio3;
	private: System::Windows::Forms::Button^ btnEjercicio4;
	private: System::Windows::Forms::Button^ btnSalir;
	protected:

	protected:




	private: System::Windows::Forms::Label^ label1;

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
			this->btnEjercicio1 = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio2 = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio3 = (gcnew System::Windows::Forms::Button());
			this->btnEjercicio4 = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnEjercicio1
			// 
			this->btnEjercicio1->Location = System::Drawing::Point(52, 104);
			this->btnEjercicio1->Name = L"btnEjercicio1";
			this->btnEjercicio1->Size = System::Drawing::Size(75, 23);
			this->btnEjercicio1->TabIndex = 0;
			this->btnEjercicio1->Text = L"Ejercicio 1";
			this->btnEjercicio1->UseVisualStyleBackColor = true;
			this->btnEjercicio1->Click += gcnew System::EventHandler(this, &MenuDeEjercicios::btnEjercicio1_Click);
			// 
			// btnEjercicio2
			// 
			this->btnEjercicio2->Location = System::Drawing::Point(52, 133);
			this->btnEjercicio2->Name = L"btnEjercicio2";
			this->btnEjercicio2->Size = System::Drawing::Size(75, 23);
			this->btnEjercicio2->TabIndex = 1;
			this->btnEjercicio2->Text = L"Ejercicio 2";
			this->btnEjercicio2->UseVisualStyleBackColor = true;
			this->btnEjercicio2->Click += gcnew System::EventHandler(this, &MenuDeEjercicios::btnEjercicio2_Click);
			// 
			// btnEjercicio3
			// 
			this->btnEjercicio3->Location = System::Drawing::Point(52, 162);
			this->btnEjercicio3->Name = L"btnEjercicio3";
			this->btnEjercicio3->Size = System::Drawing::Size(75, 23);
			this->btnEjercicio3->TabIndex = 2;
			this->btnEjercicio3->Text = L"Ejercicio 3";
			this->btnEjercicio3->UseVisualStyleBackColor = true;
			this->btnEjercicio3->Click += gcnew System::EventHandler(this, &MenuDeEjercicios::btnEjercicio3_Click);
			// 
			// btnEjercicio4
			// 
			this->btnEjercicio4->Location = System::Drawing::Point(52, 191);
			this->btnEjercicio4->Name = L"btnEjercicio4";
			this->btnEjercicio4->Size = System::Drawing::Size(75, 23);
			this->btnEjercicio4->TabIndex = 3;
			this->btnEjercicio4->Text = L"Ejercicio 4";
			this->btnEjercicio4->UseVisualStyleBackColor = true;
			this->btnEjercicio4->Click += gcnew System::EventHandler(this, &MenuDeEjercicios::btnEjercicio4_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(52, 220);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 23);
			this->btnSalir->TabIndex = 4;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MenuDeEjercicios::btnSalir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"MENÚ DEL PROGRAMA";
			// 
			// MenuDeEjercicios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 333);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnEjercicio4);
			this->Controls->Add(this->btnEjercicio3);
			this->Controls->Add(this->btnEjercicio2);
			this->Controls->Add(this->btnEjercicio1);
			this->Name = L"MenuDeEjercicios";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuDeEjercicios";
			this->Load += gcnew System::EventHandler(this, &MenuDeEjercicios::MenuDeEjercicios_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuDeEjercicios_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnEjercicio1_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio1^ VentanaEjercicio1 = gcnew Ejercicio1();
	VentanaEjercicio1->ShowDialog();
}
private: System::Void btnEjercicio2_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio2^ VentanaEjercicio2 = gcnew Ejercicio2();
	VentanaEjercicio2->ShowDialog();
}
private: System::Void btnEjercicio3_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio3^ VentanaEjercicio3 = gcnew Ejercicio3();
	VentanaEjercicio3->ShowDialog();
}
private: System::Void btnEjercicio4_Click(System::Object^ sender, System::EventArgs^ e) {
	Ejercicio4^ VentanaEjercicio4 = gcnew Ejercicio4();
	VentanaEjercicio4->ShowDialog();
}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this -> Close();
}
};
}
