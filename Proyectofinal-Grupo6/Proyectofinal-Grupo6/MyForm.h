#pragma once
#include <iostream>
#include <string>
#include "Contactos.h"
#include <msclr\marshal_cppstd.h>
#include <msclr/marshal.h>
//listas
#include <cstdlib>
#include <iomanip>
#include <list>
#include <iterator>



namespace ProyectofinalGrupo6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;
	//Arreglos
	Contactos contactos;
	//listas de cada dato
	list <string> nombrelista;
	list <string> apellidoslista;
	list <string> correolista;
	list <string> nacionalidadlista;
	list <string> trabajolista;
	list <string> profesionlista;
	list <string> nivelacadlista;
	list <string> redeslista;
	list <string> telefonolista;
	list <string> extensionlista;
	//contador
	int contador = 0; 

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

	private: System::Windows::Forms::ToolStripMenuItem^ AgregarToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ buscarToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1Agregar;
	private: System::Windows::Forms::TextBox^ textBoxextension;
	private: System::Windows::Forms::Label^ label3e;
	private: System::Windows::Forms::ToolStripMenuItem^ visualizarToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::ToolStripMenuItem^ borrarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ borrar;
	private: System::Windows::Forms::Button^ botonborrar;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ numeroborrar;
	private: System::Windows::Forms::TextBox^ contactoeditar;
	private: System::Windows::Forms::Label^ editar;
	private: System::Windows::Forms::Button^ botoneditar;








































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
			this->contactoeditar = (gcnew System::Windows::Forms::TextBox());
			this->editar = (gcnew System::Windows::Forms::Label());
			this->botoneditar = (gcnew System::Windows::Forms::Button());
			this->textBoxextension = (gcnew System::Windows::Forms::TextBox());
			this->label3e = (gcnew System::Windows::Forms::Label());
			this->button1Agregar = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->AgregarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->borrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->visualizarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->borrar = (gcnew System::Windows::Forms::GroupBox());
			this->botonborrar = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numeroborrar = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxagregar->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->borrar->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBoxagregar
			// 
			this->groupBoxagregar->Controls->Add(this->contactoeditar);
			this->groupBoxagregar->Controls->Add(this->editar);
			this->groupBoxagregar->Controls->Add(this->botoneditar);
			this->groupBoxagregar->Controls->Add(this->textBoxextension);
			this->groupBoxagregar->Controls->Add(this->label3e);
			this->groupBoxagregar->Controls->Add(this->button1Agregar);
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
			this->groupBoxagregar->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// contactoeditar
			// 
			this->contactoeditar->Location = System::Drawing::Point(300, 22);
			this->contactoeditar->Name = L"contactoeditar";
			this->contactoeditar->Size = System::Drawing::Size(100, 20);
			this->contactoeditar->TabIndex = 23;
			this->contactoeditar->Visible = false;
			this->contactoeditar->TextChanged += gcnew System::EventHandler(this, &MyForm::contactoeditar_TextChanged);
			// 
			// editar
			// 
			this->editar->AutoSize = true;
			this->editar->Location = System::Drawing::Point(149, 25);
			this->editar->Name = L"editar";
			this->editar->Size = System::Drawing::Size(145, 13);
			this->editar->TabIndex = 22;
			this->editar->Text = L"Numero de contacto a editar:";
			this->editar->Visible = false;
			this->editar->Click += gcnew System::EventHandler(this, &MyForm::editar_Click);
			// 
			// botoneditar
			// 
			this->botoneditar->Location = System::Drawing::Point(152, 327);
			this->botoneditar->Name = L"botoneditar";
			this->botoneditar->Size = System::Drawing::Size(75, 23);
			this->botoneditar->TabIndex = 21;
			this->botoneditar->Text = L"Editar";
			this->botoneditar->UseVisualStyleBackColor = true;
			this->botoneditar->Visible = false;
			this->botoneditar->Click += gcnew System::EventHandler(this, &MyForm::botoneditar_Click);
			// 
			// textBoxextension
			// 
			this->textBoxextension->Location = System::Drawing::Point(363, 83);
			this->textBoxextension->Name = L"textBoxextension";
			this->textBoxextension->Size = System::Drawing::Size(168, 20);
			this->textBoxextension->TabIndex = 20;
			this->textBoxextension->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxextension_TextChanged);
			// 
			// label3e
			// 
			this->label3e->AutoSize = true;
			this->label3e->Location = System::Drawing::Point(298, 86);
			this->label3e->Name = L"label3e";
			this->label3e->Size = System::Drawing::Size(68, 13);
			this->label3e->TabIndex = 19;
			this->label3e->Text = L"Extension:  +";
			// 
			// button1Agregar
			// 
			this->button1Agregar->Location = System::Drawing::Point(152, 327);
			this->button1Agregar->Name = L"button1Agregar";
			this->button1Agregar->Size = System::Drawing::Size(75, 23);
			this->button1Agregar->TabIndex = 18;
			this->button1Agregar->Text = L"Agregar";
			this->button1Agregar->UseVisualStyleBackColor = true;
			this->button1Agregar->Click += gcnew System::EventHandler(this, &MyForm::button1Agregar_Click);
			// 
			// comboBoxnivelacad
			// 
			this->comboBoxnivelacad->FormattingEnabled = true;
			this->comboBoxnivelacad->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Bachiller", L"Perito", L"Tecnico", L"Licenciatura",
					L"Maestria", L"Doctorado"
			});
			this->comboBoxnivelacad->Location = System::Drawing::Point(106, 286);
			this->comboBoxnivelacad->Name = L"comboBoxnivelacad";
			this->comboBoxnivelacad->Size = System::Drawing::Size(168, 21);
			this->comboBoxnivelacad->TabIndex = 17;
			// 
			// textBoxcorreo
			// 
			this->textBoxcorreo->Location = System::Drawing::Point(363, 110);
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
			this->Correo->Location = System::Drawing::Point(261, 116);
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(656, 74);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(573, 374);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Buscar";
			this->groupBox1->Visible = false;
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(34, 92);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(207, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(34, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(210, 20);
			this->textBox1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->AgregarToolStripMenuItem,
					this->borrarToolStripMenuItem, this->editarToolStripMenuItem, this->buscarToolStripMenuItem, this->visualizarToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1269, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// AgregarToolStripMenuItem
			// 
			this->AgregarToolStripMenuItem->Name = L"AgregarToolStripMenuItem";
			this->AgregarToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->AgregarToolStripMenuItem->Text = L"Agregar";
			this->AgregarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::contaToolStripMenuItem_Click);
			// 
			// borrarToolStripMenuItem
			// 
			this->borrarToolStripMenuItem->Name = L"borrarToolStripMenuItem";
			this->borrarToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->borrarToolStripMenuItem->Text = L"Borrar";
			this->borrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::borrarToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::editarToolStripMenuItem_Click);
			// 
			// buscarToolStripMenuItem
			// 
			this->buscarToolStripMenuItem->Name = L"buscarToolStripMenuItem";
			this->buscarToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->buscarToolStripMenuItem->Text = L"Buscar";
			this->buscarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::buscarToolStripMenuItem_Click);
			// 
			// visualizarToolStripMenuItem
			// 
			this->visualizarToolStripMenuItem->Name = L"visualizarToolStripMenuItem";
			this->visualizarToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->visualizarToolStripMenuItem->Text = L"Visualizar";
			this->visualizarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::visualizarToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column11,
					this->Column1, this->Column2, this->Column4, this->Column5, this->Column10, this->Column6, this->Column7, this->Column8, this->Column3,
					this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(130, 190);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1049, 150);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"No.";
			this->Column11->Name = L"Column11";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombres";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Apellidos";
			this->Column2->Name = L"Column2";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Trabajo";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Nivel academico";
			this->Column5->Name = L"Column5";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Nacionalidad";
			this->Column10->Name = L"Column10";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Profesion";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Correo";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Extension";
			this->Column8->Name = L"Column8";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Numero";
			this->Column3->Name = L"Column3";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Redes sociales";
			this->Column9->Name = L"Column9";
			// 
			// borrar
			// 
			this->borrar->Controls->Add(this->botonborrar);
			this->borrar->Controls->Add(this->label3);
			this->borrar->Controls->Add(this->numeroborrar);
			this->borrar->Location = System::Drawing::Point(262, 74);
			this->borrar->Name = L"borrar";
			this->borrar->Size = System::Drawing::Size(378, 125);
			this->borrar->TabIndex = 4;
			this->borrar->TabStop = false;
			this->borrar->Text = L"Borrar";
			this->borrar->Visible = false;
			// 
			// botonborrar
			// 
			this->botonborrar->Location = System::Drawing::Point(156, 87);
			this->botonborrar->Name = L"botonborrar";
			this->botonborrar->Size = System::Drawing::Size(75, 23);
			this->botonborrar->TabIndex = 2;
			this->botonborrar->Text = L"Borrar";
			this->botonborrar->UseVisualStyleBackColor = true;
			this->botonborrar->Click += gcnew System::EventHandler(this, &MyForm::botonborrar_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(193, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Numero de contacto que desea borrar: ";
			// 
			// numeroborrar
			// 
			this->numeroborrar->Location = System::Drawing::Point(234, 55);
			this->numeroborrar->Name = L"numeroborrar";
			this->numeroborrar->Size = System::Drawing::Size(100, 20);
			this->numeroborrar->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1269, 552);
			this->Controls->Add(this->groupBoxagregar);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->borrar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBoxagregar->ResumeLayout(false);
			this->groupBoxagregar->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->borrar->ResumeLayout(false);
			this->borrar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Redes_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void contaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Visible = false;
	groupBox1->Visible = false;
	groupBoxagregar->Visible = true;
	borrar->Visible = false;
	button1Agregar->Visible = true;
	botoneditar->Visible = false;
	editar->Visible = false;
	contactoeditar->Visible = false;
}
private: System::Void buscarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	groupBoxagregar->Visible = false;
	dataGridView1->Visible = false;
	groupBox1->Visible = true;
	borrar->Visible = false;
}
private: System::Void groupBoxContactos_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1Agregar_Click(System::Object^ sender, System::EventArgs^ e) {

	//Boton agregar

	try
	{
		if (contador < 500)
		{
			string nombres;
			string apellido;
			string nivelAca;
			string trabajo;
			string redes;
			string nacionalidad;
			string profesion;
			string correo;
			int numero;
			string numero2; 
			int ext;
			string ext2; //extension para el numero telefonico


			nombres = marshal_as<string>(textBoxnombre->Text);
			contactos.setNombres(nombres);
			nombrelista.push_back(contactos.getnombres()); 

			apellido = marshal_as<string>(textBoxapellido->Text);
			contactos.setapellidos(apellido);
			apellidoslista.push_back(contactos.getApellidos());

			nivelAca = marshal_as<string>(comboBoxnivelacad->Text);
			contactos.setNivelAcademico(nivelAca);
			nivelacadlista.push_back(contactos.getnivelacademico());

			trabajo = marshal_as<string>(textBoxtrabajo->Text);
			contactos.setTrabajoActual(trabajo);
			trabajolista.push_back(contactos.gettrabajoactual());

			redes = marshal_as<string>(textBoxredes->Text);
			contactos.setRedesSociales(redes);
			redeslista.push_back(contactos.getredessociales());

			nacionalidad = marshal_as<string>(textBoxnacionalidad->Text);
			contactos.setNacionalidad(nacionalidad);
			nacionalidadlista.push_back(contactos.getnacionalidad());

			profesion = marshal_as<string>(textBoxprofesion->Text);
			contactos.setProfesion(profesion);
			profesionlista.push_back(contactos.getprofesion());

			correo = marshal_as<string>(textBoxcorreo->Text);
			contactos.setCorreoElectronico(correo);
			correolista.push_back(contactos.getcorreoelectronico());

			numero = Convert::ToInt32(textBoxnumero->Text);
			contactos.setNumeroTelefonico(numero);
			numero2 = marshal_as<string>(textBoxnumero->Text); 
			telefonolista.push_back(numero2);

			ext = Convert::ToInt32(textBoxextension->Text);
			contactos.setextension(ext);
			ext2 = marshal_as<string>(textBoxextension->Text);
			extensionlista.push_back(ext2);  

			//llenar la lista con las mismas posiciones que el arreglo
			//string n = contactos[contador].getnombres();
			//contactoslista.push_back(contactos[contador].getnombres());
	
			
			MessageBox::Show("Contacto agregado con exito");

			textBoxnombre->Text = "";
			textBoxapellido->Text = "";
			comboBoxnivelacad->Text = "";
			textBoxtrabajo->Text = "";
			textBoxredes->Text = "";
			textBoxnacionalidad->Text = "";
			textBoxprofesion->Text = "";
			textBoxcorreo->Text = "";
			textBoxextension->Text = "";
			textBoxnumero->Text = "";

			contador++; 
			
		}
		else
		{
			textBoxnombre->Enabled = false;
			textBoxapellido->Enabled = false;
			comboBoxnivelacad->Enabled = false;
			textBoxtrabajo->Enabled = false;
			textBoxredes->Enabled = false;
			textBoxnacionalidad->Enabled = false;
			textBoxprofesion->Enabled = false;
			textBoxcorreo->Enabled = false;
			textBoxextension->Enabled = false;
			textBoxnumero->Enabled = false;

			MessageBox::Show("No se pueden agregar mas contactos");

		}

		
	}
	catch (Exception^ ex) 
	{
		MessageBox::Show(ex->Message);
	}




}
private: System::Void textBoxextension_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void visualizarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Visible = true;
	groupBoxagregar->Visible = false;
	groupBox1->Visible = false;
	borrar->Visible = false; 
	
	
	//agrega los datos
	//auto it = nombrelista.begin();
	//std::advance(it, 0);
	//dataGridView1[0, 1]->Value = marshal_as<String^>(*it); 
	
	
	dataGridView1->Rows->Clear();
	for (int i = 0; i < nombrelista.size(); i++)
	{
		//while (dataGridView1->Rows->Count > 1 )
		
		

			for (int j = 0; j < nombrelista.size(); j++) {
				dataGridView1->Rows->Add();
			}
		
		
			
		//No.
		dataGridView1[0, i]->Value = i + 1;
		//nombres
		auto it = nombrelista.begin();
		std::advance(it, i);
		dataGridView1[1, i]->Value = marshal_as<String^>(*it);
		//apellidos
		it = apellidoslista.begin();
		std::advance(it, i);
		dataGridView1[2, i]->Value = marshal_as<String^>(*it);
		//trabajo
		it = trabajolista.begin();
		std::advance(it, i);
		dataGridView1[3, i]->Value = marshal_as<String^>(*it);
		//nivel academico
		it = nivelacadlista.begin();
		std::advance(it, i);
		dataGridView1[4, i]->Value = marshal_as<String^>(*it);
		//nacionalidad
		it = nacionalidadlista.begin();
		std::advance(it, i);
		dataGridView1[5, i]->Value = marshal_as<String^>(*it);
		//profesion
		it = profesionlista.begin();
		std::advance(it, i);
		dataGridView1[6, i]->Value = marshal_as<String^>(*it);
		//correo electronico
		it = correolista.begin();
		std::advance(it, i);
		dataGridView1[7, i]->Value = marshal_as<String^>(*it);
		//extension
		it = extensionlista.begin(); 
		std::advance(it, i);
		dataGridView1[8, i]->Value = marshal_as<String^>(*it);
		//numero
		it = telefonolista.begin();
		std::advance(it, i);
		dataGridView1[9, i]->Value = marshal_as<String^>(*it);
		//redes sociales
		it = redeslista.begin(); 
		std::advance(it, i);
		dataGridView1[10, i]->Value = marshal_as<String^>(*it); 
	}

	 
	
		
	
	
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void borrarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Visible = false;
	groupBox1->Visible = false;
	groupBoxagregar->Visible = false;
	borrar->Visible = true;
}
private: System::Void botonborrar_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		if (nombrelista.size() == 0)
		{
			numeroborrar->Enabled = false;
			botonborrar->Enabled = false;
			MessageBox::Show("Antes de borrar un contacto, agregue uno nuevo");
		}
		else
		{
			numeroborrar->Enabled = true;
			botonborrar->Enabled = true;

			int numerocontacto = Convert::ToInt32(numeroborrar->Text);
			numerocontacto -= 1;

			list<string>::iterator it1, it2, it3, it4, it5, it6, it7, it8, it9, it10;
			it1 = nombrelista.begin();
			it2 = apellidoslista.begin();
			it3 = telefonolista.begin();
			it4 = extensionlista.begin();
			it5 = correolista.begin();
			it6 = nacionalidadlista.begin();
			it7 = trabajolista.begin();
			it8 = profesionlista.begin();
			it9 = nivelacadlista.begin();
			it10 = redeslista.begin();

			for (int i = 0; i < numerocontacto; i++)
			{
				it1++;
				it2++;
				it3++;
				it4++;
				it5++;
				it6++;
				it7++;
				it8++;
				it9++;
				it10++;
			}
			nombrelista.erase(it1);
			apellidoslista.erase(it2);
			telefonolista.erase(it3);
			extensionlista.erase(it4);
			correolista.erase(it5);
			nacionalidadlista.erase(it6);
			trabajolista.erase(it7);
			profesionlista.erase(it8);
			nivelacadlista.erase(it9);
			redeslista.erase(it10);

			numeroborrar->Text = ""; 
				MessageBox::Show("Contacto borrado con exito");



		}


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Visible = false;
	groupBox1->Visible = false;
	groupBoxagregar->Visible = true;
	borrar->Visible = false;
	button1Agregar->Visible = false;
	botoneditar->Visible = true;
	editar->Visible = true;
	contactoeditar->Visible = true;

	
}
private: System::Void editar_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void contactoeditar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void botoneditar_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
			string nombres;
			string apellido;
			string nivelAca;
			string trabajo;
			string redes;
			string nacionalidad;
			string profesion;
			string correo;
			int numero;
			string numero2;
			int ext;
			string ext2; //extension para el numero telefonico

			//nombre
			if (textBoxnombre->Text != "")
			{
				int n = Convert::ToInt32(contactoeditar->Text);
				n -= 1;

				list<string>::iterator e1, a1;
				e1 = a1 = nombrelista.begin();
				
				for (int i = 0; i < n; i++)
				{
					e1++;
				}
				for (int i = 0; i < n+1; i++)
				{
					a1++;
				}
				nombrelista.erase(e1);
				
				nombres = marshal_as<string>(textBoxnombre->Text);
				contactos.setNombres(nombres);
				nombrelista.emplace(a1, contactos.getnombres()); 
			}
			//apellido
			if (textBoxapellido->Text != "")
			{
				int n = Convert::ToInt32(contactoeditar->Text);
				n -= 1;

				list<string>::iterator e1, a1;
				e1 = a1 = apellidoslista.begin();

				for (int i = 0; i < n; i++)
				{
					e1++;
				}
				for (int i = 0; i < n + 1; i++)
				{
					a1++;
				}
				apellidoslista.erase(e1);

				apellido = marshal_as<string>(textBoxapellido->Text);
				contactos.setapellidos(apellido);
				apellidoslista.emplace(a1, contactos.getApellidos());
			}
			//telefono
			
			if (textBoxnumero->Text != "")
			{
				int n = Convert::ToInt32(contactoeditar->Text);
				n -= 1;

				list<string>::iterator e1, a1;
				e1 = a1 = telefonolista.begin();

				for (int i = 0; i < n; i++)
				{
					e1++;
				}
				for (int i = 0; i < n + 1; i++)
				{
					a1++;
				}
				telefonolista.erase(e1);

				numero = Convert::ToInt32(textBoxnumero->Text);
				contactos.setNumeroTelefonico(numero);
				numero2 = marshal_as<string>(textBoxnumero->Text);
				telefonolista.emplace(a1, numero2);
			}
			//extension
			if (textBoxextension->Text != "")
			{
				int n = Convert::ToInt32(contactoeditar->Text);
				n -= 1;

				list<string>::iterator e1, a1;
				e1 = a1 = extensionlista.begin();

				for (int i = 0; i < n; i++)
				{
					e1++;
				}
				for (int i = 0; i < n + 1; i++)
				{
					a1++;
				}
				extensionlista.erase(e1);

				ext = Convert::ToInt32(textBoxextension->Text);
				contactos.setextension(ext);
				ext2 = marshal_as<string>(textBoxextension->Text);
				extensionlista.emplace(a1, ext2);
			}
			//correo
			if (textBoxcorreo->Text != "")
			{
				int n = Convert::ToInt32(contactoeditar->Text);
				n -= 1;

				list<string>::iterator e1, a1;
				e1 = a1 = correolista.begin();

				for (int i = 0; i < n; i++)
				{
					e1++;
				}
				for (int i = 0; i < n + 1; i++)
				{
					a1++;
				}
				correolista.erase(e1);

				correo = marshal_as<string>(textBoxcorreo->Text);
				contactos.setCorreoElectronico(correo);
				correolista.emplace(a1, contactos.getcorreoelectronico());
			}
			//nacionalidad
			if (textBoxnacionalidad->Text != "")
			{
				int n = Convert::ToInt32(contactoeditar->Text);
				n -= 1;

				list<string>::iterator e1, a1;
				e1 = a1 = nacionalidadlista.begin();

				for (int i = 0; i < n; i++)
				{
					e1++;
				}
				for (int i = 0; i < n + 1; i++)
				{
					a1++;
				}
				nacionalidadlista.erase(e1);

				nacionalidad = marshal_as<string>(textBoxnacionalidad->Text);
				contactos.setNacionalidad(nacionalidad);
				nacionalidadlista.emplace(a1, contactos.getnacionalidad());
			}
			//trabajo
			if (textBoxtrabajo->Text != "")
			{
				int n = Convert::ToInt32(contactoeditar->Text);
				n -= 1;

				list<string>::iterator e1, a1;
				e1 = a1 = trabajolista.begin();

				for (int i = 0; i < n; i++)
				{
					e1++;
				}
				for (int i = 0; i < n + 1; i++)
				{
					a1++;
				}
				trabajolista.erase(e1);

				trabajo = marshal_as<string>(textBoxtrabajo->Text);
				contactos.setTrabajoActual(trabajo);
				trabajolista.emplace(a1, contactos.gettrabajoactual());
			}
			//profesion
			if (textBoxprofesion->Text != "")
			{
				int n = Convert::ToInt32(contactoeditar->Text);
				n -= 1;

				list<string>::iterator e1, a1;
				e1 = a1 = profesionlista.begin();

				for (int i = 0; i < n; i++)
				{
					e1++;
				}
				for (int i = 0; i < n + 1; i++)
				{
					a1++;
				}
				profesionlista.erase(e1);

				profesion = marshal_as<string>(textBoxprofesion->Text);
				contactos.setProfesion(profesion);
				profesionlista.emplace(a1, contactos.getprofesion());
			}
			//nivel academico
			if (comboBoxnivelacad->Text != "")
			{
				int n = Convert::ToInt32(contactoeditar->Text);
				n -= 1;

				list<string>::iterator e1, a1;
				e1 = a1 = nivelacadlista.begin();

				for (int i = 0; i < n; i++)
				{
					e1++;
				}
				for (int i = 0; i < n + 1; i++)
				{
					a1++;
				}
				nivelacadlista.erase(e1);

				nivelAca = marshal_as<string>(comboBoxnivelacad->Text);
				contactos.setNivelAcademico(nivelAca);
				nivelacadlista.emplace(a1, contactos.getnivelacademico());
			}
			//redes
			if (textBoxredes->Text != "")
			{
				int n = Convert::ToInt32(contactoeditar->Text);
				n -= 1;

				list<string>::iterator e1, a1;
				e1 = a1 = redeslista.begin();

				for (int i = 0; i < n; i++)
				{
					e1++;
				}
				for (int i = 0; i < n + 1; i++)
				{
					a1++;
				}
				redeslista.erase(e1);

				redes = marshal_as<string>(textBoxredes->Text);
				contactos.setRedesSociales(redes);
				redeslista.emplace(a1, contactos.getredessociales());
			}

			MessageBox::Show("Contacto editado con exito");

			textBoxnombre->Text = "";
			textBoxapellido->Text = "";
			comboBoxnivelacad->Text = "";
			textBoxtrabajo->Text = "";
			textBoxredes->Text = "";
			textBoxnacionalidad->Text = "";
			textBoxprofesion->Text = "";
			textBoxcorreo->Text = "";
			textBoxextension->Text = "";
			textBoxnumero->Text = "";
			contactoeditar->Text = ""; 

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}




}
};
}
