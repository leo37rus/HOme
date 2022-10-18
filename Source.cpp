#include "Box.h"
#include <iostream>
#include <string>

using namespace std;


namespace VeddingMachine
{
   
    Machine::Machine(short SlotsCount, short maxSlots)
    {        
        EmptySlotsCount = SlotsCount;  
        maxSlotsCount = maxSlots;
    }

    Machine::Machine(short SlotsCount)
    {
        EmptySlotsCount = SlotsCount;
    }


    short Machine::getEmptySlotsCount() const
    {
        return EmptySlotsCount;
    }

    void Machine::setEmptySlotsCount(short value)
    {
        EmptySlotsCount = value;
    }

    short Machine::getmaxSlotsCount() const
    {
        return maxSlotsCount;
    }

    void Machine::setmaxSlotsCount(short value)
    {
        maxSlotsCount = value;
    }

    ostream& operator<<(ostream& output, const Machine& m)
    {
        output << "Пустые слоты : " << m.EmptySlotsCount << endl
              << "колличество заполненных слотов: " << m.maxSlotsCount << endl;
        return output;
    }

    Snack::Snack(string name, short price, short calories)
    {
        snack = name;
        Price = price;
        Calories = calories;
    }

    Snack::Snack(string name,short price)
    {
        snack = name;
        Price = price;

    }

    Snack::Snack(string name)
    {
        snack = name;
    }

    string Snack::getsnack() const
    {
        return snack;
    }

    void Snack::setsnack(string value)
    {
        snack = value;
    }

    short Snack::getPrice() const
    {
        return Price;
    }

    void Snack::setPrice(short value)
    {
        Price = value;
    }

    short Snack::getCalories() const
    {
        return Calories;
    }

    void Snack::setCalories(short value)
    {
        Calories = value;
    }

    ostream& operator <<(ostream& output, const Snack& m)
    {
        output << "Продукт: " << m.snack << endl
              << "Цена продуктов: " << m.Price << endl
            << "Калорийность продуктов: " << m.Calories << endl;
        return output;
    }
  
    Slot::Slot(short slot, short add, short addslot)
    {
        SnackSlot = slot;
        addSnack = add;
        addSlot = addslot;
    }

    Slot::Slot(short add, short addslot)
    {
        addSnack = add;
        addSlot = addslot;
    }

    Slot::Slot(short add)
    {
        addSnack = add;
    }

    short Slot::getSnackSlot() const
    {
        return SnackSlot;
    }

    void Slot::setSnackSlot(short value)
    {
        SnackSlot = value;
    }

    short Slot::getaddSnack() const
    {
        return addSnack;
    }

    void Slot::setaddSnack(short value)
    {
        addSnack = value;
    }

    short Slot::getaddSlot() const
    {
        return addSlot;
    }

    void Slot::setaddSlot(short value)
    {
        addSlot = value;
    }

    ostream& operator <<(ostream& output, const Slot& m)
    {
        output << "Колличество слотов: " << m.SnackSlot << endl
            << "Добавление продукта: " << m.addSnack << endl
            << "Добавление ячейки продукта: " << m.addSlot << endl;
        return output;
    }
    
}