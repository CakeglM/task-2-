#pragma once
#include <math.h>
#include <windows.h>
#include <string.h>
namespace task2noae
{

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// ������ ��� MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: �������� ��� ������������
            //
        }

    protected:
        /// <summary>
        /// ���������� ��� ������������ �������.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Button^ button1;
    protected:

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;

    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;

    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::TextBox^ textBox1;

    private:
        /// <summary>
        /// ������������ ���������� ������������.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// ��������� ����� ��� ��������� ������������ � �� ��������� 
        /// ���������� ����� ������ � ������� ��������� ����.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(106, 399);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(177, 62);
            this->button1->TabIndex = 0;
            this->button1->Text = L"������";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(144, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(458, 32);
            this->label1->TabIndex = 2;
            this->label1->Text = L"���������� �������� �������";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(71, 57);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(346, 161);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 3;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(423, 83);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(71, 16);
            this->label2->TabIndex = 4;
            this->label2->Text = L",���� x<=0";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(423, 136);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(52, 16);
            this->label3->TabIndex = 5;
            this->label3->Text = L",0<x<=a";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(423, 191);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(65, 16);
            this->label4->TabIndex = 6;
            this->label4->Text = L",���� x>a";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(113, 248);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(141, 16);
            this->label5->TabIndex = 7;
            this->label5->Text = L"������� �������� a";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(113, 298);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(139, 16);
            this->label6->TabIndex = 8;
            this->label6->Text = L"������� �������� x";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(113, 339);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(150, 16);
            this->label7->TabIndex = 9;
            this->label7->Text = L"�������� ������� y=";
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(345, 295);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(300, 22);
            this->textBox2->TabIndex = 11;
            this->textBox2->Text = L"5";
            this->textBox2->Enter += gcnew System::EventHandler(this, &MyForm::textBox2_Enter);
            this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(345, 339);
            this->textBox3->Name = L"textBox3";
            this->textBox3->ReadOnly = true;
            this->textBox3->Size = System::Drawing::Size(300, 22);
            this->textBox3->TabIndex = 12;
            this->textBox3->Text = L"12";
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(468, 399);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(177, 62);
            this->button3->TabIndex = 14;
            this->button3->Text = L"�����";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(345, 248);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(300, 22);
            this->textBox1->TabIndex = 15;
            this->textBox1->Text = L"3";
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            this->textBox1->Enter += gcnew System::EventHandler(this, &MyForm::textBox1_Enter);
            this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(756, 497);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button1);
            this->Name = L"MyForm";
            this->Text = L"������ �.�.,23-��";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        double y, x, a;
        if ((textBox1->Text != "") && (textBox2->Text != ""))
        {
            a = Convert::ToDouble(textBox1->Text);
            x = Convert::ToDouble(textBox2->Text);
            if (x <= 0)
                y = (pow(x , 3) - log(x)+1);
            else if (x > 0 && x <= a)
            {
                y = (2*x+2)/((2*x-1)+1);
            }
            else
            {
                y =(pow(x,4)-(pow(x,x)));
            }
            textBox3->Text = Convert::ToString(y);
        }
        else
        {
            MessageBox::Show("������� ���������� ������ � � �", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        }
    }

    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    };
    private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
        int l, t, k;
        bool a = true;
        String^ str;
        str = textBox1->Text;
        l = str->Length;
        t = 0;
        k = 0;

        if (l > 0) {
            if (str[t] == '-')
                t++;
            if (str[t] == ',')
                a = false;

            while (t < l) {
                if (str[t] == ',') {
                    if (t == l - 1 ||k > 0)
                        a = false;
                    k++;
                }
                else if (str[t] < '0' || str[t] > '9')
                    a = false;
                t++;
            }

            if (a == false) {
                MessageBox::Show("�������� � �� �������� ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
            }
        }
    }

    private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
        int l, t, k;
        bool a = true;
        String^ str;
        str = textBox2->Text;
        l = str->Length;
        t = 0;
        k = 0;

        if (l > 0) {
            while (t < l) {
                if (str[t] == ',') {
                    if (t == l - 1 || k > 0)
                        a = false;
                    k++;
                }
                else if (str[t] < '0' || str[t] > '9')
                    a = false;
                t++;
            }

            if (a == false) {
                MessageBox::Show("�������� X �� �������� ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
            }
        }
    }


    private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
        textBox3->Text = "";
    }
    private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
        textBox3->Text = "";
    }
    private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}