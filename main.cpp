#include "Box.h"
#include <iostream>
#include <string>

using namespace std;


namespace VeddingMachine
{
	int main()
	{
		setlocale(LC_ALL, "");
		Snack* name = new Snack("Bounty");		
		Machine* maxSlots = new Machine(20);
		Slot* slot = new Slot(10/*���������� ����������, ������� ���������� � ����*/);
		slot->addSnack(name); //��������� �������� � ����
		Machine* maxSlots = new Machine(maxSlots /*���������� ������ ��� ������*/);
		slot->addSlot(); // �������� ���� ������� � �������

		cout << maxSlots->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
		delete maxSlots;
		delete slot;
		delete name;
		
	}
}