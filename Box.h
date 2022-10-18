#pragma once
#include <string>
using namespace std;

namespace VeddingMachine
{
    class Machine
    {
    public:        
        Machine(short SlotsCount, short maxSlots);
        Machine(short SlotsCount);
        ~Machine() = default;

        
        short getEmptySlotsCount() const;
        void setEmptySlotsCount(short value);

        short getmaxSlotsCount() const;
        void setmaxSlotsCount(short value);

        friend ostream& operator<<(ostream& output, const Machine& m);

    private:   
        short EmptySlotsCount;
        short maxSlotsCount;
    };

    class Snack
    {
    public:
        Snack(string name,  short price, short calories);
        Snack(string name,  short price);
        Snack(string name);
        ~Snack() = default;

        string getsnack() const;
        void setsnack(string value);

        short getPrice() const;
        void setPrice(short value);

        short getCalories() const;
        void setCalories(short value);

        friend ostream& operator<<(ostream& output, const Snack& m);

    private:
        string snack;
        short Price;
        short Calories;
    };

    class Slot
    {
    public:
        short SnackSlot;
        short addSnack;
        short addSlot;

        Slot(short slot, short add, short addslot);
        Slot(short add, short addslot);
        Slot(short add);
        ~Slot() = default;

        short getSnackSlot() const;
        void setSnackSlot(short value);

        short getaddSnack() const;
        void setaddSnack(short value);

        short getaddSlot() const;
        void setaddSlot(short value);

        friend ostream& operator<<(ostream& output, const Slot& m);
    };
}