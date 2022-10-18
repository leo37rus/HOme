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
		Slot* slot = new Slot(10/*количество батончиков, которые помещаютс€ в слот*/);
		slot->addSnack(name); //ƒобавл€ем батончик в слот
		Machine* maxSlots = new Machine(maxSlots /* оличество слотов дл€ снеков*/);
		slot->addSlot(); // ѕомещаем слот обратно в аппарат

		cout << maxSlots->getEmptySlotsCount(); // ƒолжно выводить количество пустых слотов дл€ снеков
		delete maxSlots;
		delete slot;
		delete name;
		
	}
}