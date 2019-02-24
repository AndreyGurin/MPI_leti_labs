#include "pch.h"

/*
������� � ��������� ��������� �� 2-� ��������� 
� ����������� ������� int MPI_Init(int* argc, char*** argv) 
� int MPI_Finalize( void ).
----------------------------------------------------------------
��� ����, ����� ��������� �� ���� ��������� ����� ������ � 
��������� ������� �� ������� "Debugging" ������� ��������
��������� ������: "-n 2"
*/

using namespace std;

int main(int argc, char* argv[])
{
	MPI_Init(&argc, &argv);
	cout << "Parallel Section..." << endl;
	MPI_Finalize();
}


