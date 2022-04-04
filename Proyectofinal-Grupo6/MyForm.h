#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <msclr/marshal.h>

namespace ProyectofinalGrupo6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBoxagregar;
	protected:

	private: System::Windows::Forms::TextBox^ textBoxcorreo;
	private: System::Windows::Forms::TextBox^ textBoxredes;


	private: System::Windows::Forms::TextBox^ textBoxprofesion;

	private: System::Windows::Forms::TextBox^ textBoxnacionalidad;
	private: System::Windows::Forms::TextBox^ textBoxtrabajo;
	private: System::Windows::Forms::TextBox^ textBoxnumero;



	private: System::Windows::Forms::TextBox^ textBoxapellido;

	private: System::Windows::Forms::TextBox^ textBoxnombre;

	private: System::Windows::Forms::Label^ Correo;
	private: System::Windows::Forms::Label^ Profesion;
	private: System::Windows::Forms::Label^ Nacionalidad;
	private: System::Windows::Forms::Label^ Redes;
	private: System::Windows::Forms::Label^ Trabajo;
	private: System::Windows::Forms::Label^ Nivelacad;
	private: System::Windows::Forms::Label^ Numero;
	private: System::Windows::Forms::Label^ Apellido;
	private: System::Windows::Forms::Label^ Nombre;
	private: System::Windows::Forms::ComboBox^ comboBoxnivelacad;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ContactoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AgregarToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBoxcontacto;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;







	protected:

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
			this->groupBoxagregar = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxnivelacad = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxcorreo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxredes = (gcnew System::Windows::Forms::TextBox());
			this->textBoxprofesion = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnacionalidad = (gcnew System::Windows::Forms::TextBox());
			this->textBoxtrabajo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnumero = (gcnew System::Windows::Forms::TextBox());
			this->textBoxapellido = (gcnew System::Windows::Forms::TextBox());
			this->textBoxnombre = (gcnew System::Windows::Forms::TextBox());
			this->Correo = (gcnew System::Windows::Forms::Label());
			this->Profesion = (gcnew System::Windows::Forms::Label());
			this->Nacionalidad = (gcnew System::Windows::Forms::Label());
			this->Redes = (gcnew System::Windows::Forms::Label());
			this->Trabajo = (gcnew System::Windows::Forms::Label());
			this->Nivelacad = (gcnew System::Windows::Forms::Label());
			this->Numero = (gcnew System::Windows::Forms::Label());
			this->Apellido = (gcnew System::Windows::Forms::Label());
			this->Nombre = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ContactoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AgregarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxcontacto = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBoxagregar->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBoxcontacto->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBoxagregar
			// 
			this->groupBoxagregar->Controls->Add(this->groupBox1);
			this->groupBoxagregar->Controls->Add(this->comboBoxnivelacad);
			this->groupBoxagregar->Controls->Add(this->textBoxcorreo);
			this->groupBoxagregar->Controls->Add(this->textBoxredes);
			this->groupBoxagregar->Controls->Add(this->textBoxprofesion);
			this->groupBoxagregar->Controls->Add(this->textBoxnacionalidad);
			this->groupBoxagregar->Controls->Add(this->textBoxtrabajo);
			this->groupBoxagregar->Controls->Add(this->textBoxnumero);
			this->groupBoxagregar->Controls->Add(this->textBoxapellido);
			this->groupBoxagregar->Controls->Add(this->textBoxnombre);
			this->groupBoxagregar->Controls->Add(this->Correo);
			this->groupBoxagregar->Controls->Add(this->Profesion);
			this->groupBoxagregar->Controls->Add(this->Nacionalidad);
			this->groupBoxagregar->Controls->Add(this->Redes);
			this->groupBoxagregar->Controls->Add(this->Trabajo);
			this->groupBoxagregar->Controls->Add(this->Nivelacad);
			this->groupBoxagregar->Controls->Add(this->Numero);
			this->groupBoxagregar->Controls->Add(this->Apellido);
			this->groupBoxagregar->Controls->Add(this->Nombre);
			this->groupBoxagregar->Location = System::Drawing::Point(12, 33);
			this->groupBoxagregar->Name = L"groupBoxagregar";
			this->groupBoxagregar->Size = System::Drawing::Size(573, 368);
			this->groupBoxagregar->TabIndex = 0;
			this->groupBoxagregar->TabStop = false;
			this->groupBoxagregar->Text = L"Agregar contacto";
			this->groupBoxagregar->Visible = false;
			this->groupBoxagregar->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// comboBoxnivelacad
			// 
			this->comboBoxnivelacad->FormattingEnabled = true;
			this->comboBoxnivelacad->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Primaria", L"Basicos", L"Bachiller",
					L"Perito", L"Tecnico", L"Licenciatura", L"Maestria", L"Doctorado"
			});
			this->comboBoxnivelacad->Location = System::Drawing::Point(106, 286);
			this->comboBoxnivelacad->Name = L"comboBoxnivelacad";
			this->comboBoxnivelacad->Size = System::Drawing::Size(168, 21);
			this->comboBoxnivelacad->TabIndex = 17;
			// 
			// textBoxcorreo
			// 
			this->textBoxcorreo->Location = System::Drawing::Point(363, 83);
			this->textBoxcorreo->Name = L"textBoxcorreo";
			this->textBoxcorreo->Size = System::Drawing::Size(168, 20);
			this->textBoxcorreo->TabIndex = 16;
			// 
			// textBoxredes
			// 
			this->textBoxredes->Location = System::Drawing::Point(363, 216);
			this->textBoxredes->Multiline = true;
			this->textBoxredes->Name = L"textBoxredes";
			this->textBoxredes->Size = System::Drawing::Size(168, 91);
			this->textBoxredes->TabIndex = 15;
			// 
			// textBoxprofesion
			// 
			this->textBoxprofesion->Location = System::Drawing::Point(106, 249);
			this->textBoxprofesion->Name = L"textBoxprofesion";
			this->textBoxprofesion->Size = System::Drawing::Size(168, 20);
			this->textBoxprofesion->TabIndex = 14;
			// 
			// textBoxnacionalidad
			// 
			this->textBoxnacionalidad->Location = System::Drawing::Point(106, 172);
			this->textBoxnacionalidad->Name = L"textBoxnacionalidad";
			this->textBoxnacionalidad->Size = System::Drawing::Size(168, 20);
			this->textBoxnacionalidad->TabIndex = 13;
			// 
			// textBoxtrabajo
			// 
			this->textBoxtrabajo->Location = System::Drawing::Point(106, 209);
			this->textBoxtrabajo->Name = L"textBoxtrabajo";
			this->textBoxtrabajo->Size = System::Drawing::Size(168, 20);
			this->textBoxtrabajo->TabIndex = 12;
			// 
			// textBoxnumero
			// 
			this->textBoxnumero->Location = System::Drawing::Point(363, 57);
			this->textBoxnumero->Name = L"textBoxnumero";
			this->textBoxnumero->Size = System::Drawing::Size(168, 20);
			this->textBoxnumero->TabIndex = 11;
			// 
			// textBoxapellido
			// 
			this->textBoxapellido->Location = System::Drawing::Point(76, 82);
			this->textBoxapellido->Name = L"textBoxapellido";
			this->textBoxapellido->Size = System::Drawing::Size(168, 20);
			this->textBoxapellido->TabIndex = 10;
			// 
			// textBoxnombre
			// 
			this->textBoxnombre->Location = System::Drawing::Point(76, 57);
			this->textBoxnombre->Name = L"textBoxnombre";
			this->textBoxnombre->Size = System::Drawing::Size(168, 20);
			this->textBoxnombre->TabIndex = 9;
			// 
			// Correo
			// 
			this->Correo->AutoSize = true;
			this->Correo->Location = System::Drawing::Point(261, 89);
			this->Correo->Name = L"Correo";
			this->Correo->Size = System::Drawing::Size(96, 13);
			this->Correo->TabIndex = 8;
			this->Correo->Text = L"Correo electronico:";
			// 
			// Profesion
			// 
			this->Profesion->AutoSize = true;
			this->Profesion->Location = System::Drawing::Point(46, 256);
			this->Profesion->Name = L"Profesion";
			this->Profesion->Size = System::Drawing::Size(54, 13);
			this->Profesion->TabIndex = 7;
			this->Profesion->Text = L"Profesion:";
			// 
			// Nacionalidad
			// 
			this->Nacionalidad->AutoSize = true;
			this->Nacionalidad->Location = System::Drawing::Point(28, 179);
			this->Nacionalidad->Name = L"Nacionalidad";
			this->Nacionalidad->Size = System::Drawing::Size(72, 13);
			this->Nacionalidad->TabIndex = 6;
			this->Nacionalidad->Text = L"Nacionalidad:";
			// 
			// Redes
			// 
			this->Redes->AutoSize = true;
			this->Redes->Location = System::Drawing::Point(404, 179);
			this->Redes->Name = L"Redes";
			this->Redes->Size = System::Drawing::Size(82, 13);
			this->Redes->TabIndex = 5;
			this->Redes->Text = L"Redes sociales:";
			this->Redes->Click += gcnew System::EventHandler(this, &MyForm::Redes_Click);
			// 
			// Trabajo
			// 
			this->Trabajo->AutoSize = true;
			this->Trabajo->Location = System::Drawing::Point(22, 216);
			this->Trabajo->Name = L"Trabajo";
			this->Trabajo->Size = System::Drawing::Size(78, 13);
			this->Trabajo->TabIndex = 4;
			this->Trabajo->Text = L"Trabajo actual:";
			// 
			// Nivelacad
			// 
			this->Nivelacad->AutoSize = true;
			this->Nivelacad->Location = System::Drawing::Point(11, 294);
			this->Nivelacad->Name = L"Nivelacad";
			this->Nivelacad->Size = System::Drawing::Size(89, 13);
			this->Nivelacad->TabIndex = 3;
			this->Nivelacad->Text = L"Nivel academico:";
			// 
			// Numero
			// 
			this->Numero->AutoSize = true;
			this->Numero->Location = System::Drawing::Point(261, 64);
			this->Numero->Name = L"Numero";
			this->Numero->Size = System::Drawing::Size(96, 13);
			this->Numero->TabIndex = 2;
			this->Numero->Text = L"Numero telefonico:";
			// 
			// Apellido
			// 
			this->Apellido->AutoSize = true;
			this->Apellido->Location = System::Drawing::Point(18, 89);
			this->Apellido->Name = L"Apellido";
			this->Apellido->Size = System::Drawing::Size(52, 13);
			this->Apellido->TabIndex = 1;
			this->Apellido->Text = L"Apellidos:";
			// 
			// Nombre
			// 
			this->Nombre->AutoSize = true;
			this->Nombre->Location = System::Drawing::Point(18, 64);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(52, 13);
			this->Nombre->TabIndex = 0;
			this->Nombre->Text = L"Nombres:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ContactoToolStripMenuItem,
					this->AgregarToolStripMenuItem, this->buscarToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(856, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ContactoToolStripMenuItem
			// 
			this->ContactoToolStripMenuItem->Name = L"ContactoToolStripMenuItem";
			this->ContactoToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->ContactoToolStripMenuItem->Text = L"Contactos";
			this->ContactoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::agregarToolStripMenuItem_Click);
			// 
			// AgregarToolStripMenuItem
			// 
			this->AgregarToolStripMenuItem->Name = L"AgregarToolStripMenuItem";
			this->AgregarToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->AgregarToolStripMenuItem->Text = L"Agregar";
			this->AgregarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::contaToolStripMenuItem_Click);
			// 
			// buscarToolStripMenuItem
			// 
			this->buscarToolStripMenuItem->Name = L"buscarToolStripMenuItem";
			this->buscarToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->buscarToolStripMenuItem->Text = L"Buscar";
			this->buscarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::buscarToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(573, 374);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar";
			this->groupBox1->Visible = false;
			// 
			// groupBoxcontacto
			// 
			this->groupBoxcontacto->Controls->Add(this->dataGridView1);
			this->groupBoxcontacto->Location = System::Drawing::Point(717, 90);
			this->groupBoxcontacto->Name = L"groupBoxcontacto";
			this->groupBoxcontacto->Size = System::Drawing::Size(573, 374);
			this->groupBoxcontacto->TabIndex = 3;
			this->groupBoxcontacto->TabStop = false;
			this->groupBoxcontacto->Text = L"Contactos";
			this->groupBoxcontacto->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 35);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(542, 323);
			this->dataGridView1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(210, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingresa  los datos de busqueda:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(34, 92);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(207, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Filtro de busqueda:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 458);
			this->Controls->Add(this->groupBoxcontacto);
			this->Controls->Add(this->groupBoxagregar);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBoxagregar->ResumeLayout(false);
			this->groupBoxagregar->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBoxcontacto->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Redes_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void agregarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBoxcontacto->Visible = true; 
	groupBoxagregar->Visible = false;
	groupBox1->Visible = false;
}
private: System::Void contaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBoxagregar->Visible = true;
	groupBox1->Visible = false;
	groupBoxcontacto->Visible = false;
}
private: System::Void buscarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox1->Visible = true;
	groupBoxagregar->Visible = false;
	groupBoxcontacto->Visible = false;
}
private: System::Void groupBoxContactos_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
