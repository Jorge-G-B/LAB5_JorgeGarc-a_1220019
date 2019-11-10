#pragma once

namespace LAB5JorgeGarcía1220019 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

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
	private: System::Windows::Forms::Button^  btnBinario;
	protected:
	private: System::Windows::Forms::Button^  btnSecuencial;
	private: System::Windows::Forms::Button^  btnHashing;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  cantidadTbx;
	private: System::Windows::Forms::Button^  generarArreglo;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;

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
			this->btnBinario = (gcnew System::Windows::Forms::Button());
			this->btnSecuencial = (gcnew System::Windows::Forms::Button());
			this->btnHashing = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cantidadTbx = (gcnew System::Windows::Forms::TextBox());
			this->generarArreglo = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnBinario
			// 
			this->btnBinario->Location = System::Drawing::Point(116, 80);
			this->btnBinario->Margin = System::Windows::Forms::Padding(2);
			this->btnBinario->Name = L"btnBinario";
			this->btnBinario->Size = System::Drawing::Size(106, 22);
			this->btnBinario->TabIndex = 15;
			this->btnBinario->Text = L"Buscar Binario";
			this->btnBinario->UseVisualStyleBackColor = true;
			this->btnBinario->Click += gcnew System::EventHandler(this, &MyForm::btnBinario_Click);
			// 
			// btnSecuencial
			// 
			this->btnSecuencial->Location = System::Drawing::Point(116, 54);
			this->btnSecuencial->Margin = System::Windows::Forms::Padding(2);
			this->btnSecuencial->Name = L"btnSecuencial";
			this->btnSecuencial->Size = System::Drawing::Size(106, 22);
			this->btnSecuencial->TabIndex = 14;
			this->btnSecuencial->Text = L"Buscar Secuencial";
			this->btnSecuencial->UseVisualStyleBackColor = true;
			this->btnSecuencial->Click += gcnew System::EventHandler(this, &MyForm::btnSecuencial_Click);
			// 
			// btnHashing
			// 
			this->btnHashing->Location = System::Drawing::Point(116, 28);
			this->btnHashing->Margin = System::Windows::Forms::Padding(2);
			this->btnHashing->Name = L"btnHashing";
			this->btnHashing->Size = System::Drawing::Size(106, 22);
			this->btnHashing->TabIndex = 13;
			this->btnHashing->Text = L"Buscar Hashing";
			this->btnHashing->UseVisualStyleBackColor = true;
			this->btnHashing->Click += gcnew System::EventHandler(this, &MyForm::btnHashing_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 39);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Valor a Buscar";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 56);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(95, 20);
			this->textBox1->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 31);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Ingrese Cantidad de Números";
			// 
			// cantidadTbx
			// 
			this->cantidadTbx->Location = System::Drawing::Point(174, 28);
			this->cantidadTbx->Margin = System::Windows::Forms::Padding(2);
			this->cantidadTbx->Name = L"cantidadTbx";
			this->cantidadTbx->Size = System::Drawing::Size(76, 20);
			this->cantidadTbx->TabIndex = 9;
			// 
			// generarArreglo
			// 
			this->generarArreglo->Location = System::Drawing::Point(254, 18);
			this->generarArreglo->Margin = System::Windows::Forms::Padding(2);
			this->generarArreglo->Name = L"generarArreglo";
			this->generarArreglo->Size = System::Drawing::Size(91, 42);
			this->generarArreglo->TabIndex = 8;
			this->generarArreglo->Text = L"Generar Arreglo";
			this->generarArreglo->UseVisualStyleBackColor = true;
			this->generarArreglo->Click += gcnew System::EventHandler(this, &MyForm::generarArreglo_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->generarArreglo);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->cantidadTbx);
			this->groupBox1->Location = System::Drawing::Point(14, 23);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(350, 82);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Creación de Arreglo";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnBinario);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->btnHashing);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->btnSecuencial);
			this->groupBox2->Location = System::Drawing::Point(83, 132);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(243, 122);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Búsqueda";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 316);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
		private: ArrayList ^Arreglo;
		private: Hashtable ^TablaHash;
		private: int size;
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void generarArreglo_Click(System::Object^  sender, System::EventArgs^  e) {
	int cantidad = System::Convert::ToInt16(cantidadTbx->Text);
	generarNumerosAleatorios(cantidad);
	mostrarNumerosAleatorios();
	llenarTablaHash(cantidad);
	size = cantidad;
}
private: System::Void generarNumerosAleatorios(int size) {
	Arreglo = gcnew ArrayList(size);
	Random^ random = gcnew Random();
    for (int i = 0; i < size; i++) {
	Arreglo->Add(random->Next(0, 100));
	}
}
private: System::Void mostrarNumerosAleatorios() {
	Arreglo->Sort();
	String^ valores = "";
	for each (int num in Arreglo)
	{
		valores = valores + num + " ";
	}
	System::Windows::Forms::MessageBox::Show(valores);
}
private: System::Void llenarTablaHash(int size) {
	TablaHash = gcnew Hashtable(size * 2);
	int llave = 0;
	for each (int num in Arreglo)
	{
		llave = num % size * 2;
		while (TablaHash[llave] != nullptr) {
			if (llave < size * 2) {
			llave++;
			}
			else {
				llave = 0;
			}
			
		}
		TablaHash->Add(llave, num);
	}
}
private: System::Int16 PosicionEnHash(int valorBuscar, int size) {
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	int posicion = valorBuscar % (size * 2);
	if (System::Convert::ToInt16(TablaHash[posicion]) == valorBuscar) {
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
		return posicion;
	}
	while (System::Convert::ToInt16(TablaHash[posicion]) != valorBuscar) {
		if (posicion < size * 2) {
			posicion++;
		}
		else {
			posicion = 0;
		}
	}
	Timer->Stop();
	System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
	return posicion;

}
private: System::Void btnSecuencial_Click(System::Object^  sender, System::EventArgs^  e) {
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	int ValorC = System::Convert::ToInt16(textBox1->Text);
	int cantidad = System::Convert::ToInt16(cantidadTbx->Text);
	int i = 0;
	for each(int num in Arreglo) {
		if (ValorC == num) {
			Timer->Stop();
			System::Windows::Forms::MessageBox::Show("El valor " + ValorC.ToString() + " en la posición: " + i.ToString());
			System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
		}
		i++;
	}
}
private: System::Void btnHashing_Click(System::Object^  sender, System::EventArgs^  e) {
	int valorBuscar = System::Convert::ToInt16(textBox1->Text);
	System::Windows::Forms::MessageBox::Show("El valor " + System::Convert::ToString(valorBuscar) + " se encuentra en la posición: " + PosicionEnHash(valorBuscar, size));
}
private: System::Void btnBinario_Click(System::Object^  sender, System::EventArgs^  e) {
	Stopwatch^ Timer = gcnew Stopwatch();
	Timer->Start();
	int ValorC = System::Convert::ToInt16(textBox1->Text);
	int first = 0;
	int middle;
	int last = System::Convert::ToInt16(cantidadTbx->Text) - 1;
	while (first <= last) {
		middle = (first + last) / 2;
		if (ValorC == System::Convert::ToInt16(Arreglo[middle])) {
			Timer->Stop();
			System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
			System::Windows::Forms::MessageBox::Show("El valor " + System::Convert::ToString(ValorC) + " se encuentra en la posición: " + System::Convert::ToString(middle));
			first = last;
		}
		else {
			if (System::Convert::ToInt16(Arreglo[middle]) > ValorC) {
			last = middle-1;
			}
			else {
				first = middle + 1;
			}
		}
	}

}
};
}
